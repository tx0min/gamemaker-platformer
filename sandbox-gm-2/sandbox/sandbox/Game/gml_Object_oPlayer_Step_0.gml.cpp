#include "pch.hpp"
YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_control;
extern YYVAR g_VAR_alarm;
extern YYVAR g_VAR_bbox_right;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_bbox_left;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Object_oPlayer_Step_0;
extern YYVAR g_FUNC_keyboard_check_pressed;
extern YYVAR g_FUNC_keyboard_check_released;
extern YYVAR g_FUNC_gamepad_axis_value;
extern YYVAR g_FUNC_gamepad_button_check;
extern YYVAR g_FUNC_gamepad_button_check_pressed;
extern YYVAR g_FUNC_gamepad_button_check_released;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_sprite_get_yoffset;
#ifndef __YYNODEFS
const char g_pString371_BA87A4BB_s[] = {
0x6d, 0x6f, 0x75, 0x73, 0x65, 0x00,                                                                  // mouse.
};
const YYRValue g_pString371_BA87A4BB(g_pString371_BA87A4BB_s, true);
DValue gs_constArg0_BA87A4BB = { 32, 0, VALUE_REAL };
DValue gs_constArg1_BA87A4BB = { 38, 0, VALUE_REAL };
DValue gs_constArg2_BA87A4BB = { 87, 0, VALUE_REAL };
DValue gs_constArg3_BA87A4BB = { 32785, 0, VALUE_REAL };
DValue gs_constArg4_BA87A4BB = { 32783, 0, VALUE_REAL };
DValue gs_constArg5_BA87A4BB = { 32784, 0, VALUE_REAL };
DValue gs_constArg6_BA87A4BB = { 32786, 0, VALUE_REAL };
DValue gs_constArg7_BA87A4BB = { 32781, 0, VALUE_REAL };
DValue gs_constArg8_BA87A4BB = { 32782, 0, VALUE_REAL };
DValue gs_constArg9_BA87A4BB = { 32773, 0, VALUE_REAL };
DValue gs_constArg10_BA87A4BB = { 0, 0, VALUE_REAL };
DValue gs_constArg11_BA87A4BB = { 1, 0, VALUE_REAL };
DValue gs_constArg12_BA87A4BB = { 0.05, 0, VALUE_REAL };
#else
extern const char g_pString371_BA87A4BB_s[];
extern const YYRValue g_pString371_BA87A4BB;
extern DValue gs_constArg0_BA87A4BB;
extern DValue gs_constArg1_BA87A4BB;
extern DValue gs_constArg2_BA87A4BB;
extern DValue gs_constArg3_BA87A4BB;
extern DValue gs_constArg4_BA87A4BB;
extern DValue gs_constArg5_BA87A4BB;
extern DValue gs_constArg6_BA87A4BB;
extern DValue gs_constArg7_BA87A4BB;
extern DValue gs_constArg8_BA87A4BB;
extern DValue gs_constArg9_BA87A4BB;
extern DValue gs_constArg10_BA87A4BB;
extern DValue gs_constArg11_BA87A4BB;
extern DValue gs_constArg12_BA87A4BB;
#endif // __YYNODEFS

void gml_Object_oPlayer_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oPlayer_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oPlayer_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue o0ECB8E193_controltype;
YYRValue local_kLeft;
YYRValue local_kRight;
YYRValue local_kUp;
YYRValue local_kDown;
YYRValue local_kJump;
YYRValue local_kJumpRelease;
YYRValue & global_padindex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_padindex);
YYRValue local_tempAccel;
YYRValue local_tempFric;
YYRValue sWbuiltin_alarm_FF09D93A;
YYRValue sbuiltin_bbox_right;
YYRValue sbuiltin_y;
YYRValue sbuiltin_bbox_left;
YYRValue sbuiltin_sprite_index;
YYRValue global_builtin_room_height;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(5);
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_controltype, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_controltype );
if((/* First usage */o0ECB8E193_controltype == YYRValue(g_pString371_BA87A4BB))) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
bool sc372 = false;
if (YYGML_keyboard_check((int)37)) { sc372=true; } else 
{
sc372 = (YYGML_keyboard_check((int)65));
 };
;
local_kLeft=sc372;
;

