#include "pch.hpp"
YYRValue& gml_Script_restartRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_prevRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script___background_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script___background_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_tile_layer_shift( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_mouse_x;
extern YYVAR g_VAR_mouse_y;
extern YYVAR self_we;
extern YYVAR g_VAR_cursor_sprite;
extern YYVAR sel;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_weapon;
extern YYVAR self_i;
extern YYVAR g_Script_gml_Object_oGame_Step_0;
extern YYVAR g_FUNC_keyboard_check_pressed;
extern YYVAR g_FUNC_mouse_check_button_pressed;
extern YYVAR g_FUNC_window_set_fullscreen;
extern YYVAR g_FUNC_window_get_fullscreen;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_window_set_cursor;
#ifndef __YYNODEFS
const char g_pString303_DF0BC878_s[] = {
0x6d, 0x6f, 0x75, 0x73, 0x65, 0x00,                                                                  // mouse.
};
const YYRValue g_pString303_DF0BC878(g_pString303_DF0BC878_s, true);
const char g_pString304_DF0BC878_s[] = {
0x67, 0x61, 0x6d, 0x65, 0x70, 0x61, 0x64, 0x00,                                                      // gamepad.
};
const YYRValue g_pString304_DF0BC878(g_pString304_DF0BC878_s, true);
DValue gs_constArg0_DF0BC878 = { 82, 0, VALUE_REAL };
DValue gs_constArg1_DF0BC878 = { 27, 0, VALUE_REAL };
DValue gs_constArg2_DF0BC878 = { 90, 0, VALUE_REAL };
DValue gs_constArg3_DF0BC878 = { 88, 0, VALUE_REAL };
DValue gs_constArg4_DF0BC878 = { 70, 0, VALUE_REAL };
DValue gs_constArg5_DF0BC878 = { 71, 0, VALUE_REAL };
DValue gs_constArg6_DF0BC878 = { 67, 0, VALUE_REAL };
DValue gs_constArg7_DF0BC878 = { 2, 0, VALUE_REAL };
DValue gs_constArg8_DF0BC878 = { 25, 0, VALUE_REAL };
DValue gs_constArg9_DF0BC878 = { 5, 0, VALUE_REAL };
DValue gs_constArg10_DF0BC878 = { 0, 0, VALUE_REAL };
DValue gs_constArg11_DF0BC878 = { -1, 0, VALUE_REAL };
DValue gs_constArg14_DF0BC878 = { -1000001, 0, VALUE_REAL };
DLValue gs_constLongArg12_DF0BC878 = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg13_DF0BC878 = { 3LL, 0, VALUE_INT64 };
#else
extern const char g_pString303_DF0BC878_s[];
extern const YYRValue g_pString303_DF0BC878;
extern const char g_pString304_DF0BC878_s[];
extern const YYRValue g_pString304_DF0BC878;
extern DValue gs_constArg0_DF0BC878;
extern DValue gs_constArg1_DF0BC878;
extern DValue gs_constArg2_DF0BC878;
extern DValue gs_constArg3_DF0BC878;
extern DValue gs_constArg4_DF0BC878;
extern DValue gs_constArg5_DF0BC878;
extern DValue gs_constArg6_DF0BC878;
extern DValue gs_constArg7_DF0BC878;
extern DValue gs_constArg8_DF0BC878;
extern DValue gs_constArg9_DF0BC878;
extern DValue gs_constArg10_DF0BC878;
extern DValue gs_constArg11_DF0BC878;
extern DValue gs_constArg14_DF0BC878;
extern DLValue gs_constLongArg12_DF0BC878;
extern DLValue gs_constLongArg13_DF0BC878;
#endif // __YYNODEFS

void gml_Object_oGame_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oGame_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oGame_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue local_kRestart;
YYRValue local_kExit;
YYRValue local_kPrev;
YYRValue local_kNext;
YYRValue & global_padindex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_padindex);
YYRValue & global_debug = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debug);
YYRValue local_c;
YYRValue global_builtin_mouse_x;
YYRValue global_builtin_mouse_y;
YYRValue o0ECB8E193_weapon;
YYRValue globalW_builtin_cursor_sprite;
YYRValue local_i;
YYRValue o09F585553_vx;
YYRValue o027E43236_x;
YYRValue o027E43236_y;
YYRValue o0ECB8E193_weapontype;
YYRValue oW0ECB8E193_weapon;
YYRValue oW_weapon0A8E9C8E3_inuse;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(2);
;

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_DF0BC878;
__pArgs__[0] = &__Args__[0];
local_kRestart=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_DF0BC878;
__pArgs__[0] = &__Args__[0];
local_kExit=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_DF0BC878;
__pArgs__[0] = &__Args__[0];
local_kPrev=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg3_DF0BC878;
__pArgs__[0] = &__Args__[0];
local_kNext=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
YYRValue* sWself_kFS = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_kFS); /* set ContextID to 98 */
__Args__[0] = (YYRValue*)&gs_constArg4_DF0BC878;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_kFS))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
YYRValue* sWself_kDebug = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_kDebug); /* set ContextID to 98 */
__Args__[0] = (YYRValue*)&gs_constArg5_DF0BC878;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_kDebug))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
YYRValue* sWself_kControl = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_kControl); /* set ContextID to 98 */
__Args__[0] = (YYRValue*)&gs_constArg6_DF0BC878;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_kControl))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYRValue* sWself_rClick = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_rClick); /* set ContextID to 98 */
__Args__[0] = (YYRValue*)&gs_constArg7_DF0BC878;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_rClick))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_mouse_check_button_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(15);
if(BOOL_RValue( /* local */local_kRestart )) {

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
gml_Script_restartRoom(pSelf,pOther,__ret1__,0,NULL);
;
}
;

