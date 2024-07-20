#define DEBUG_SYNCHRONOUS
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

// Default Animations
#define ADJUST_ERECT_WALK_RAISED_RIFLE_ANIMATIONS ["AadjPercMwlkSrasWrflDb_down","AadjPercMwlkSrasWrflDb_left","AadjPercMwlkSrasWrflDb_right","AadjPercMwlkSrasWrflDb_up","AadjPercMwlkSrasWrflDbl_down","AadjPercMwlkSrasWrflDbl_left","AadjPercMwlkSrasWrflDbl_right","AadjPercMwlkSrasWrflDbl_up","AadjPercMwlkSrasWrflDbr_down","AadjPercMwlkSrasWrflDbr_left","AadjPercMwlkSrasWrflDbr_right","AadjPercMwlkSrasWrflDbr_up","AadjPercMwlkSrasWrflDf_down","AadjPercMwlkSrasWrflDf_left","AadjPercMwlkSrasWrflDf_right","AadjPercMwlkSrasWrflDf_up","AadjPercMwlkSrasWrflDfl_down","AadjPercMwlkSrasWrflDfl_left","AadjPercMwlkSrasWrflDfl_right","AadjPercMwlkSrasWrflDfl_up","AadjPercMwlkSrasWrflDfr_down","AadjPercMwlkSrasWrflDfr_left","AadjPercMwlkSrasWrflDfr_right","AadjPercMwlkSrasWrflDfr_up","AadjPercMwlkSrasWrflDl_down","AadjPercMwlkSrasWrflDl_left","AadjPercMwlkSrasWrflDl_right","AadjPercMwlkSrasWrflDl_up","AadjPercMwlkSrasWrflDr_down","AadjPercMwlkSrasWrflDr_left","AadjPercMwlkSrasWrflDr_right","AadjPercMwlkSrasWrflDr_up"]
#define ADJUST_KNEEL_WALK_RAISED_RIFLE_ANIMATIONS ["AadjPknlMwlkSrasWrflDb_down","AadjPknlMwlkSrasWrflDb_left","AadjPknlMwlkSrasWrflDb_right","AadjPknlMwlkSrasWrflDb_up","AadjPknlMwlkSrasWrflDbl_down","AadjPknlMwlkSrasWrflDbl_left","AadjPknlMwlkSrasWrflDbl_right","AadjPknlMwlkSrasWrflDbl_up","AadjPknlMwlkSrasWrflDbr_down","AadjPknlMwlkSrasWrflDbr_left","AadjPknlMwlkSrasWrflDbr_right","AadjPknlMwlkSrasWrflDbr_up","AadjPknlMwlkSrasWrflDf_down","AadjPknlMwlkSrasWrflDf_left","AadjPknlMwlkSrasWrflDf_right","AadjPknlMwlkSrasWrflDf_up","AadjPknlMwlkSrasWrflDfl_down","AadjPknlMwlkSrasWrflDfl_left","AadjPknlMwlkSrasWrflDfl_right","AadjPknlMwlkSrasWrflDfl_up","AadjPknlMwlkSrasWrflDfr_down","AadjPknlMwlkSrasWrflDfr_left","AadjPknlMwlkSrasWrflDfr_right","AadjPknlMwlkSrasWrflDfr_up","AadjPknlMwlkSrasWrflDl_down","AadjPknlMwlkSrasWrflDl_left","AadjPknlMwlkSrasWrflDl_right","AadjPknlMwlkSrasWrflDl_up","AadjPknlMwlkSrasWrflDr_down","AadjPknlMwlkSrasWrflDr_left","AadjPknlMwlkSrasWrflDr_right","AadjPknlMwlkSrasWrflDr_up"]
#define ADJUST_ERECT_WALK_RAISED_PISTOLE_ANIMATIONS ["AadjPercMwlkSrasWpstDb_down","AadjPercMwlkSrasWpstDb_left","AadjPercMwlkSrasWpstDb_right","AadjPercMwlkSrasWpstDb_up","AadjPercMwlkSrasWpstDbl_down","AadjPercMwlkSrasWpstDbl_left","AadjPercMwlkSrasWpstDbl_right","AadjPercMwlkSrasWpstDbl_up","AadjPercMwlkSrasWpstDbr_down","AadjPercMwlkSrasWpstDbr_left","AadjPercMwlkSrasWpstDbr_right","AadjPercMwlkSrasWpstDbr_up","AadjPercMwlkSrasWpstDf_down","AadjPercMwlkSrasWpstDf_left","AadjPercMwlkSrasWpstDf_right","AadjPercMwlkSrasWpstDf_up","AadjPercMwlkSrasWpstDfl_down","AadjPercMwlkSrasWpstDfl_left","AadjPercMwlkSrasWpstDfl_right","AadjPercMwlkSrasWpstDfl_up","AadjPercMwlkSrasWpstDfr_down","AadjPercMwlkSrasWpstDfr_left","AadjPercMwlkSrasWpstDfr_right","AadjPercMwlkSrasWpstDfr_up","AadjPercMwlkSrasWpstDl_down","AadjPercMwlkSrasWpstDl_left","AadjPercMwlkSrasWpstDl_right","AadjPercMwlkSrasWpstDl_up","AadjPercMwlkSrasWpstDr_down","AadjPercMwlkSrasWpstDr_left","AadjPercMwlkSrasWpstDr_right","AadjPercMwlkSrasWpstDr_up"]
#define ADJUST_KNEEL_WALK_RAISED_PISTOLE_ANIMATIONS ["AadjPknlMwlkSrasWpstDb_down","AadjPknlMwlkSrasWpstDb_left","AadjPknlMwlkSrasWpstDb_right","AadjPknlMwlkSrasWpstDb_up","AadjPknlMwlkSrasWpstDbl_down","AadjPknlMwlkSrasWpstDbl_left","AadjPknlMwlkSrasWpstDbl_right","AadjPknlMwlkSrasWpstDbl_up","AadjPknlMwlkSrasWpstDbr_down","AadjPknlMwlkSrasWpstDbr_left","AadjPknlMwlkSrasWpstDbr_right","AadjPknlMwlkSrasWpstDbr_up","AadjPknlMwlkSrasWpstDf_down","AadjPknlMwlkSrasWpstDf_left","AadjPknlMwlkSrasWpstDf_right","AadjPknlMwlkSrasWpstDf_up","AadjPknlMwlkSrasWpstDfl_down","AadjPknlMwlkSrasWpstDfl_left","AadjPknlMwlkSrasWpstDfl_right","AadjPknlMwlkSrasWpstDfl_up","AadjPknlMwlkSrasWpstDfr_down","AadjPknlMwlkSrasWpstDfr_left","AadjPknlMwlkSrasWpstDfr_right","AadjPknlMwlkSrasWpstDfr_up","AadjPknlMwlkSrasWpstDl_down","AadjPknlMwlkSrasWpstDl_left","AadjPknlMwlkSrasWpstDl_right","AadjPknlMwlkSrasWpstDl_up","AadjPknlMwlkSrasWpstDr_down","AadjPknlMwlkSrasWpstDr_left","AadjPknlMwlkSrasWpstDr_right","AadjPknlMwlkSrasWpstDr_up"]
#define ALL_ADJUST_WALK_ANIMATIONS ADJUST_ERECT_WALK_RAISED_RIFLE_ANIMATIONS + ADJUST_KNEEL_WALK_RAISED_RIFLE_ANIMATIONS + ADJUST_ERECT_WALK_RAISED_PISTOLE_ANIMATIONS + ADJUST_KNEEL_WALK_RAISED_PISTOLE_ANIMATIONS

