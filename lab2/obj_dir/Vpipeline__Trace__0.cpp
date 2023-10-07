// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_hbf07be84__0;
    VlWide<6>/*191:0*/ __Vtemp_hdd074b11__0;
    VlWide<6>/*191:0*/ __Vtemp_h8f16b6dc__0;
    VlWide<6>/*191:0*/ __Vtemp_he00a7bb9__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f7f4bee__0;
    VlWide<6>/*191:0*/ __Vtemp_hd252f34c__0;
    VlWide<9>/*287:0*/ __Vtemp_h011e76eb__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_count),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__j_count),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__jbr_count),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_jbr_count),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),161);
        bufp->chgWData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),273);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
        bufp->chgWData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
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
        bufp->chgWData(oldp+34,(__Vtemp_hbf07be84__0),99);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+39,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_hdd074b11__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]));
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x1eU) | 
                                       (0x3fffc000U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 2U))));
        __Vtemp_hdd074b11__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 2U)) 
                                    | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+41,(__Vtemp_hdd074b11__0),175);
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x10U))));
        bufp->chgIData(oldp+48,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+49,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x10U))),32);
        bufp->chgCData(oldp+52,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU))),6);
        bufp->chgBit(oldp+53,(((0x1cU == (0x3fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0xaU)))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0xaU)) 
                                   == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0xaU))) : 
                               ((0x1dU == (0x3fU & 
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
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+55,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_jbr_AGEX));
        bufp->chgBit(oldp+57,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 7U))));
        bufp->chgBit(oldp+58,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 6U))));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 5U))));
        bufp->chgCData(oldp+60,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])),5);
        bufp->chgIData(oldp+61,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_taken_AGEX));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+69,((1U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U])));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U]),32);
        bufp->chgCData(oldp+74,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+75,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+76,((0x7fU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U])),7);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+80,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+81,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+83,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 7U))),5);
        bufp->chgBit(oldp+84,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+85,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+86,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+87,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+90,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+91,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+95,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0xfU)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x14U)))))));
        bufp->chgIData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+100,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_h8f16b6dc__0[0U] = (((2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT
                                      [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT
                                      [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                                >> 0x15U))]]) 
                                     & ((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                 >> 0x3aU)) 
                                        & ((0x3ffffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                       >> 0x20U))) 
                                           == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                               >> 6U))))
                                     ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal)
                                     : ((IData)(4U) 
                                        + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch));
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
        bufp->chgWData(oldp+101,(__Vtemp_h8f16b6dc__0),161);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),4);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[0]),4);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[1]),4);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[2]),4);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[3]),4);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[4]),4);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[5]),4);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[6]),4);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[7]),4);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[8]),4);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[9]),4);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[10]),4);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[11]),4);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[12]),4);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[13]),4);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[14]),4);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT[15]),4);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[0]),2);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[1]),2);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[2]),2);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[3]),2);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[4]),2);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[5]),2);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[6]),2);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[7]),2);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[8]),2);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[9]),2);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[10]),2);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[11]),2);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[12]),2);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[13]),2);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[14]),2);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT[15]),2);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[0]),2);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[1]),2);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[2]),2);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[3]),2);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[4]),2);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[5]),2);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[6]),2);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[7]),2);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[8]),2);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[9]),2);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[10]),2);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[11]),2);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[12]),2);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[13]),2);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[14]),2);
        bufp->chgCData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT[15]),2);
        bufp->chgCData(oldp+156,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 0x15U) 
                                          ^ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR)))),4);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHTagexAddr),4);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                 [(0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 0x15U) 
                                           ^ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR)))]),2);
        bufp->chgCData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHTagexVal),2);
        bufp->chgCData(oldp+160,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))),4);
        bufp->chgQData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal),59);
        bufp->chgIData(oldp+163,((0x3ffffffU & (IData)(
                                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                        >> 0x20U)))),26);
        bufp->chgQData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[0]),59);
        bufp->chgQData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[1]),59);
        bufp->chgQData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[2]),59);
        bufp->chgQData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[3]),59);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[4]),59);
        bufp->chgQData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[5]),59);
        bufp->chgQData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[6]),59);
        bufp->chgQData(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[7]),59);
        bufp->chgQData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[8]),59);
        bufp->chgQData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[9]),59);
        bufp->chgQData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[10]),59);
        bufp->chgQData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[11]),59);
        bufp->chgQData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[12]),59);
        bufp->chgQData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[13]),59);
        bufp->chgQData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[14]),59);
        bufp->chgQData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB[15]),59);
        bufp->chgIData(oldp+196,((((2U <= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPTPT
                                    [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__YPT
                                    [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                              >> 0x15U))]]) 
                                   & ((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                               >> 0x3aU)) 
                                      & ((0x3ffffffU 
                                          & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal 
                                                     >> 0x20U))) 
                                         == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 6U))))
                                   ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTBfeVal)
                                   : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__total_branch_predictions),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__correct_branch_predictions),32);
        bufp->chgQData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x12U))]),59);
        bufp->chgCData(oldp+201,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          >> 0x12U))),4);
        bufp->chgIData(oldp+202,((0x3ffffffU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 << 0xaU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   >> 0x16U)))),26);
        bufp->chgCData(oldp+203,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                          >> 0x15U))),4);
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_he00a7bb9__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           >> 2U))));
        __Vtemp_he00a7bb9__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+205,(__Vtemp_he00a7bb9__0),173);
        bufp->chgCData(oldp+211,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+212,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+213,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+214,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+215,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+216,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+217,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+219,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+223,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+224,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+226,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+228,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+230,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+231,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
                                                  [
                                                  (0x1fU 
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
        bufp->chgWData(oldp+232,(__Vtemp_h011e76eb__0),273);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x14U))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+276,(vlSelf->clk));
    bufp->chgBit(oldp+277,(vlSelf->reset));
    bufp->chgIData(oldp+278,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+279,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+280,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+281,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+282,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+283,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+284,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+285,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+286,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+287,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+288,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+289,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+290,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+291,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+292,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+293,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+294,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+295,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+296,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+297,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