YY_STACKTRACE_LINE(18);
if(BOOL_RValue( /* local */local_kExit )) {

YY_STACKTRACE_LINE(19);
YYGML_game_end(0,NULL);
;
}
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_kFS = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_kFS); /* set ContextID to sself_kFS */
if(BOOL_RValue( /* First usage */(*sself_kFS) )) {

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = !((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_window_get_fullscreen.val,NULL) )));
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_window_set_fullscreen.val,&__pArgs__[0]);
;
}
;

YY_STACKTRACE_LINE(24);
YYRValue* sself_kControl = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_kControl); /* set ContextID to sself_kControl */
if(BOOL_RValue( /* First usage */(*sself_kControl) )) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
YYRValue* sself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_controltype); /* set ContextID to sself_controltype */
if((/* First usage */(*sself_controltype) == YYRValue(g_pString303_DF0BC878))) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
if((/* First usage */(global_padindex) != -4)) {

YY_STACKTRACE_LINE(26);
YYRValue* sWself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_controltype); /* set ContextID to 1006 */
(*sWself_controltype)=g_pString304_DF0BC878;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
YYRValue* sWself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_controltype); /* set ContextID to 1007 */
(*sWself_controltype)=g_pString303_DF0BC878;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(31);
YYRValue* sself_kDebug = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_kDebug); /* set ContextID to sself_kDebug */
if(BOOL_RValue( /* First usage */(*sself_kDebug) )) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
(global_debug)=!((BOOL_RValue( /* First usage */(global_debug) )));
;
;
}
;

YY_STACKTRACE_LINE(35);
if(BOOL_RValue( /* context id changed from 1008 to 98*/(global_debug) )) {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
YYRValue* sself_rClick = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rClick); /* set ContextID to sself_rClick */
if(BOOL_RValue( /* First usage */(*sself_rClick) )) {

YY_STACKTRACE_LINE(36);

YY_STACKTRACE_LINE(38);
local_c=YYGML_make_color_rgb((int)YYGML_irandom_range((int64)0,(int64)255),(int)YYGML_irandom_range((int64)0,(int64)255),(int)YYGML_irandom_range((int64)0,(int64)255));
;

YY_STACKTRACE_LINE(39);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_x.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_y.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_y );
__Args__[0] = /* First usage */global_builtin_mouse_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */global_builtin_mouse_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg8_DF0BC878;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg9_DF0BC878;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg9_DF0BC878;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg9_DF0BC878;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg9_DF0BC878;
__pArgs__[6] = &__Args__[6];
__pArgs__[7] = &/* local */local_c;
__Args__[8] = (YYRValue*)&gs_constArg10_DF0BC878;
__pArgs__[8] = &__Args__[8];
gml_Script_fxSplatter(pSelf,pOther,__ret1__,9,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(40);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_x.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_y.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_y );
__Args__[0] = /* volatile */global_builtin_mouse_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */global_builtin_mouse_y;
__pArgs__[1] = &__Args__[1];
gml_Script_fxExplosion(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(44);
if(BOOL_RValue( /* local */local_kPrev )) {

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
gml_Script_prevRoom(pSelf,pOther,__ret1__,0,NULL);
;
}
;

YY_STACKTRACE_LINE(49);
if(BOOL_RValue( /* local */local_kNext )) {

YY_STACKTRACE_LINE(50);
FREE_RValue( &__ret1__ );
gml_Script_nextRoom(pSelf,pOther,__ret1__,0,NULL);
;
}
;
;
}
;

YY_STACKTRACE_LINE(55);
bool sc305 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
__Args__[1] = YYASSET_REF(0x0000000E);
__pArgs__[1] = &__Args__[1];
sc305 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_instance_exists.val,&__pArgs__[1]));
 };
