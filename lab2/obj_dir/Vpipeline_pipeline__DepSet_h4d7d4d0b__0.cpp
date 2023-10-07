// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB__v0 = 0;
    QData/*58:0*/ __Vdlyvval__my_FE_stage__DOT__BTB__v0;
    __Vdlyvval__my_FE_stage__DOT__BTB__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__PHT__v0;
    __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v0;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__PHT__v1;
    __Vdlyvdim0__my_FE_stage__DOT__PHT__v1 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__PHT__v1;
    __Vdlyvval__my_FE_stage__DOT__PHT__v1 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v1;
    __Vdlyvset__my_FE_stage__DOT__PHT__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v0;
    __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__YPTPT__v0;
    __Vdlyvval__my_FE_stage__DOT__YPTPT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__YPTPT__v0;
    __Vdlyvset__my_FE_stage__DOT__YPTPT__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v1;
    __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v1 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__YPTPT__v1;
    __Vdlyvval__my_FE_stage__DOT__YPTPT__v1 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__YPTPT__v1;
    __Vdlyvset__my_FE_stage__DOT__YPTPT__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__YPT__v0;
    __Vdlyvdim0__my_FE_stage__DOT__YPT__v0 = 0;
    CData/*3:0*/ __Vdlyvval__my_FE_stage__DOT__YPT__v0;
    __Vdlyvval__my_FE_stage__DOT__YPT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__YPT__v0;
    __Vdlyvset__my_FE_stage__DOT__YPT__v0 = 0;
    // Body
    VL_WRITEF("FE - Total: %x, Correct: %x\n",32,vlSelf->__PVT__my_FE_stage__DOT__total_branch_predictions,
              32,vlSelf->__PVT__my_FE_stage__DOT__correct_branch_predictions);
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__PHT__v1 = 0U;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
    __Vdlyvset__my_FE_stage__DOT__YPT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__YPTPT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__YPTPT__v1 = 0U;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB__v0 = 0U;
    if (vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) {
        vlSelf->__PVT__my_FE_stage__DOT__total_branch_predictions 
            = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__total_branch_predictions);
        if ((1U & (~ (IData)(vlSelf->__PVT__from_AGEX_to_DE)))) {
            vlSelf->__PVT__my_FE_stage__DOT__correct_branch_predictions 
                = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__correct_branch_predictions);
        }
        vlSelf->__PVT__my_FE_stage__DOT__BHR = ((0xeU 
                                                 & ((IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX));
        if (((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX) 
             & (3U > (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 
                (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__PHT
                       [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr]));
            __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 
                = vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr;
        } else if (((~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX)) 
                    & (0U < (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            __Vdlyvval__my_FE_stage__DOT__PHT__v1 = 
                (3U & (vlSelf->__PVT__my_FE_stage__DOT__PHT
                       [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                       - (IData)(1U)));
            __Vdlyvset__my_FE_stage__DOT__PHT__v1 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__PHT__v1 
                = vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr;
        }
        if (((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX) 
             & (3U > vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                [vlSelf->__PVT__my_FE_stage__DOT__YPT
                [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                          >> 0x15U))]]))) {
            __Vdlyvval__my_FE_stage__DOT__YPTPT__v0 
                = (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                         [vlSelf->__PVT__my_FE_stage__DOT__YPT
                         [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                   >> 0x15U))]]));
            __Vdlyvset__my_FE_stage__DOT__YPTPT__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v0 
                = vlSelf->__PVT__my_FE_stage__DOT__YPT
                [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                          >> 0x15U))];
        } else if (((~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX)) 
                    & (0U < vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                       [vlSelf->__PVT__my_FE_stage__DOT__YPT
                       [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                 >> 0x15U))]]))) {
            __Vdlyvval__my_FE_stage__DOT__YPTPT__v1 
                = (3U & (vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                         [vlSelf->__PVT__my_FE_stage__DOT__YPT
                         [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                   >> 0x15U))]] - (IData)(1U)));
            __Vdlyvset__my_FE_stage__DOT__YPTPT__v1 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__YPTPT__v1 
                = vlSelf->__PVT__my_FE_stage__DOT__YPT
                [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                          >> 0x15U))];
        }
        __Vdlyvval__my_FE_stage__DOT__YPT__v0 = ((0xeU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__YPT
                                                     [
                                                     (0xfU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                                         >> 0x15U))] 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX));
        __Vdlyvset__my_FE_stage__DOT__YPT__v0 = 1U;
        __Vdlyvdim0__my_FE_stage__DOT__YPT__v0 = (0xfU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                                     >> 0x15U));
        __Vdlyvval__my_FE_stage__DOT__BTB__v0 = (0x400000000000000ULL 
                                                 | (((QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                            >> 0x16U))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX))));
        __Vdlyvset__my_FE_stage__DOT__BTB__v0 = 1U;
        __Vdlyvdim0__my_FE_stage__DOT__BTB__v0 = (0xfU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     >> 0x12U));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if (vlSelf->__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        } else if (vlSelf->__PVT__from_DE_to_FE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
        } else {
            if ((((2U <= vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                   [vlSelf->__PVT__my_FE_stage__DOT__YPT
                   [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                             >> 0x15U))]]) & (IData)(
                                                     (vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal 
                                                      >> 0x3aU))) 
                 & ((0x3ffffffU & (IData)((vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal 
                                           >> 0x20U))) 
                    == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                        >> 6U)))) {
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = (IData)(vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal);
            } else {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE;
            }
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (((2U <= vlSelf->__PVT__my_FE_stage__DOT__YPTPT
                     [vlSelf->__PVT__my_FE_stage__DOT__YPT
                     [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                               >> 0x15U))]]) & ((IData)(
                                                        (vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal 
                                                         >> 0x3aU)) 
                                                & ((0x3ffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal 
                                                               >> 0x20U))) 
                                                   == 
                                                   (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                    >> 6U))))
                    ? (IData)(vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal)
                    : ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                            [(0x3fffU 
                                              & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))])) 
                            << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                             [(0x3fffU 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))])) 
                             << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                           >> 0x20U));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                = vlSelf->__PVT__my_FE_stage__DOT__valid_FE;
        }
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 7U)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelf->__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if ((0x40U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                          >> 0xaU));
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__PHT__v0] 
            = __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v1) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__PHT__v1] 
            = __Vdlyvval__my_FE_stage__DOT__PHT__v1;
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    if (__Vdlyvset__my_FE_stage__DOT__YPT__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__YPT[__Vdlyvdim0__my_FE_stage__DOT__YPT__v0] 
            = __Vdlyvval__my_FE_stage__DOT__YPT__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__YPTPT__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__YPTPT[__Vdlyvdim0__my_FE_stage__DOT__YPTPT__v0] 
            = __Vdlyvval__my_FE_stage__DOT__YPTPT__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__YPTPT__v1) {
        vlSelf->__PVT__my_FE_stage__DOT__YPTPT[__Vdlyvdim0__my_FE_stage__DOT__YPTPT__v1] 
            = __Vdlyvval__my_FE_stage__DOT__YPTPT__v1;
    }
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    if (__Vdlyvset__my_FE_stage__DOT__BTB__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB[__Vdlyvdim0__my_FE_stage__DOT__BTB__v0] 
            = __Vdlyvval__my_FE_stage__DOT__BTB__v0;
    }
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__BTBfeVal = vlSelf->__PVT__my_FE_stage__DOT__BTB
        [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                  >> 2U))];
}