YY_STACKTRACE_LINE(8);
bool sc373 = false;
if (YYGML_keyboard_check((int)39)) { sc373=true; } else 
{
sc373 = (YYGML_keyboard_check((int)68));
 };
;
local_kRight=sc373;
;

YY_STACKTRACE_LINE(9);
bool sc374 = false;
if (YYGML_keyboard_check((int)38)) { sc374=true; } else 
{
sc374 = (YYGML_keyboard_check((int)87));
 };
;
local_kUp=sc374;
;

YY_STACKTRACE_LINE(10);
bool sc375 = false;
if (YYGML_keyboard_check((int)40)) { sc375=true; } else 
{
sc375 = (YYGML_keyboard_check((int)83));
 };
;
local_kDown=sc375;
;

YY_STACKTRACE_LINE(12);
bool sc376 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_BA87A4BB;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0])) { sc376=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[1])) { sc376=true; } else 
{
FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constArg2_BA87A4BB;
__pArgs__[2] = &__Args__[2];
sc376 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[2]));
 }; };
;
local_kJump=sc376;
;

YY_STACKTRACE_LINE(13);
bool sc377 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_BA87A4BB;
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_released.val,&__pArgs__[0])) { sc377=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constArg1_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_keyboard_check_released.val,&__pArgs__[1])) { sc377=true; } else 
{
FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constArg2_BA87A4BB;
__pArgs__[2] = &__Args__[2];
sc377 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_keyboard_check_released.val,&__pArgs__[2]));
 }; };
;
local_kJumpRelease=sc377;
;
;
}
else {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
if((/* First usage */(global_padindex) != -4)) {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(16);
bool sc378 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1147 to 1148*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) < 0)) { sc378=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1148 to 1149*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg4_BA87A4BB;
__pArgs__[3] = &__Args__[3];
sc378 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_button_check.val,&__pArgs__[2]));
 };
;
local_kLeft=sc378;
;

YY_STACKTRACE_LINE(17);
bool sc379 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1149 to 1148*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) > 0)) { sc379=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1148 to 1150*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg5_BA87A4BB;
__pArgs__[3] = &__Args__[3];
sc379 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_button_check.val,&__pArgs__[2]));
 };
;
local_kRight=sc379;
;

YY_STACKTRACE_LINE(18);
bool sc380 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1150 to 1148*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg6_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) > 0)) { sc380=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1148 to 1151*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg7_BA87A4BB;
__pArgs__[3] = &__Args__[3];
sc380 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_button_check.val,&__pArgs__[2]));
 };
;
local_kUp=sc380;
;

YY_STACKTRACE_LINE(19);
bool sc381 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1151 to 1148*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg6_BA87A4BB;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) < 0)) { sc381=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1148 to 1152*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg8_BA87A4BB;
__pArgs__[3] = &__Args__[3];
sc381 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_button_check.val,&__pArgs__[2]));
 };
;
local_kDown=sc381;
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1152 to 1148*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg9_BA87A4BB;
__pArgs__[1] = &__Args__[1];
local_kJump=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check_pressed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__Args__[0] = (global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg9_BA87A4BB;
__pArgs__[1] = &__Args__[1];
local_kJumpRelease=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check_released.val,&__pArgs__[0]);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(28);
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
if(BOOL_RValue( /* First usage */(*sself_onGround) )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
YYRValue* sself_groundAccel = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_groundAccel); /* set ContextID to sself_groundAccel */
local_tempAccel=/* First usage */(*sself_groundAccel);
;

YY_STACKTRACE_LINE(30);
YYRValue* sself_groundFric = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_groundFric); /* set ContextID to sself_groundFric */
local_tempFric=/* First usage */(*sself_groundFric);
;
;
}
else {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
YYRValue* sself_airAccel = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_airAccel); /* set ContextID to sself_airAccel */
local_tempAccel=/* First usage */(*sself_airAccel);
;

YY_STACKTRACE_LINE(33);
YYRValue* sself_airFric = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_airFric); /* set ContextID to sself_airFric */
local_tempFric=/* First usage */(*sself_airFric);
;
;
}
;

