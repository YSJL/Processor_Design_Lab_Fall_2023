 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE,
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  always @(posedge clk) begin
    // for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
    //     $display("%h", imem[i]);
    // end
    $display("FE - Total: %h, Correct: %h", total_branch_predictions, correct_branch_predictions);
  end


  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
   
  `UNUSED_VAR(valid_FE)
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 

   /* branch prediction regs/wires*/
  reg [`BHR_ENTRY_WIDTH-1:0] BHR;
  reg [`BHR_ENTRY_WIDTH-1:0] YPT[`PHT_TOTAL_ENTRIES-1:0];
  reg [1:0] YPTPT[`PHT_TOTAL_ENTRIES-1:0];
  reg [1:0] PHT[`PHT_TOTAL_ENTRIES-1:0];
  wire [`BHR_ENTRY_WIDTH-1:0] PHTfeAddr;
  wire [`BHR_ENTRY_WIDTH-1:0] PHTagexAddr;
  wire [1:0] PHTfeVal;
  wire [1:0] PHTagexVal;
  wire [3:0] BTBfeAddr;
  wire [`BTB_ENTRY_WIDTH-1:0] BTBfeVal;
  wire [25:0] BTBfeTag;
  reg [`BTB_ENTRY_WIDTH-1:0] BTB[`BTB_INDEX_WIDTH-1:0];
  wire [`DBITS-1:0] predicted_FE;

  /*initialize*/
  integer i;
  initial begin
    total_branch_predictions = 0;
    correct_branch_predictions = 0;
    BHR = 'h0;
    for (i = 0; i < `PHT_TOTAL_ENTRIES; i = i + 1)
      PHT[i] = 'b1;
      YPT[i] = 'h0;
      YPTPT[i] = 'b1;
    for (i = 0; i < `BTB_INDEX_WIDTH; i = i + 1)
      BTB[i] = 'h0;
  end
  
  assign PHTfeAddr = PC_FE_latch[`BHR_ENTRY_WIDTH + `BHR_PC_XOR_START - 1 : `BHR_PC_XOR_START] ^ BHR;
  assign PHTagexAddr = PC_AGEX[`BHR_ENTRY_WIDTH + `BHR_PC_XOR_START - 1 : `BHR_PC_XOR_START] ^ BHR;
  assign PHTfeVal = PHT[PHTfeAddr];
  assign PHTagexVal = PHT[PHTagexAddr];
  assign BTBfeAddr = PC_FE_latch[5:2];
  assign BTBfeVal = BTB[PC_FE_latch[5:2]];
  assign BTBfeTag = BTB[PC_FE_latch[5:2]][`BTB_ENTRY_WIDTH-2:`BTB_ENTRY_WIDTH-27];

  integer total_branch_predictions;
  integer correct_branch_predictions;

  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 
  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
     
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE,
                                // if you add more bits here, please increase the width of latch in VX_define.vh
                                predicted_FE
                                };

  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;
  wire br_wrong_now_AGEX;
  wire br_taken_AGEX;
  wire [`DBITS-1:0] br_target_AGEX; 
  wire [`DBITS-1:0] PC_AGEX;
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire is_jbr_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    is_jbr_AGEX,
    br_taken_AGEX,
    br_target_AGEX,
    PC_AGEX,
    pcplus_AGEX
  } = from_AGEX_to_FE;

  /*assign predicted_FE = (PHTfeVal >= 2'b10 &&
             BTBfeVal[`BTB_ENTRY_WIDTH-1] &&
             BTBfeVal[`BTB_ENTRY_WIDTH-2:`BTB_ENTRY_WIDTH-27] == PC_FE_latch[31:6]) ? BTBfeVal[`BTB_ENTRY_WIDTH-28:0] : pcplus_FE;*/
  assign predicted_FE = (YPTPT[YPT[YPTindex]] >= 2'b10 &&
             BTBfeVal[`BTB_ENTRY_WIDTH-1] &&
             BTBfeVal[`BTB_ENTRY_WIDTH-2:`BTB_ENTRY_WIDTH-27] == PC_FE_latch[31:6]) ? BTBfeVal[`BTB_ENTRY_WIDTH-28:0] : pcplus_FE;

  always @ (posedge clk) begin
  /* you need to extend this always block */
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      end 
    else if (br_mispred_AGEX)
      PC_FE_latch <= br_target_AGEX;
    else if (stall_pipe_FE) 
      PC_FE_latch <= PC_FE_latch; 
   /* else if (PHTfeVal >= 2'b10 &&
             BTBfeVal[`BTB_ENTRY_WIDTH-1] &&
             BTBfeVal[`BTB_ENTRY_WIDTH-2:`BTB_ENTRY_WIDTH-27] == PC_FE_latch[31:6])
      PC_FE_latch <= BTBfeVal[`BTB_ENTRY_WIDTH-28:0];*/
    else if (YPTPT[YPT[YPTindex]] >= 2'b10&&
              BTBfeVal[`BTB_ENTRY_WIDTH-1] &&
             BTBfeVal[`BTB_ENTRY_WIDTH-2:`BTB_ENTRY_WIDTH-27] == PC_FE_latch[31:6])
      PC_FE_latch <= BTBfeVal[`BTB_ENTRY_WIDTH-28:0];
    else begin 
      PC_FE_latch <= pcplus_FE;
      inst_count_FE <= inst_count_FE + 1; 
      end 
  end
  

  wire[`BTB_ENTRY_WIDTH-1:0] BTBagexVal = BTB[PC_AGEX[5:2]];
  wire[3:0] BTBagexAddr = PC_AGEX[5:2];
  wire[25:0] BTBagexTag = PC_AGEX[31:6];
  wire[`BHR_ENTRY_WIDTH + `BHR_PC_XOR_START - 1 : `BHR_PC_XOR_START] YPTindex = br_target_AGEX[`BHR_ENTRY_WIDTH + `BHR_PC_XOR_START - 1 : `BHR_PC_XOR_START];

  //Update BTB and PHT
  always @ (posedge clk) begin
    if (is_jbr_AGEX) begin
      total_branch_predictions = total_branch_predictions + 1;
      BTB[PC_AGEX[5:2]] <= {1'b1, PC_AGEX[31:6],br_target_AGEX};
      if (br_taken_AGEX && PHTagexVal < 2'b11) begin
        PHT[PHTagexAddr] <= PHT[PHTagexAddr] + 1;
      end
      else if (!br_taken_AGEX && PHTagexVal > 2'b00) begin
        PHT[PHTagexAddr] <= PHT[PHTagexAddr] - 1;
      end
      else ;
      if (br_taken_AGEX && YPTPT[YPT[YPTindex]] < 2'b11) begin
        YPTPT[YPT[YPTindex]] <= YPTPT[YPT[YPTindex]] + 1;
      end
      else if (!br_taken_AGEX && YPTPT[YPT[YPTindex]] > 2'b00) begin
        YPTPT[YPT[YPTindex]] <= YPTPT[YPT[YPTindex]] - 1;
      end
      else ;
      BHR <= {BHR[`BHR_ENTRY_WIDTH-2:0], br_taken_AGEX};
      YPT[YPTindex] <= {YPT[YPTindex][`BHR_ENTRY_WIDTH-2:0], br_taken_AGEX};
      if(!br_mispred_AGEX)
        correct_branch_predictions = correct_branch_predictions + 1;
    end
  end  

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end

endmodule