#define MOVE_ERECT_WALK_RAISED_RIFLE_ANIMATIONS ["AmovPercMwlkSrasWrflDb","AmovPercMwlkSrasWrflDbl","AmovPercMwlkSrasWrflDbr","AmovPercMwlkSrasWrflDf","AmovPercMwlkSrasWrflDfl","AmovPercMwlkSrasWrflDfr","AmovPercMwlkSrasWrflDl","AmovPercMwlkSrasWrflDr"]
#define MOVE_KNEEL_WALK_RAISED_RIFLE_ANIMATIONS ["AmovPknlMwlkSrasWrflDb","AmovPknlMwlkSrasWrflDbl","AmovPknlMwlkSrasWrflDbr","AmovPknlMwlkSrasWrflDf","AmovPknlMwlkSrasWrflDfl","AmovPknlMwlkSrasWrflDfr","AmovPknlMwlkSrasWrflDl","AmovPknlMwlkSrasWrflDr"]
#define MOVE_ERECT_WALK_RAISED_PISTOLE_ANIMATIONS ["AmovPercMwlkSrasWpstDb","AmovPercMwlkSrasWpstDbl","AmovPercMwlkSrasWpstDbr","AmovPercMwlkSrasWpstDf","AmovPercMwlkSrasWpstDfl","AmovPercMwlkSrasWpstDfr","AmovPercMwlkSrasWpstDl","AmovPercMwlkSrasWpstDr"]
#define MOVE_KNEEL_WALK_RAISED_PISTOLE_ANIMATIONS ["AmovPknlMwlkSrasWpstDb","AmovPknlMwlkSrasWpstDbl","AmovPknlMwlkSrasWpstDbr","AmovPknlMwlkSrasWpstDf","AmovPknlMwlkSrasWpstDfl","AmovPknlMwlkSrasWpstDfr","AmovPknlMwlkSrasWpstDl","AmovPknlMwlkSrasWpstDr"]
#define ALL_MOVE_WALK_ANIMATIONS MOVE_ERECT_WALK_RAISED_RIFLE_ANIMATIONS + MOVE_KNEEL_WALK_RAISED_RIFLE_ANIMATIONS + MOVE_ERECT_WALK_RAISED_PISTOLE_ANIMATIONS + MOVE_KNEEL_WALK_RAISED_PISTOLE_ANIMATIONS