;
if(sc305) {

YY_STACKTRACE_LINE(55);

YY_STACKTRACE_LINE(56);
FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constArg11_DF0BC878;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_window_set_cursor.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(57);
YYRValue* sself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_controltype); /* set ContextID to sself_controltype */
if((/* context id changed from 1004 to 1014*/(*sself_controltype) == YYRValue(g_pString303_DF0BC878))) {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(58);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
if((/* First usage */o0ECB8E193_weapon != -4)) {

YY_STACKTRACE_LINE(58);

YY_STACKTRACE_LINE(59);
globalW_builtin_cursor_sprite=YYASSET_REF(0x0100001A);
Variable_SetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_cursor_sprite.val, (int)ARRAY_INDEX_NO_INDEX, &globalW_builtin_cursor_sprite );
;
;
}
else {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(61);
globalW_builtin_cursor_sprite=-4;
Variable_SetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_cursor_sprite.val, (int)ARRAY_INDEX_NO_INDEX, &globalW_builtin_cursor_sprite );
;
;
}
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(68);

YY_STACKTRACE_LINE(68);
local_i=0;
;
bool ___f306___ = true;
while( true ) {
if (!___f306___) {

YY_STACKTRACE_LINE(68);
++/* local */local_i;
;
}
___f306___ = false;
bool ___b307___ = ((/* local */local_i < 3));
if (!___b307___) break;
{

YY_STACKTRACE_LINE(68);

YY_STACKTRACE_LINE(69);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constLongArg12_DF0BC878;
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local_i;
if(BOOL_RValue( gml_Script___background_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
__Args__[2] = (YYRValue*)&gs_constLongArg12_DF0BC878;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg10_DF0BC878;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constLongArg13_DF0BC878;
__pArgs__[4] = &__Args__[4];
__pArgs__[5] = &/* local */local_i;
__Args__[6] = (gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[2]) / ((/* local */local_i + 1) * 2));
__pArgs__[6] = &__Args__[6];
gml_Script___background_set(pSelf,pOther,__ret2__,3,&__pArgs__[4]);
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(77);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(77);

YY_STACKTRACE_LINE(78);
FREE_RValue( &__ret2__ );
__Args__[1] = (YYRValue*)&gs_constLongArg12_DF0BC878;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg10_DF0BC878;
__pArgs__[2] = &__Args__[2];
if((gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[1]) > 5)) {

YY_STACKTRACE_LINE(78);

YY_STACKTRACE_LINE(79);
FREE_RValue( &__ret3__ );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001D), kVARID_self_vx, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_vx );
__Args__[3] = (YYRValue*)&gs_constArg14_DF0BC878;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue( -/* First usage */o09F585553_vx.asReal() ) / (double)10);
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg10_DF0BC878;
__pArgs__[5] = &__Args__[5];
gml_Script_tile_layer_shift(pSelf,pOther,__ret3__,3,&__pArgs__[3]);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(89);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001E);
__pArgs__[0] = &__Args__[0];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(89);

YY_STACKTRACE_LINE(90);
FREE_RValue( &__ret2__ );
gml_Script_nextRoom(pSelf,pOther,__ret2__,0,NULL);
;
;
}
else {

YY_STACKTRACE_LINE(91);

YY_STACKTRACE_LINE(92);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(92);

YY_STACKTRACE_LINE(93);
YYRValue* sself_gameover = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_gameover); /* set ContextID to sself_gameover */
if(!((BOOL_RValue( /* First usage */(*sself_gameover) )))) {

YY_STACKTRACE_LINE(93);

YY_STACKTRACE_LINE(94);
FREE_RValue( &__ret2__ );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_x, pSelf, pOther );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_y, pSelf, pOther );
__Args__[1] = /* First usage */o027E43236_x;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */o027E43236_y;
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYASSET_REF(0x0000001D);
__pArgs__[3] = &__Args__[3];
gml_Script_instance_create(pSelf,pOther,__ret2__,3,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(95);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
if((/* context id changed from 1015 to 1029*/o0ECB8E193_weapon != -4)) {

YY_STACKTRACE_LINE(95);

YY_STACKTRACE_LINE(96);
FREE_RValue( &__ret1__ );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_x, pSelf, pOther );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_y, pSelf, pOther );
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapontype, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapontype );
__Args__[0] = /* volatile */o027E43236_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 1029 to 1033*/o027E43236_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */o0ECB8E193_weapontype;
__pArgs__[2] = &__Args__[2];
oW0ECB8E193_weapon=gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_weapon );
;

YY_STACKTRACE_LINE(97);
oW_weapon0A8E9C8E3_inuse=YYRValue(1!=0);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
YYGML_Variable_SetValue( /* context id changed from 1029 to 1038*/o0ECB8E193_weapon, kVARID_self_inuse, (int)ARRAY_INDEX_NO_INDEX, &oW_weapon0A8E9C8E3_inuse );
;
;
}
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(103);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x00000003);
__pArgs__[0] = &__Args__[0];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(103);

YY_STACKTRACE_LINE(104);
FREE_RValue( &__ret2__ );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_x, pSelf, pOther );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_y, pSelf, pOther );
__Args__[1] = /* volatile */o027E43236_x;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* context id changed from 1033 to 1040*/o027E43236_y;
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYASSET_REF(0x00000003);
__pArgs__[3] = &__Args__[3];
gml_Script_instance_create(pSelf,pOther,__ret2__,3,&__pArgs__[1]);
;
;
}
;
;
}
;
}
#endif