YY_STACKTRACE_LINE(37);
bool sc383 = false;
bool sc382 = false;
YYRValue* sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to sself_cRight */
if (!((BOOL_RValue( /* First usage */(*sself_cRight) )))){
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
sc382 = (!((BOOL_RValue( /* First usage */(*sself_cLeft) ))));
 };
;
if (sc382) { sc383=true; } else 
{
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1156 */
sc383 = (/* context id changed from 133 to 1156*/(*sself_onGround).asBool());
 };
;
if(sc383) {

YY_STACKTRACE_LINE(37);

YY_STACKTRACE_LINE(38);
YYRValue* sWself_canStick = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_canStick); /* set ContextID to 1157 */
(*sWself_canStick)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(39);
YYRValue* sWself_sticking = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_sticking); /* set ContextID to 1157 */
(*sWself_sticking)=YYRValue(0!=0);
;
;
}
;

YY_STACKTRACE_LINE(44);
bool sc384 = false;
if (/* context id changed from 1156 to 133*/(*sself_onGround).asBool()) { sc384=true; } else 
{
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1158 */
sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to 1158 */
if (/* context id changed from 133 to 1158*/(*sself_cRight).asBool()) { sc384=true; } else 
{
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
sc384 = (/* context id changed from 1155 to 1159*/(*sself_cLeft).asBool());
 }; };
;
if(sc384) {

YY_STACKTRACE_LINE(44);

YY_STACKTRACE_LINE(45);
YYRValue* sself_maxjumps = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxjumps); /* set ContextID to sself_maxjumps */
YYRValue* sWself_jumps = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumps); /* set ContextID to 1160 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_jumps))=/* First usage */(*sself_maxjumps);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(49);
bool sc388 = false;
bool sc386 = false;
bool sc385 = false;
if (/* local */local_kRight.asBool()){
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
sc385 = (/* context id changed from 1159 to 1161*/(*sself_cLeft).asBool());
 };
;
if (sc385) { sc386=true; } else 
{
bool sc387 = false;
if (/* local */local_kLeft.asBool()){
sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to 1163 */
sc387 = (/* context id changed from 1158 to 1163*/(*sself_cRight).asBool());
 };
;
sc386 = (sc387);
 };
;
if (sc386){
YYRValue* sself_canStick = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_canStick); /* set ContextID to sself_canStick */
if (/* First usage */(*sself_canStick).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1165 */
sc388 = (!((BOOL_RValue( /* context id changed from 1158 to 1165*/(*sself_onGround) ))));
 }; };
;
if(sc388) {

YY_STACKTRACE_LINE(49);

YY_STACKTRACE_LINE(50);
YYRValue* sself_clingTime = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_clingTime); /* set ContextID to sself_clingTime */
sWbuiltin_alarm_FF09D93A=/* First usage */(*sself_clingTime);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sWbuiltin_alarm_FF09D93A );
;

YY_STACKTRACE_LINE(51);
YYRValue* sWself_sticking = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_sticking); /* set ContextID to 1166 */
(*sWself_sticking)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(52);
YYRValue* sWself_canStick = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_canStick); /* set ContextID to 1166 */
(*sWself_canStick)=YYRValue(0!=0);
;
;
}
;

YY_STACKTRACE_LINE(56);
if(!((BOOL_RValue( /* context id changed from 1165 to 133*/(*sself_onGround) )))) {

YY_STACKTRACE_LINE(56);

YY_STACKTRACE_LINE(57);
bool sc390 = false;
bool sc389 = false;
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1168 */
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
if (/* context id changed from 1161 to 1168*/(*sself_cLeft).asBool()) { sc389=true; } else 
{
sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to 1169 */
sc389 = (/* context id changed from 1163 to 1169*/(*sself_cRight).asBool());
 };
;
if (sc389){
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
sc390 = ((/* First usage */(*sself_vy) >= 0));
 };
;
if(sc390) {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(59);
FREE_RValue( &__ret1__ );
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYRValue* sself_vyMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vyMax); /* set ContextID to sself_vyMax */
YYRValue* sself_gravSlide = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_gravSlide); /* set ContextID to sself_gravSlide */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1171 */
__Args__[0] = /* context id changed from 1170 to 1171*/(*sself_vy);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_vyMax);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_gravSlide);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(62);
FREE_RValue( &__ret1__ );
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYRValue* sself_vyMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vyMax); /* set ContextID to sself_vyMax */
YYRValue* sself_gravNorm = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_gravNorm); /* set ContextID to sself_gravNorm */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1172 */
__Args__[0] = /* context id changed from 1171 to 1172*/(*sself_vy);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 1171 to 1172*/(*sself_vyMax);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_gravNorm);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(67);
bool sc391 = false;
if (/* local */local_kLeft.asBool()){
if (!((BOOL_RValue( /* local */local_kRight )))){
YYRValue* sself_sticking = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_sticking); /* set ContextID to sself_sticking */
sc391 = (!((BOOL_RValue( /* First usage */(*sself_sticking) ))));
 }; };