#define ADJUST_ERECT_TACTICAL_RAISED_RIFLE_ANIMATIONS ["AadjPercMtacSrasWrflDb_down","AadjPercMtacSrasWrflDb_left","AadjPercMtacSrasWrflDb_right","AadjPercMtacSrasWrflDb_up","AadjPercMtacSrasWrflDbl_down","AadjPercMtacSrasWrflDbl_left","AadjPercMtacSrasWrflDbl_right","AadjPercMtacSrasWrflDbl_up","AadjPercMtacSrasWrflDbr_down","AadjPercMtacSrasWrflDbr_left","AadjPercMtacSrasWrflDbr_right","AadjPercMtacSrasWrflDbr_up","AadjPercMtacSrasWrflDf_down","AadjPercMtacSrasWrflDf_left","AadjPercMtacSrasWrflDf_right","AadjPercMtacSrasWrflDf_up","AadjPercMtacSrasWrflDfl_down","AadjPercMtacSrasWrflDfl_left","AadjPercMtacSrasWrflDfl_right","AadjPercMtacSrasWrflDfl_up","AadjPercMtacSrasWrflDfr_down","AadjPercMtacSrasWrflDfr_left","AadjPercMtacSrasWrflDfr_right","AadjPercMtacSrasWrflDfr_up","AadjPercMtacSrasWrflDl_down","AadjPercMtacSrasWrflDl_left","AadjPercMtacSrasWrflDl_right","AadjPercMtacSrasWrflDl_up","AadjPercMtacSrasWrflDr_down","AadjPercMtacSrasWrflDr_left","AadjPercMtacSrasWrflDr_right","AadjPercMtacSrasWrflDr_up"]
#define ADJUST_KNEEL_TACTICAL_RAISED_RIFLE_ANIMATIONS ["AadjPknlMtacSrasWrflDb_down","AadjPknlMtacSrasWrflDb_left","AadjPknlMtacSrasWrflDb_right","AadjPknlMtacSrasWrflDb_up","AadjPknlMtacSrasWrflDbl_down","AadjPknlMtacSrasWrflDbl_left","AadjPknlMtacSrasWrflDbl_right","AadjPknlMtacSrasWrflDbl_up","AadjPknlMtacSrasWrflDbr_down","AadjPknlMtacSrasWrflDbr_left","AadjPknlMtacSrasWrflDbr_right","AadjPknlMtacSrasWrflDbr_up","AadjPknlMtacSrasWrflDf_down","AadjPknlMtacSrasWrflDf_left","AadjPknlMtacSrasWrflDf_right","AadjPknlMtacSrasWrflDf_up","AadjPknlMtacSrasWrflDfl_down","AadjPknlMtacSrasWrflDfl_left","AadjPknlMtacSrasWrflDfl_right","AadjPknlMtacSrasWrflDfl_up","AadjPknlMtacSrasWrflDfr_down","AadjPknlMtacSrasWrflDfr_left","AadjPknlMtacSrasWrflDfr_right","AadjPknlMtacSrasWrflDfr_up","AadjPknlMtacSrasWrflDl_down","AadjPknlMtacSrasWrflDl_left","AadjPknlMtacSrasWrflDl_right","AadjPknlMtacSrasWrflDl_up","AadjPknlMtacSrasWrflDr_down","AadjPknlMtacSrasWrflDr_left","AadjPknlMtacSrasWrflDr_right","AadjPknlMtacSrasWrflDr_up"]
#define ADJUST_ERECT_TACTICAL_RAISED_PISTOLE_ANIMATIONS ["AadjPercMtacSrasWpstDb_down","AadjPercMtacSrasWpstDb_left","AadjPercMtacSrasWpstDb_right","AadjPercMtacSrasWpstDb_up","AadjPercMtacSrasWpstDbl_down","AadjPercMtacSrasWpstDbl_left","AadjPercMtacSrasWpstDbl_right","AadjPercMtacSrasWpstDbl_up","AadjPercMtacSrasWpstDbr_down","AadjPercMtacSrasWpstDbr_left","AadjPercMtacSrasWpstDbr_right","AadjPercMtacSrasWpstDbr_up","AadjPercMtacSrasWpstDf_down","AadjPercMtacSrasWpstDf_left","AadjPercMtacSrasWpstDf_right","AadjPercMtacSrasWpstDf_up","AadjPercMtacSrasWpstDfl_down","AadjPercMtacSrasWpstDfl_left","AadjPercMtacSrasWpstDfl_right","AadjPercMtacSrasWpstDfl_up","AadjPercMtacSrasWpstDfr_down","AadjPercMtacSrasWpstDfr_left","AadjPercMtacSrasWpstDfr_right","AadjPercMtacSrasWpstDfr_up","AadjPercMtacSrasWpstDl_down","AadjPercMtacSrasWpstDl_left","AadjPercMtacSrasWpstDl_right","AadjPercMtacSrasWpstDl_up","AadjPercMtacSrasWpstDr_down","AadjPercMtacSrasWpstDr_left","AadjPercMtacSrasWpstDr_right","AadjPercMtacSrasWpstDr_up"]
#define ADJUST_KNEEL_TACTICAL_RAISED_PISTOLE_ANIMATIONS ["AadjPknlMtacSrasWpstDb_down","AadjPknlMtacSrasWpstDb_left","AadjPknlMtacSrasWpstDb_right","AadjPknlMtacSrasWpstDb_up","AadjPknlMtacSrasWpstDbl_down","AadjPknlMtacSrasWpstDbl_left","AadjPknlMtacSrasWpstDbl_right","AadjPknlMtacSrasWpstDbl_up","AadjPknlMtacSrasWpstDbr_down","AadjPknlMtacSrasWpstDbr_left","AadjPknlMtacSrasWpstDbr_right","AadjPknlMtacSrasWpstDbr_up","AadjPknlMtacSrasWpstDf_down","AadjPknlMtacSrasWpstDf_left","AadjPknlMtacSrasWpstDf_right","AadjPknlMtacSrasWpstDf_up","AadjPknlMtacSrasWpstDfl_down","AadjPknlMtacSrasWpstDfl_left","AadjPknlMtacSrasWpstDfl_right","AadjPknlMtacSrasWpstDfl_up","AadjPknlMtacSrasWpstDfr_down","AadjPknlMtacSrasWpstDfr_left","AadjPknlMtacSrasWpstDfr_right","AadjPknlMtacSrasWpstDfr_up","AadjPknlMtacSrasWpstDl_down","AadjPknlMtacSrasWpstDl_left","AadjPknlMtacSrasWpstDl_right","AadjPknlMtacSrasWpstDl_up","AadjPknlMtacSrasWpstDr_down","AadjPknlMtacSrasWpstDr_left","AadjPknlMtacSrasWpstDr_right","AadjPknlMtacSrasWpstDr_up"]
#define ALL_ADJUST_TACTICAL_ANIMATIONS ADJUST_ERECT_TACTICAL_RAISED_RIFLE_ANIMATIONS + ADJUST_KNEEL_TACTICAL_RAISED_RIFLE_ANIMATIONS + ADJUST_ERECT_TACTICAL_RAISED_PISTOLE_ANIMATIONS + ADJUST_KNEEL_TACTICAL_RAISED_PISTOLE_ANIMATIONS

