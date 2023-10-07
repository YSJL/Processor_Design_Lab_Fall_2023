// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___act_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___act_sequent__TOP__pipeline__0\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr = 
        (0xffU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x12U)) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
}

VL_INLINE_OPT void Vpipeline_pipeline___act_comb__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___act_comb__TOP__pipeline__0\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr];
    if (vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) {
        if (((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX) 
             & (3U > (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            vlSelf->__PVT__my_FE_stage__DOT__PHT[vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                = (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__PHT
                         [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr]));
        } else if (((~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX)) 
                    & (0U < (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            vlSelf->__PVT__my_FE_stage__DOT__PHT[vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                = (3U & (vlSelf->__PVT__my_FE_stage__DOT__PHT
                         [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___act_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___act_sequent__TOP__pipeline__1\n"); );
    // Body
    if (vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) {
        vlSelf->__PVT__my_FE_stage__DOT__BHR = ((0xfeU 
                                                 & ((IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX));
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___act_comb__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___act_comb__TOP__pipeline__1\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__PHTfeVal = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [(0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    >> 2U) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)))];
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_comb__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_comb__TOP__pipeline__0\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr = 
        (0xffU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x12U)) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
    if (vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) {
        vlSelf->__PVT__my_FE_stage__DOT__BHR = ((0xfeU 
                                                 & ((IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX));
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_comb__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_comb__TOP__pipeline__1\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr];
    if (vlSelf->__PVT__my_FE_stage__DOT__is_jbr_AGEX) {
        if (((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX) 
             & (3U > (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            vlSelf->__PVT__my_FE_stage__DOT__PHT[vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                = (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__PHT
                         [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr]));
        } else if (((~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_taken_AGEX)) 
                    & (0U < (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHTagexVal)))) {
            vlSelf->__PVT__my_FE_stage__DOT__PHT[vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                = (3U & (vlSelf->__PVT__my_FE_stage__DOT__PHT
                         [vlSelf->__PVT__my_FE_stage__DOT__PHTagexAddr] 
                         - (IData)(1U)));
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__PHTfeVal = vlSelf->__PVT__my_FE_stage__DOT__PHT
        [(0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    >> 2U) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)))];
}