;
if(sc391) {

YY_STACKTRACE_LINE(67);

YY_STACKTRACE_LINE(68);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 1175 */
(*sWself_facing)=-1;
;

YY_STACKTRACE_LINE(69);
YYRValue* sself_RUN = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_RUN); /* set ContextID to sself_RUN */
YYRValue* sWself_state = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_state); /* set ContextID to 1175 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_state))=/* First usage */(*sself_RUN);
PopContextStack(1);
;

YY_STACKTRACE_LINE(72);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
if((/* First usage */(*sself_vx) > 0)) {

YY_STACKTRACE_LINE(73);
FREE_RValue( &__ret1__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 1176 */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1176 */
__Args__[0] = /* context id changed from 1175 to 1176*/(*sself_vx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg10_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_tempFric;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(74);
FREE_RValue( &__ret1__ );
YYRValue* sself_vxMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vxMax); /* set ContextID to sself_vxMax */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1175 */
__Args__[0] = /* context id changed from 1176 to 1175*/(*sself_vx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYRValue( -/* First usage */(*sself_vxMax).asReal() );
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_tempAccel;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(78);
bool sc392 = false;
if (/* local */local_kRight.asBool()){
if (!((BOOL_RValue( /* local */local_kLeft )))){
YYRValue* sself_sticking = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_sticking); /* set ContextID to sself_sticking */
sc392 = (!((BOOL_RValue( /* context id changed from 1174 to 1178*/(*sself_sticking) ))));
 }; };
;
if(sc392) {

YY_STACKTRACE_LINE(78);

YY_STACKTRACE_LINE(79);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 1179 */
(*sWself_facing)=1;
;

YY_STACKTRACE_LINE(80);
YYRValue* sself_RUN = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_RUN); /* set ContextID to sself_RUN */
YYRValue* sWself_state = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_state); /* set ContextID to 1179 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_state))=/* context id changed from 1175 to 1179*/(*sself_RUN);
PopContextStack(1);
;

YY_STACKTRACE_LINE(83);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
if((/* context id changed from 1175 to 1179*/(*sself_vx) < 0)) {

YY_STACKTRACE_LINE(84);
FREE_RValue( &__ret1__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 1180 */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1180 */
__Args__[0] = /* context id changed from 1179 to 1180*/(*sself_vx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg10_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_tempFric;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(85);
FREE_RValue( &__ret1__ );
YYRValue* sself_vxMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vxMax); /* set ContextID to sself_vxMax */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1179 */
__Args__[0] = /* context id changed from 1180 to 1179*/(*sself_vx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 1175 to 1179*/(*sself_vxMax);
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_tempAccel;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(89);
bool sc393 = false;
if (!((BOOL_RValue( /* local */local_kRight )))){
sc393 = (!((BOOL_RValue( /* local */local_kLeft ))));
 };
;
if(sc393) {

YY_STACKTRACE_LINE(89);

YY_STACKTRACE_LINE(90);
FREE_RValue( &__ret1__ );
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1182 */
__Args__[0] = /* context id changed from 1179 to 1182*/(*sself_vx);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg10_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_tempFric;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(91);
YYRValue* sself_IDLE = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_IDLE); /* set ContextID to sself_IDLE */
YYRValue* sWself_state = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_state); /* set ContextID to 1182 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_state))=/* First usage */(*sself_IDLE);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(94);
bool sc394 = false;
if (/* local */local_kJump.asBool()){
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
if (/* context id changed from 1168 to 1183*/(*sself_cLeft).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1184 */
sc394 = (!((BOOL_RValue( /* context id changed from 1168 to 1184*/(*sself_onGround) ))));
 }; };
;
if(sc394) {

YY_STACKTRACE_LINE(94);

YY_STACKTRACE_LINE(96);
YYRValue* sself_stretch = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_stretch); /* set ContextID to sself_stretch */
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 1185 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yscale))=/* First usage */(*sself_stretch);
PopContextStack(1);
;

YY_STACKTRACE_LINE(97);
YYRValue* sself_squash = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_squash); /* set ContextID to sself_squash */
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 1185 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xscale))=/* First usage */(*sself_squash);
PopContextStack(1);
;