#define MOVE_ERECT_TACTICAL_RAISED_RIFLE_ANIMATIONS ["AmovPercMtacSrasWrflDb","AmovPercMtacSrasWrflDbl","AmovPercMtacSrasWrflDbr","AmovPercMtacSrasWrflDf","AmovPercMtacSrasWrflDfl","AmovPercMtacSrasWrflDfr","AmovPercMtacSrasWrflDl","AmovPercMtacSrasWrflDr"]
#define MOVE_KNEEL_TACTICAL_RAISED_RIFLE_ANIMATIONS ["AmovPknlMtacSrasWrflDb","AmovPknlMtacSrasWrflDbl","AmovPknlMtacSrasWrflDbr","AmovPknlMtacSrasWrflDf","AmovPknlMtacSrasWrflDfl","AmovPknlMtacSrasWrflDfr","AmovPknlMtacSrasWrflDl","AmovPknlMtacSrasWrflDr"]
#define MOVE_ERECT_TACTICAL_RAISED_PISTOLE_ANIMATIONS ["AmovPercMtacSrasWpstDb","AmovPercMtacSrasWpstDbl","AmovPercMtacSrasWpstDbr","AmovPercMtacSrasWpstDf","AmovPercMtacSrasWpstDfr","AmovPercMtacSrasWpstDl","AmovPercMtacSrasWpstDr"]
#define MOVE_KNEEL_TACTICAL_RAISED_PISTOLE_ANIMATIONS ["AmovPknlMtacSrasWpstDb","AmovPknlMtacSrasWpstDbl","AmovPknlMtacSrasWpstDbr","AmovPknlMtacSrasWpstDf","AmovPknlMtacSrasWpstDfr","AmovPknlMtacSrasWpstDl","AmovPknlMtacSrasWpstDr"]
#define ALL_MOVE_TACTICAL_ANIMATIONS MOVE_ERECT_TACTICAL_RAISED_RIFLE_ANIMATIONS + MOVE_KNEEL_TACTICAL_RAISED_RIFLE_ANIMATIONS + MOVE_ERECT_TACTICAL_RAISED_PISTOLE_ANIMATIONS + MOVE_KNEEL_TACTICAL_RAISED_PISTOLE_ANIMATIONS

