 `include "define.vh" 

module MEM_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_WB_to_MEM_WIDTH-1:0] from_WB_to_MEM,  
  input wire [`AGEX_latch_WIDTH-1:0] from_AGEX_latch, 
  output wire [`MEM_latch_WIDTH-1:0] MEM_latch_out,
  output wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,
  output wire [`from_MEM_to_DE_WIDTH-1:0] from_MEM_to_DE,
  output wire [`from_WB_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX
);

  `UNUSED_VAR (from_WB_to_MEM)
  // D-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] dmem[`DMEMWORDS-1:0];
 
 // DMEM and IMEM should contains the same contents 
 initial begin
     $readmemh(`IDMEMINITFILE , dmem);
  end
  
  
  reg [`MEM_latch_WIDTH-1:0] MEM_latch; 
  wire valid_MEM;
  wire[`MEM_latch_WIDTH-1:0] MEM_latch_contents; 



  wire [`IOPBITS-1:0] op_I_MEM;
  wire [`DBITS-1:0] inst_count_MEM; 
  wire [`INSTBITS-1:0] inst_MEM; 
  wire [`DBITS-1:0] PC_MEM;
 


// **TODO: Complete the rest of the pipeline 

  wire [`DBITS-1:0] aluout_MEM;  // from ALU either
  
  wire [`REGNOBITS-1:0] wregno_MEM;
  wire wr_reg_MEM;
  

  wire [`DBITS-1:0] memaddr_MEM;  // memory address. need to be computed in AGEX stage and pass through a latch 
  wire [`DBITS-1:0] rd_val_MEM;  // memory read value 
  wire [`DBITS-1:0] wr_val_MEM;  // memory write value 
  wire wr_mem_MEM;  // is this instruction writing a value into memory? 
  wire is_lw_MEM;
  
  assign memaddr_MEM = aluout_MEM;
  
  assign is_lw_MEM = (op_I_MEM == `LW_I) ? 1 : 0; 
  // Read from D-MEM  (read code is completed if there is a correct memaddr_MEM ) 
  assign rd_val_MEM = dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]];

  
 // Write to D-MEM
  always @ (posedge clk) begin
    if(wr_mem_MEM)
    // fill out the correct signal name to do write operations 
      dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]] <= wr_val_MEM; 
  end
  

    
   assign MEM_latch_out = MEM_latch; 

   assign {
                                valid_MEM,
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM,
                                 // more signals might need
                                aluout_MEM,
                                wr_val_MEM,
                                wr_mem_MEM,
                                wr_reg_MEM,
                                wregno_MEM
                                 } = from_AGEX_latch;  
 

   
   assign MEM_latch_contents = {
                                valid_MEM,
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM,
                                        // more signals might need 
                                aluout_MEM,
                                is_lw_MEM,
                                rd_val_MEM,
                                wr_reg_MEM,
                                wregno_MEM                
   };
 

  always @ (posedge clk) begin
    if(reset) begin
        MEM_latch <={`MEM_latch_WIDTH{1'b0}}; 
    end
    else 
     begin 
        MEM_latch <= MEM_latch_contents;
     end 
    
  end

  // forward signals to AGEX stage
  assign from_MEM_to_AGEX = '0;

  // forward signals to DE stage
  assign from_MEM_to_DE = '0;

  // forward signals to FE stage
  assign from_MEM_to_FE = '0;

endmodule