YY_STACKTRACE_LINE(99);
if(BOOL_RValue( /* local */local_kLeft )) {

YY_STACKTRACE_LINE(99);

YY_STACKTRACE_LINE(100);
YYRValue* sself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpHeight); /* set ContextID to sself_jumpHeight */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1186 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=(YYRValue( -/* First usage */(*sself_jumpHeight).asReal() ) * 1.1);
PopContextStack(1);
;

YY_STACKTRACE_LINE(101);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1186 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=((*sself_jumpHeight) * 0.75);
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(102);

YY_STACKTRACE_LINE(103);
YYRValue* sself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpHeight); /* set ContextID to sself_jumpHeight */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1187 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=(YYRValue( -/* context id changed from 1186 to 1187*/(*sself_jumpHeight).asReal() ) * 1.1);
PopContextStack(1);
;

YY_STACKTRACE_LINE(104);
YYRValue* sself_vxMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vxMax); /* set ContextID to sself_vxMax */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1187 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=/* context id changed from 1179 to 1187*/(*sself_vxMax);
PopContextStack(1);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(109);
bool sc395 = false;
if (/* local */local_kJump.asBool()){
sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to 1188 */
if (/* context id changed from 1169 to 1188*/(*sself_cRight).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1189 */
sc395 = (!((BOOL_RValue( /* context id changed from 1184 to 1189*/(*sself_onGround) ))));
 }; };
;
if(sc395) {

YY_STACKTRACE_LINE(109);

YY_STACKTRACE_LINE(111);
YYRValue* sself_stretch = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_stretch); /* set ContextID to sself_stretch */
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 1190 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yscale))=/* context id changed from 1185 to 1190*/(*sself_stretch);
PopContextStack(1);
;

YY_STACKTRACE_LINE(112);
YYRValue* sself_squash = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_squash); /* set ContextID to sself_squash */
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 1190 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xscale))=/* context id changed from 1185 to 1190*/(*sself_squash);
PopContextStack(1);
;

YY_STACKTRACE_LINE(114);
if(BOOL_RValue( /* local */local_kRight )) {

YY_STACKTRACE_LINE(114);

YY_STACKTRACE_LINE(115);
YYRValue* sself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpHeight); /* set ContextID to sself_jumpHeight */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1191 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=(YYRValue( -/* context id changed from 1187 to 1191*/(*sself_jumpHeight).asReal() ) * 1.1);
PopContextStack(1);
;

YY_STACKTRACE_LINE(116);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1191 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=(YYRValue( -(*sself_jumpHeight).asReal() ) * 0.75);
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(117);

YY_STACKTRACE_LINE(118);
YYRValue* sself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpHeight); /* set ContextID to sself_jumpHeight */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1192 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=(YYRValue( -/* context id changed from 1191 to 1192*/(*sself_jumpHeight).asReal() ) * 1.1);
PopContextStack(1);
;

YY_STACKTRACE_LINE(119);
YYRValue* sself_vxMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vxMax); /* set ContextID to sself_vxMax */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1192 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=YYRValue( -/* context id changed from 1187 to 1192*/(*sself_vxMax).asReal() );
PopContextStack(1);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(124);
if(BOOL_RValue( /* local */local_kJump )) {

YY_STACKTRACE_LINE(124);

YY_STACKTRACE_LINE(125);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000003);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg11_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg10_BA87A4BB;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(126);
bool sc396 = false;
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1193 */
if (/* context id changed from 1189 to 1193*/(*sself_onGround).asBool()) { sc396=true; } else 
{
YYRValue* sself_jumps = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumps); /* set ContextID to sself_jumps */
sc396 = ((/* First usage */(*sself_jumps) > 0));
 };