extern const VlWide<9>/*287:0*/ Vpipeline__ConstPool__CONST_h35b61735_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9a816032_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h085e32d7_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h97fd8629__0;
    my_DE_stage__DOT____VdfgTmp_h97fd8629__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h442ce981__0;
    my_DE_stage__DOT____VdfgTmp_h442ce981__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hab6e2e3a__0;
    my_DE_stage__DOT____VdfgTmp_hab6e2e3a__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h105b3e40__0;
    my_DE_stage__DOT____VdfgTmp_h105b3e40__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0;
    my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0;
    my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hc9514b8b__0;
    VlWide<6>/*191:0*/ __Vtemp_h24d7cf99__0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
    }
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    __Vtemp_hc9514b8b__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 7U))))
                                         : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))))
                                             : ((3U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]) 
                                                     | ((0x800U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0x14U)))))
                                                  : 0U))))));
    __Vtemp_h24d7cf99__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x27U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 7U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))));
    __Vtemp_h24d7cf99__0[1U] = ((__Vtemp_hc9514b8b__0[0U] 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((0x1cU 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((0x1dU 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((0x1eU 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(
                                                                          ((0x19U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((0x1aU 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0x17U 
                                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))) 
                                                     >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_h35b61735_0[8U];
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 2U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                         >> 2U)) | (0x1fc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                               >> 2U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 8U) | (0xffU & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 8U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                               >> 0xaU)))) 
                << 8U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                   >> 0x20U)) >> 0x18U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                 << 0x1eU) | (0x3fffc000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U))) 
               | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                  >> 0xaU)))) 
                   >> 0x18U) | ((IData)(((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0xaU))) 
                                         >> 0x20U)) 
                                << 8U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                           >> 2U)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                       << 0x1eU) | 
                                      (0x3fffc000U 
                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 2U))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                           >> 2U)) | (0x4000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 >> 2U)));
        if (vlSelf->__PVT__from_DE_to_FE) {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[2U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[3U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[4U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[5U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[6U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[7U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = Vpipeline__ConstPool__CONST_h35b61735_0[8U];
        } else {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_h24d7cf99__0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = __Vtemp_h24d7cf99__0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((__Vtemp_hc9514b8b__0[0U] >> 0x16U) 
                   | (vlSelf->__PVT__my_DE_stage__DOT__regs
                      [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 0x14U))] << 0xaU));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                    [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               >> 0x14U))] >> 0x16U) 
                   | ((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0xfU))])))) 
                      << 0xaU));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__my_DE_stage__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0xfU))])))) 
                    >> 0x16U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__regs
                                                             [
                                                             (0x1fU 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 0xfU))]))) 
                                          >> 0x20U)) 
                                 << 0xaU));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                    << 0x10U) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                  << 0xaU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 0xfU))]))) 
                                                       >> 0x20U)) 
                                              >> 0x16U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                    >> 0x10U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x10U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                    >> 0x10U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x10U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                    >> 0x10U) | (0x10000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 0x10U)));
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr = 
        (0xfU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                   << 0x1bU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                >> 5U)) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
    vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX = (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0 
        = VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0xaU)), 
                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    >> 0xaU)));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          >> 0xaU)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0xaU)));
    my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
             << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                          >> 0x10U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x16U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xaU)));
    my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          >> 0xaU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0xaU)));
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 
        = (((- (IData)((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x14U)));
    my_DE_stage__DOT____VdfgTmp_h97fd8629__0 = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h442ce981__0 = (IData)(
                                                       (0x5033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_hab6e2e3a__0 = (IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0xfe007000U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h105b3e40__0 = (IData)(
                                                       (0x5013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr];
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU))) 
                        | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU)))) 
                       | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU)))) 
                      | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))) 
                     | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU)))) 
                    | (6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) 
                   | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0xaU)))) | 
                  (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0xaU))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0xaU))) 
                            | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0xaU)))) 
                           | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0xaU)))) 
                          | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0xaU)))) 
                         | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0xaU)))) 
                        | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0xaU)))) 
                       | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))) 
                      | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU))) 
                       | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0xaU)))) 
                      | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))) 
                     | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU)))) 
                    | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU)))) 
                   | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))) 
                  | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU))) 
                     | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU))))) 
                 | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU))))) {
                if ((0x11U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU)))) {
                    if ((0x12U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))) {
                        if ((0x13U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0xaU)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0xaU)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0xaU))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0xaU))))))) {
                                            vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0xaU))) | (2U == 
                                              (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU)))) 
              | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0xaU)))) | (4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0xaU)))) 
            | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0xaU)))) | (6U == 
                                              (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU)))) 
          | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             >> 0xaU)))) | (8U == (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0xaU))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0xaU))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0x16U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0xaU)) 
                                              + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x16U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0xaU)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0xaU))) ? ((
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 0x16U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0xaU)) 
                                                  - 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x16U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0xaU)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU))) ? 
                       (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                          << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0xaU)) & 
                        ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0xaU))) : 
                       ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))
                         ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0xaU)) 
                            | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0xaU)))
                         : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0xaU)))
                             ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0xaU)))
                             : ((6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0xaU)))
                                 ? ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    << 0x16U) 
                                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      >> 0xaU)), 
                                                                  (0x1fU 
                                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0xaU))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU))) | 
                      (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU)))) 
                  | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) 
                 | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0xaU)))) | 
                (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0xaU))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0xaU))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0x16U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0xaU)) 
                                              >> (0x1fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0xaU)))
                : ((0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0xaU))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0xaU)) << (0x1fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0xaU)))
                    : ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU)))
                        ? VL_MULS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0x16U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xaU)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0xaU))) : 
                       ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU)))
                         ? my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0
                         : ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0xaU)))
                             ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0xaU)))
                             : ((0xeU == (0x3fU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0xaU)))
                                 ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      << 0x16U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0xaU)) 
                                    | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x16U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0xaU))) : 
                                ((0xfU == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))
                                  ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       << 0x16U) | 
                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0xaU)) ^ 
                                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x16U) | 
                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0xaU))) : 
                                 (VL_LTS_III(32, ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0xaU)), 
                                             ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x16U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0xaU)))
                                   ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU)))) 
                     | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU)))) 
                    | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU)))) 
                   | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0xaU)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU)))) 
                 | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU))))) 
                | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0xaU))))) {
        if ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0xaU)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x16U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xaU)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0x16U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xaU)), 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xaU)));
        } else if ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0xaU)) >> (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xaU)));
        } else if ((0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0xaU)) << (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xaU)));
        } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0x16U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 0xaU));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0;
        } else if (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xaU))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0xaU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                    << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x10U));
        }
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0xaU))) ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x16U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0xaU))
                : 0U);
    }
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0xaU))) ? my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0xaU))) ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 0x16U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0xaU))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0xaU))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0)
                    : (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                         >> 9U) & ((0x1cU == (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0xaU)))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0x16U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0xaU)) 
                                       == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x16U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xaU)))
                                    : ((0x1dU == (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0xaU)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 0x16U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                           != ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x16U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0xaU)))
                                        : ((0x1eU == 
                                            (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0xaU)))
                                            ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                            : ((0x1fU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0xaU)))
                                                ? VL_GTES_III(32, 
                                                              ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  >> 0xaU)), 
                                                              ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                << 0x16U) 
                                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  >> 0xaU)))
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0xaU)))
                                                    ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                                    : (IData)(
                                                              ((0x8400U 
                                                                == 
                                                                (0xfc00U 
                                                                 & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    << 0x16U) 
                                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      >> 0xaU)) 
                                                                  >= 
                                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x16U) 
                                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0xaU)))))))))))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x10U))))));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h97fd8629__0) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x19U)))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h97fd8629__0) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x19U)))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            (0x4033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              (0x3033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h442ce981__0) 
                                                        & (0x20U 
                                                           == 
                                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x19U)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h442ce981__0) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x19U)))
                                                         ? 9U
                                                         : 
                                                        (((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                          & (IData)(my_DE_stage__DOT____VdfgTmp_hab6e2e3a__0))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h97fd8629__0) 
                                                           & (1U 
                                                              == 
                                                              (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x19U)))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x13U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x6013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x2013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x3013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h105b3e40__0) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x19U)))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h105b3e40__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x19U)))
                                                                   ? 0x13U
                                                                   : 
                                                                  (((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgTmp_hab6e2e3a__0))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x2003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX 
        = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) 
           & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
              != ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                   << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x10U))));
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) 
                                      & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                         != vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]));
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelf->my_DE_stage__DOT____Vxrand_h9c26cae2__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (0x22U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((4U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((5U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | ((7U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((8U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((9U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x16U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 7U))));
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = vlSelf->my_DE_stage__DOT____Vxrand_h9c270190__0;
    if ((((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_h9a816032_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h085e32d7_0
        [__Vtableidx1];
    vlSelf->__PVT__from_DE_to_FE = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                      & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                         >> (0x1fU 
                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0xfU)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x14U))))) 
                                    | (IData)(vlSelf->__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 
            (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