// Additional Animations (note: jogging is under run category and not included here)
#define MOVE_ERECT_WALK_LOWERED_RIFLE_ANIMATIONS ["AmovPercMwlkSlowWrflDb_ver2","AmovPercMwlkSlowWrflDbl_ver2","AmovPercMwlkSlowWrflDbr_ver2","AmovPercMwlkSlowWrflDf_ver2","AmovPercMwlkSlowWrflDfl_ver2","AmovPercMwlkSlowWrflDfr_ver2","AmovPercMwlkSlowWrflDl_ver2","AmovPercMwlkSlowWrflDr_ver2"]
#define MOVE_KNEEL_WALK_LOWERED_RIFLE_ANIMATIONS ["AmovPknlMwlkSlowWrflDb","AmovPknlMwlkSlowWrflDbl","AmovPknlMwlkSlowWrflDbr","AmovPknlMwlkSlowWrflDf","AmovPknlMwlkSlowWrflDfl","AmovPknlMwlkSlowWrflDfr","AmovPknlMwlkSlowWrflDl","AmovPknlMwlkSlowWrflDr"]
#define MOVE_ERECT_WALK_LOWERED_PISTOLE_ANIMATIONS ["AmovPercMwlkSlowWpstDb","AmovPercMwlkSlowWpstDbl","AmovPercMwlkSlowWpstDbr","AmovPercMwlkSlowWpstDf","AmovPercMwlkSlowWpstDfl","AmovPercMwlkSlowWpstDfr","AmovPercMwlkSlowWpstDl","AmovPercMwlkSlowWpstDr"]
#define MOVE_KNEEL_WALK_LOWERED_PISTOLE_ANIMATIONS ["AmovPknlMwlkSlowWpstDb","AmovPknlMwlkSlowWpstDbl","AmovPknlMwlkSlowWpstDbr","AmovPknlMwlkSlowWpstDf","AmovPknlMwlkSlowWpstDfl","AmovPknlMwlkSlowWpstDfr","AmovPknlMwlkSlowWpstDl","AmovPknlMwlkSlowWpstDr"]
#define ALL_MOVE_WALK_ANIMATIONS_ADDITIONAL MOVE_ERECT_WALK_LOWERED_RIFLE_ANIMATIONS + MOVE_KNEEL_WALK_LOWERED_RIFLE_ANIMATIONS + MOVE_ERECT_WALK_LOWERED_PISTOLE_ANIMATIONS + MOVE_KNEEL_WALK_LOWERED_PISTOLE_ANIMATIONS

