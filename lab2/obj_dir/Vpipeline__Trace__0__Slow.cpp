// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declBus(c+6,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+7,"FE_latch_out", false,-1, 160,0);
    tracep->declArray(c+13,"DE_latch_out", false,-1, 272,0);
    tracep->declArray(c+22,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+28,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+34,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+35,"from_AGEX_to_FE", false,-1, 98,0);
    tracep->declBus(c+319,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+320,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+39,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+319,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+40,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+319,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+320,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+320,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declBus(c+319,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+320,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+13,"from_DE_latch", false,-1, 272,0);
    tracep->declArray(c+22,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+35,"from_AGEX_to_FE", false,-1, 98,0);
    tracep->declBus(c+39,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+22,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+42,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+48,"valid_AGEX", false,-1);
    tracep->declBus(c+49,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+50,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+51,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+52,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+53,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+54,"br_cond_AGEX", false,-1);
    tracep->declBit(c+55,"is_br_AGEX", false,-1);
    tracep->declBit(c+56,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+57,"is_jbr_AGEX", false,-1);
    tracep->declBit(c+58,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+59,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+60,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+61,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+62,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+63,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+64,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+65,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+66,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+67,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+39,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+68,"br_taken_AGEX", false,-1);
    tracep->declBus(c+69,"predicted_FE", false,-1, 31,0);
    tracep->declBus(c+1,"br_count", false,-1, 31,0);
    tracep->declBus(c+2,"j_count", false,-1, 31,0);
    tracep->declBus(c+3,"jbr_count", false,-1, 31,0);
    tracep->declBus(c+4,"is_jbr_count", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declArray(c+7,"from_FE_latch", false,-1, 160,0);
    tracep->declBus(c+39,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+319,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+40,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+34,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+13,"DE_latch_out", false,-1, 272,0);
    tracep->declArray(c+13,"DE_latch", false,-1, 272,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+244+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+70,"valid_DE", false,-1);
    tracep->declBus(c+71,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+72,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+73,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+74,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+233,"DE_latch_contents", false,-1, 272,0);
    tracep->declBus(c+75,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+76,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+77,"op_DE", false,-1, 6,0);
    tracep->declBus(c+78,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+79,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+80,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+81,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+83,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+84,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+242,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+243,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+85,"is_br_DE", false,-1);
    tracep->declBit(c+86,"is_jmp_DE", false,-1);
    tracep->declBit(c+87,"rd_mem_DE", false,-1);
    tracep->declBit(c+88,"wr_mem_DE", false,-1);
    tracep->declBit(c+89,"wr_reg_DE", false,-1);
    tracep->declBit(c+90,"wr_reg_WB", false,-1);
    tracep->declBus(c+91,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+92,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+34,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+93,"use_rs1_DE", false,-1);
    tracep->declBit(c+94,"use_rs2_DE", false,-1);
    tracep->declBus(c+95,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+96,"has_data_hazards", false,-1);
    tracep->declBit(c+39,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+321,"temp", false,-1);
    tracep->declBus(c+97,"predicted_FE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declBus(c+34,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+35,"from_AGEX_to_FE", false,-1, 98,0);
    tracep->declBus(c+319,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+320,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+7,"FE_latch_out", false,-1, 160,0);
    tracep->declArray(c+7,"FE_latch", false,-1, 160,0);
    tracep->declBit(c+322,"valid_FE", false,-1);
    tracep->declBus(c+98,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+99,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+323,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+100,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+101,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+34,"stall_pipe_FE", false,-1);
    tracep->declArray(c+102,"FE_latch_contents", false,-1, 160,0);
    tracep->declBus(c+108,"BHR", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+109+i*1,"YPT", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+125+i*1,"YPTPT", true,(i+0), 1,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+141+i*1,"PHT", true,(i+0), 1,0);
    }
    tracep->declBus(c+157,"PHTfeAddr", false,-1, 3,0);
    tracep->declBus(c+158,"PHTagexAddr", false,-1, 3,0);
    tracep->declBus(c+159,"PHTfeVal", false,-1, 1,0);
    tracep->declBus(c+160,"PHTagexVal", false,-1, 1,0);
    tracep->declBus(c+161,"BTBfeAddr", false,-1, 3,0);
    tracep->declQuad(c+162,"BTBfeVal", false,-1, 58,0);
    tracep->declBus(c+164,"BTBfeTag", false,-1, 25,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+165+i*2,"BTB", true,(i+0), 58,0);
    }
    tracep->declBus(c+197,"predicted_FE", false,-1, 31,0);
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->declBus(c+198,"total_branch_predictions", false,-1, 31,0);
    tracep->declBus(c+199,"correct_branch_predictions", false,-1, 31,0);
    tracep->declBit(c+39,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+324,"br_wrong_now_AGEX", false,-1);
    tracep->declBit(c+68,"br_taken_AGEX", false,-1);
    tracep->declBus(c+67,"br_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+50,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+52,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBit(c+57,"is_jbr_AGEX", false,-1);
    tracep->declQuad(c+200,"BTBagexVal", false,-1, 58,0);
    tracep->declBus(c+202,"BTBagexAddr", false,-1, 3,0);
    tracep->declBus(c+203,"BTBagexTag", false,-1, 25,0);
    tracep->declBus(c+204,"YPTindex", false,-1, 24,21);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declBus(c+320,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+22,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+28,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+319,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+319,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+319,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+28,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+205,"valid_MEM", false,-1);
    tracep->declArray(c+206,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+212,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+213,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+214,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+215,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+216,"rd_mem_MEM", false,-1);
    tracep->declBus(c+217,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+218,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+219,"wr_reg_MEM", false,-1);
    tracep->declBus(c+220,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+221,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+217,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+222,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"reset", false,-1);
    tracep->declArray(c+28,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+319,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+40,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+319,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+319,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+223,"valid_WB", false,-1);
    tracep->declBus(c+224,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+225,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+226,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+227,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+228,"wr_reg_WB", false,-1);
    tracep->declBus(c+229,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+230,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+231,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+232,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+279,"[0]", false,-1, 31,0);
    tracep->declBus(c+280,"[1]", false,-1, 31,0);
    tracep->declBus(c+281,"[2]", false,-1, 31,0);
    tracep->declBus(c+282,"[3]", false,-1, 31,0);
    tracep->declBus(c+283,"[4]", false,-1, 31,0);
    tracep->declBus(c+284,"[5]", false,-1, 31,0);
    tracep->declBus(c+285,"[6]", false,-1, 31,0);
    tracep->declBus(c+286,"[7]", false,-1, 31,0);
    tracep->declBus(c+287,"[8]", false,-1, 31,0);
    tracep->declBus(c+288,"[9]", false,-1, 31,0);
    tracep->declBus(c+289,"[10]", false,-1, 31,0);
    tracep->declBus(c+290,"[11]", false,-1, 31,0);
    tracep->declBus(c+291,"[12]", false,-1, 31,0);
    tracep->declBus(c+292,"[13]", false,-1, 31,0);
    tracep->declBus(c+293,"[14]", false,-1, 31,0);
    tracep->declBus(c+294,"[15]", false,-1, 31,0);
    tracep->declBus(c+295,"[16]", false,-1, 31,0);
    tracep->declBus(c+296,"[17]", false,-1, 31,0);
    tracep->declBus(c+297,"[18]", false,-1, 31,0);
    tracep->declBus(c+298,"[19]", false,-1, 31,0);
    tracep->declBus(c+299,"[20]", false,-1, 31,0);
    tracep->declBus(c+300,"[21]", false,-1, 31,0);
    tracep->declBus(c+301,"[22]", false,-1, 31,0);
    tracep->declBus(c+302,"[23]", false,-1, 31,0);
    tracep->declBus(c+303,"[24]", false,-1, 31,0);
    tracep->declBus(c+304,"[25]", false,-1, 31,0);
    tracep->declBus(c+305,"[26]", false,-1, 31,0);
    tracep->declBus(c+306,"[27]", false,-1, 31,0);
    tracep->declBus(c+307,"[28]", false,-1, 31,0);
    tracep->declBus(c+308,"[29]", false,-1, 31,0);
    tracep->declBus(c+309,"[30]", false,-1, 31,0);
    tracep->declBus(c+310,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+311,"[0]", false,-1, 31,0);
    tracep->declBus(c+312,"[1]", false,-1, 31,0);
    tracep->declBus(c+313,"[2]", false,-1, 31,0);
    tracep->declBus(c+314,"[3]", false,-1, 31,0);
    tracep->declBus(c+315,"[4]", false,-1, 31,0);
    tracep->declBus(c+316,"[5]", false,-1, 31,0);
    tracep->declBus(c+317,"[6]", false,-1, 31,0);
    tracep->declBus(c+318,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+276,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hbf07be84__0;
    VlWide<6>/*191:0*/ __Vtemp_hdd074b11__0;
    VlWide<6>/*191:0*/ __Vtemp_h8f16b6dc__0;
    VlWide<6>/*191:0*/ __Vtemp_he00a7bb9__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f7f4bee__0;
    VlWide<6>/*191:0*/ __Vtemp_hd252f34c__0;
    VlWide<9>/*287:0*/ __Vtemp_h011e76eb__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_count),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__j_count),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__jbr_count),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_jbr_count),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),161);
    bufp->fullWData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),273);
    bufp->fullWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
    bufp->fullWData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    __Vtemp_hbf07be84__0[0U] = (IData)((((QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              >> 0x10U))));
    __Vtemp_hbf07be84__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                             << 0x10U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                               >> 0x10U))) 
                                        >> 0x20U));
    __Vtemp_hbf07be84__0[2U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX;
    __Vtemp_hbf07be84__0[3U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_jbr_AGEX) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_taken_AGEX)));
    bufp->fullWData(oldp+35,(__Vtemp_hbf07be84__0),99);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+40,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_hdd074b11__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]));
    __Vtemp_hdd074b11__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hdd074b11__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0xaU)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_hdd074b11__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x1eU) | (0x3fffc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 2U))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0xaU)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0x16U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0xaU))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_hdd074b11__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 2U)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x1eU) | (0x3fffc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 2U))));
    __Vtemp_hdd074b11__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 2U)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 2U)));
    bufp->fullWData(oldp+42,(__Vtemp_hdd074b11__0),175);
    bufp->fullBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  >> 0x10U))));
    bufp->fullIData(oldp+49,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                               << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x10U))),32);
    bufp->fullCData(oldp+53,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU))),6);
    bufp->fullBit(oldp+54,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0xaU)))
                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0xaU)))
                             : ((0x1dU == (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0xaU)) 
                                    != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0xaU)))
                                 : ((0x1eU == (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU)))
                                     ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                     : ((0x1fU == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0xaU)))
                                         ? VL_GTES_III(32, 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         << 0x16U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           >> 0xaU)), 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0x16U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0xaU)))
                                         : ((0x20U 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0xaU)))
                                             ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                             : (IData)(
                                                       ((0x8400U 
                                                         == 
                                                         (0xfc00U 
                                                          & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                        & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x16U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xaU)) 
                                                           >= 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0x16U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0xaU))))))))))));
    bufp->fullBit(oldp+55,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 9U))));
    bufp->fullBit(oldp+56,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 8U))));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_jbr_AGEX));
    bufp->fullBit(oldp+58,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 7U))));
    bufp->fullBit(oldp+59,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 6U))));
    bufp->fullBit(oldp+60,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 5U))));
    bufp->fullCData(oldp+61,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])),5);
    bufp->fullIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_taken_AGEX));
    bufp->fullIData(oldp+69,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullBit(oldp+70,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U])));
    bufp->fullIData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U]),32);
    bufp->fullCData(oldp+75,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+76,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+77,((0x7fU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U])),7);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+81,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U))))
                                       : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 7U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U])
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x14U)))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+82,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+84,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 7U))),5);
    bufp->fullBit(oldp+85,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+86,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+87,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+88,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+91,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+92,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+96,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0xfU)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x14U)))))));
    bufp->fullIData(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
    bufp->fullIData(oldp+101,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    __Vtemp_h8f16b6dc__0[0U] = (((2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT
                                  [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT
                                  [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                            >> 0x15U))]]) 
                                 & ((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                             >> 0x3aU)) 
                                    & ((0x3ffffffU 
                                        & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                   >> 0x20U))) 
                                       == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 6U))))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal)
                                 : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch));
    __Vtemp_h8f16b6dc__0[1U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vtemp_h8f16b6dc__0[2U] = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
    __Vtemp_h8f16b6dc__0[3U] = (IData)((((QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                         [
                                                         (0x3fffU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                             >> 2U))])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))));
    __Vtemp_h8f16b6dc__0[4U] = (IData)(((((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                          [
                                                          (0x3fffU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                              >> 2U))])) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                        >> 0x20U));
    __Vtemp_h8f16b6dc__0[5U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__valid_FE;
    bufp->fullWData(oldp+102,(__Vtemp_h8f16b6dc__0),161);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),4);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[0]),4);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[1]),4);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[2]),4);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[3]),4);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[4]),4);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[5]),4);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[6]),4);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[7]),4);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[8]),4);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[9]),4);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[10]),4);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[11]),4);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[12]),4);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[13]),4);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[14]),4);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[15]),4);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[0]),2);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[1]),2);
    bufp->fullCData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[2]),2);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[3]),2);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[4]),2);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[5]),2);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[6]),2);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[7]),2);
    bufp->fullCData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[8]),2);
    bufp->fullCData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[9]),2);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[10]),2);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[11]),2);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[12]),2);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[13]),2);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[14]),2);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[15]),2);
    bufp->fullCData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[0]),2);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[1]),2);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[2]),2);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[3]),2);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[4]),2);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[5]),2);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[6]),2);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[7]),2);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[8]),2);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[9]),2);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[10]),2);
    bufp->fullCData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[11]),2);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[12]),2);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[13]),2);
    bufp->fullCData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[14]),2);
    bufp->fullCData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[15]),2);
    bufp->fullCData(oldp+157,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 0x15U) ^ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR)))),4);
    bufp->fullCData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHTagexAddr),4);
    bufp->fullCData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                              [(0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 0x15U) 
                                        ^ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR)))]),2);
    bufp->fullCData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHTagexVal),2);
    bufp->fullCData(oldp+161,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 2U))),4);
    bufp->fullQData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal),59);
    bufp->fullIData(oldp+164,((0x3ffffffU & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                     >> 0x20U)))),26);
    bufp->fullQData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0]),59);
    bufp->fullQData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1]),59);
    bufp->fullQData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2]),59);
    bufp->fullQData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3]),59);
    bufp->fullQData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4]),59);
    bufp->fullQData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5]),59);
    bufp->fullQData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6]),59);
    bufp->fullQData(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7]),59);
    bufp->fullQData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8]),59);
    bufp->fullQData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9]),59);
    bufp->fullQData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[10]),59);
    bufp->fullQData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[11]),59);
    bufp->fullQData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[12]),59);
    bufp->fullQData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[13]),59);
    bufp->fullQData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[14]),59);
    bufp->fullQData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[15]),59);
    bufp->fullIData(oldp+197,((((2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT
                                 [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           >> 0x15U))]]) 
                                & ((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                            >> 0x3aU)) 
                                   & ((0x3ffffffU & (IData)(
                                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                             >> 0x20U))) 
                                      == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 6U))))
                                ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal)
                                : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__total_branch_predictions),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__correct_branch_predictions),32);
    bufp->fullQData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0x12U))]),59);
    bufp->fullCData(oldp+202,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       >> 0x12U))),4);
    bufp->fullIData(oldp+203,((0x3ffffffU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              << 0xaU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 0x16U)))),26);
    bufp->fullCData(oldp+204,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                       >> 0x15U))),4);
    bufp->fullBit(oldp+205,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   >> 0xeU))));
    __Vtemp_he00a7bb9__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
    __Vtemp_he00a7bb9__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_he00a7bb9__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_he00a7bb9__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_he00a7bb9__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 2U))));
    __Vtemp_he00a7bb9__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                            >> 2U)));
    bufp->fullWData(oldp+206,(__Vtemp_he00a7bb9__0),173);
    bufp->fullCData(oldp+212,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+213,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+214,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+215,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+216,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+217,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+218,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+219,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+220,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+222,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+223,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+224,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+226,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+227,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+228,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+229,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+231,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+232,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_h7f7f4bee__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 7U))))
                                         : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U])
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0x14U)))))
                                                  : 0U))))));
    __Vtemp_hd252f34c__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x27U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 7U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))));
    __Vtemp_hd252f34c__0[1U] = ((__Vtemp_h7f7f4bee__0[0U] 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((0x1cU 
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((0x1dU 
                                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((0x1eU 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0x1fU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(
                                                                          ((0x19U 
                                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((0x1aU 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0x17U 
                                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))) 
                                                     >> 0x20U)));
    __Vtemp_h011e76eb__0[0U] = __Vtemp_hd252f34c__0[0U];
    __Vtemp_h011e76eb__0[1U] = __Vtemp_hd252f34c__0[1U];
    __Vtemp_h011e76eb__0[2U] = ((__Vtemp_h7f7f4bee__0[0U] 
                                 >> 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                              [(0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x14U))] 
                                              << 0xaU));
    __Vtemp_h011e76eb__0[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x14U))] 
                                 >> 0x16U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0xfU))])))) 
                                              << 0xaU));
    __Vtemp_h011e76eb__0[4U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0xfU))])))) 
                                 >> 0x16U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 0xfU))]))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h011e76eb__0[5U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0x10U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                               << 0xaU) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0xfU))]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)));
    __Vtemp_h011e76eb__0[6U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 >> 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0x10U));
    __Vtemp_h011e76eb__0[7U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x10U));
    __Vtemp_h011e76eb__0[8U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 0x10U) | (0x10000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 0x10U)));
    bufp->fullWData(oldp+233,(__Vtemp_h011e76eb__0),273);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+277,(vlSelf->clk));
    bufp->fullBit(oldp+278,(vlSelf->reset));
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+319,(0U));
    bufp->fullBit(oldp+320,(0U));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__temp));
    bufp->fullBit(oldp+322,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__valid_FE));
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    bufp->fullBit(oldp+324,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_wrong_now_AGEX));
}