;
if(sc396) {

YY_STACKTRACE_LINE(126);

YY_STACKTRACE_LINE(127);
YYRValue* sself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpHeight); /* set ContextID to sself_jumpHeight */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1195 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=YYRValue( -/* context id changed from 1192 to 1195*/(*sself_jumpHeight).asReal() );
PopContextStack(1);
;

YY_STACKTRACE_LINE(128);
YYRValue* sself_stretch = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_stretch); /* set ContextID to sself_stretch */
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 1195 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yscale))=/* context id changed from 1190 to 1195*/(*sself_stretch);
PopContextStack(1);
;

YY_STACKTRACE_LINE(129);
YYRValue* sself_squash = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_squash); /* set ContextID to sself_squash */
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 1195 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xscale))=/* context id changed from 1190 to 1195*/(*sself_squash);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(131);
YYRValue* sWself_jumps = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumps); /* set ContextID to 1193 */
--/* context id changed from 1160 to 1193*/(*sWself_jumps);
;
;
}
else {

YY_STACKTRACE_LINE(134);
if(BOOL_RValue( /* local */local_kJumpRelease )) {

YY_STACKTRACE_LINE(134);

YY_STACKTRACE_LINE(135);
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
if((/* context id changed from 1172 to 1197*/(*sself_vy) < 0)) {

YY_STACKTRACE_LINE(136);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1198 */
/* context id changed from 1195 to 1198*/(*sWself_vy)*=0.25;
;
}
;
;
}
;
}
;

YY_STACKTRACE_LINE(140);
if(!((BOOL_RValue( /* context id changed from 1193 to 133*/(*sself_onGround) )))) {

YY_STACKTRACE_LINE(141);
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1199 */
YYRValue* sself_JUMP = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_JUMP); /* set ContextID to sself_JUMP */
YYRValue* sWself_state = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_state); /* set ContextID to 1199 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_state))=/* First usage */(*sself_JUMP);
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(145);
bool sc397 = false;
if (/* context id changed from 1188 to 133*/(*sself_cRight).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1200 */
sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to 1200 */
sc397 = (!((BOOL_RValue( /* context id changed from 1199 to 1200*/(*sself_onGround) ))));
 };
;
if(sc397) {

YY_STACKTRACE_LINE(145);

YY_STACKTRACE_LINE(146);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 1201 */
(*sWself_facing)=-1;
;

YY_STACKTRACE_LINE(147);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_bbox_right;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
gml_Script_fxDust(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(148);
bool sc398 = false;
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
if (/* context id changed from 1183 to 1202*/(*sself_cLeft).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1203 */
sc398 = (!((BOOL_RValue( /* context id changed from 1200 to 1203*/(*sself_onGround) ))));
 };
;
if(sc398) {

YY_STACKTRACE_LINE(148);

YY_STACKTRACE_LINE(149);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 1204 */
(*sWself_facing)=1;
;

YY_STACKTRACE_LINE(150);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_bbox_left;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
gml_Script_fxDust(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
;
}
;
}
;

YY_STACKTRACE_LINE(159);
FREE_RValue( &__ret1__ );
YYRValue* sself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xscale); /* set ContextID to sself_xscale */
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 133 */
__Args__[0] = /* First usage */(*sself_xscale);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg11_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg12_BA87A4BB;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xscale))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(160);
FREE_RValue( &__ret1__ );
YYRValue* sself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yscale); /* set ContextID to sself_yscale */
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 133 */
__Args__[0] = /* First usage */(*sself_yscale);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg11_BA87A4BB;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg12_BA87A4BB;
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yscale))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(163);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
__Args__[0] = /* First usage */sbuiltin_sprite_index;
__pArgs__[0] = &__Args__[0];
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
if(((/* volatile */sbuiltin_y - YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_get_yoffset.val,&__pArgs__[0])) > /* First usage */global_builtin_room_height)) {

YY_STACKTRACE_LINE(163);

YY_STACKTRACE_LINE(164);
FREE_RValue( &__ret2__ );
gml_Script_death(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;
}
#endif