#define MOVE_ERECT_TACTICAL_LOWERED_RIFLE_ANIMATIONS ["AmovPercMtacSlowWrflDb_ver2","AmovPercMtacSlowWrflDbl_ver2","AmovPercMtacSlowWrflDbr_ver2","AmovPercMtacSlowWrflDf_ver2","AmovPercMtacSlowWrflDfl_ver2","AmovPercMtacSlowWrflDfr_ver2","AmovPercMtacSlowWrflDl_ver2","AmovPercMtacSlowWrflDr_ver2"]
#define MOVE_KNEEL_TACTICAL_LOWERED_RIFLE_ANIMATIONS ["AmovPknlMtacSlowWrflDb","AmovPknlMtacSlowWrflDbl","AmovPknlMtacSlowWrflDbr","AmovPknlMtacSlowWrflDf","AmovPknlMtacSlowWrflDfl","AmovPknlMtacSlowWrflDfr","AmovPknlMtacSlowWrflDl","AmovPknlMtacSlowWrflDr"]
#define MOVE_ERECT_TACTICAL_LOWERED_PISTOLE_ANIMATIONS ["AmovPercMtacSlowWpstDb","AmovPercMtacSlowWpstDbl","AmovPercMtacSlowWpstDbr","AmovPercMtacSlowWpstDf","AmovPercMtacSlowWpstDfl","AmovPercMtacSlowWpstDfr","AmovPercMtacSlowWpstDl","AmovPercMtacSlowWpstDr"]
#define MOVE_KNEEL_TACTICAL_LOWERED_PISTOLE_ANIMATIONS ["AmovPknlMtacSlowWpstDb","AmovPknlMtacSlowWpstDbl","AmovPknlMtacSlowWpstDbr","AmovPknlMtacSlowWpstDf","AmovPknlMtacSlowWpstDfl","AmovPknlMtacSlowWpstDfr","AmovPknlMtacSlowWpstDl","AmovPknlMtacSlowWpstDr"]
#define ALL_MOVE_TACTICAL_ANIMATIONS_ADDITIONAL MOVE_ERECT_TACTICAL_LOWERED_RIFLE_ANIMATIONS + MOVE_KNEEL_TACTICAL_LOWERED_RIFLE_ANIMATIONS + MOVE_ERECT_TACTICAL_LOWERED_PISTOLE_ANIMATIONS + MOVE_KNEEL_TACTICAL_LOWERED_PISTOLE_ANIMATIONS


#define DGVAR(varName)    if(isNil "AWSR_DEBUG_NAMESPACE") then { AWSR_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in AWSR_DEBUG_NAMESPACE)) then { PUSH(AWSR_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "AWSR_DEBUG_NAMESPACE") then { AWSR_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in AWSR_DEBUG_NAMESPACE)) then { PUSH(AWSR_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))
#define GETMVAR(var1,var2) (missionNamespace GETVAR_SYS(var1,var2))
#define GETUVAR(var1,var2) (uiNamespace GETVAR_SYS(var1,var2))
#define GETPRVAR(var1,var2) (profileNamespace GETVAR_SYS(var1,var2))
#define GETPAVAR(var1,var2) (parsingNamespace GETVAR_SYS(var1,var2))

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) (if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT})
#define ANY_OF(ARRAY,CONDITION) (ARRAY findIf {CONDITION} != -1)

// BEGIN ACE3 reference macros

#define ACE_PREFIX ace

#define ACE_ADDON(component)        DOUBLES(ACE_PREFIX,component)

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))
#define QQACEGVAR(module,var)       QUOTE(QACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACELLSTRING(module,string)  localize ACELSTRING(module,string)
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define ACEPATHTOF(component,path) \z\ace\addons\component\path
#define QACEPATHTOF(component,path) QUOTE(ACEPATHTOF(component,path))

// END ACE3 reference macros

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)

#define PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
    format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9, I=%10 J=%11', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H), RETNIL(I), RETNIL(J)]
#ifdef DEBUG_MODE_FULL
#define TRACE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
    [THIS_FILE_, __LINE__, PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J)] call CBA_fnc_log
#else
   #define TRACE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) /* disabled */
#endif

#define QPATHTOF_SOUND(var1) QUOTE(PATHTOF2_SYS(PREFIX,COMPONENT,var1))
#define QQPATHTOF_SOUND(var1) QUOTE(QPATHTOF_SOUND(var1))

#include "script_debug.hpp"
