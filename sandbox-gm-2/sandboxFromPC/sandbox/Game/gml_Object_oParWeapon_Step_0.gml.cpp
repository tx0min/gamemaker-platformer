#include "pch.hpp"
YYRValue& gml_Script_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_sprite_height;
extern YYVAR g_VAR_image_angle;
extern YYVAR self_control;
extern YYVAR g_VAR_mouse_x;
extern YYVAR g_VAR_mouse_y;
extern YYVAR self_fa;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_sprite_width;
extern YYVAR g_VAR_sprite_xoffset;
extern YYVAR g_VAR_alarm;
extern YYVAR g_VAR_id;
extern YYVAR self_we;
extern YYVAR g_VAR_object_index;
extern YYVAR self_weapon;
extern YYVAR g_Script_gml_Object_oParWeapon_Step_0;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_gamepad_axis_value;
extern YYVAR g_FUNC_sin;
extern YYVAR g_FUNC_keyboard_check_pressed;
extern YYVAR g_FUNC_gamepad_button_check_pressed;
extern YYVAR g_FUNC_mouse_check_button_pressed;
extern YYVAR g_FUNC_mouse_check_button;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
const char g_pString357_F0E1EC0F_s[] = {
0x6d, 0x6f, 0x75, 0x73, 0x65, 0x00,                                                                  // mouse.
};
const YYRValue g_pString357_F0E1EC0F(g_pString357_F0E1EC0F_s, true);
DValue gs_constArg0_F0E1EC0F = { 32787, 0, VALUE_REAL };
DValue gs_constArg1_F0E1EC0F = { 32788, 0, VALUE_REAL };
DValue gs_constArg2_F0E1EC0F = { 69, 0, VALUE_REAL };
DValue gs_constArg3_F0E1EC0F = { 32772, 0, VALUE_REAL };
DValue gs_constArg4_F0E1EC0F = { 1, 0, VALUE_REAL };
DValue gs_constArg5_F0E1EC0F = { 32774, 0, VALUE_REAL };
DValue gs_constArg6_F0E1EC0F = { 65535, 0, VALUE_REAL };
#else
extern const char g_pString357_F0E1EC0F_s[];
extern const YYRValue g_pString357_F0E1EC0F;
extern DValue gs_constArg0_F0E1EC0F;
extern DValue gs_constArg1_F0E1EC0F;
extern DValue gs_constArg2_F0E1EC0F;
extern DValue gs_constArg3_F0E1EC0F;
extern DValue gs_constArg4_F0E1EC0F;
extern DValue gs_constArg5_F0E1EC0F;
extern DValue gs_constArg6_F0E1EC0F;
#endif // __YYNODEFS

void gml_Object_oParWeapon_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParWeapon_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParWeapon_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue o09F585553_x;
YYRValue sWbuiltin_x;
YYRValue o09F585553_y;
YYRValue o09F585553_sprite_height;
YYRValue sWbuiltin_y;
YYRValue sbuiltin_image_angle;
YYRValue local_angle;
YYRValue o0ECB8E193_controltype;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue global_builtin_mouse_x;
YYRValue global_builtin_mouse_y;
YYRValue & global_padindex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_padindex);
YYRValue o09F585553_facing;
YYRValue sWbuiltin_image_angle;
YYRValue sWbuiltin_image_yscale;
YYRValue local_rad;
YYRValue sbuiltin_sprite_width;
YYRValue sbuiltin_sprite_xoffset;
YYRValue local_hipotenusa;
YYRValue local_cy;
YYRValue local_cx;
YYRValue sWbuiltin_alarm_CD3FBBB8;
YYRValue sWbuiltin_alarm_E612E87B;
YYRValue sbuiltin_id;
YYRValue oW0ECB8E193_weapon;
YYRValue sbuiltin_object_index;
YYRValue oW0ECB8E193_weapontype;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(2);
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
YYRValue* sself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inuse); /* set ContextID to sself_inuse */
if(BOOL_RValue( /* First usage */(*sself_inuse) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(5);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_x, pSelf, pOther );
sWbuiltin_x=/* First usage */o09F585553_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(6);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_y, pSelf, pOther );
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_sprite_height.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_sprite_height, pSelf, pOther );
sWbuiltin_y=(/* First usage */o09F585553_y - (/* First usage */o09F585553_sprite_height / (double)2));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(9);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
local_angle=/* First usage */sbuiltin_image_angle;
;

YY_STACKTRACE_LINE(11);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_controltype, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_controltype );
if((/* First usage */o0ECB8E193_controltype == YYRValue(g_pString357_F0E1EC0F))) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_x.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_mouse_y.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_mouse_y );
local_angle=YYGML_point_direction((float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()),(float)(float)(/* First usage */global_builtin_mouse_x.asReal()),(float)(float)(/* First usage */global_builtin_mouse_y.asReal()));
;
;
}
else {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* First usage */(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_F0E1EC0F;
__pArgs__[3] = &__Args__[3];
local_angle=YYGML_point_direction((float)0,(float)0,(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[2]).asReal());
;

YY_STACKTRACE_LINE(18);
bool sc358 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = (global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) == 0)){
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1098 to 1099*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_F0E1EC0F;
__pArgs__[3] = &__Args__[3];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[2]) == 0)){
YYGML_Variable_GetValue( YYASSET_REF(0x0000001D), kVARID_self_facing, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_facing );
sc358 = ((/* First usage */o09F585553_facing == -1));
 }; };
;
if(sc358) {

YY_STACKTRACE_LINE(18);
local_angle=180;
;
}
;
;
}
;

YY_STACKTRACE_LINE(24);
sWbuiltin_image_angle=/* local */local_angle;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;

YY_STACKTRACE_LINE(25);
bool sc359 = false;
if ((/* local */local_angle > 90)){
sc359 = ((/* local */local_angle < 270));
 };
;
if(sc359) {

YY_STACKTRACE_LINE(25);
sWbuiltin_image_yscale=-1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;
}
else {

YY_STACKTRACE_LINE(26);
sWbuiltin_image_yscale=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;
}
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
YYRValue* sself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inuse); /* set ContextID to sself_inuse */
if(BOOL_RValue( /* context id changed from 1091 to 1107*/(*sself_inuse) )) {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(35);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
local_rad=((/* volatile */sbuiltin_image_angle * 3.141592653589793) / (double)180);
;

YY_STACKTRACE_LINE(37);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_width.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_width );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_xoffset.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_xoffset );
local_hipotenusa=(/* First usage */sbuiltin_sprite_width - /* First usage */sbuiltin_sprite_xoffset);
;

YY_STACKTRACE_LINE(38);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_rad;
local_cy=(/* local */local_hipotenusa * YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sin.val,&__pArgs__[0]));
;

YY_STACKTRACE_LINE(39);
local_cx=(/* local */local_hipotenusa * YYGML_cos((double)/* local */local_rad.asReal()));
;

YY_STACKTRACE_LINE(40);
YYRValue* sWself_xout = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xout); /* set ContextID to 1108 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xout))=(/* volatile */sbuiltin_x + /* local */local_cx);
PopContextStack(1);
;

YY_STACKTRACE_LINE(41);
YYRValue* sWself_yout = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yout); /* set ContextID to 1108 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yout))=(/* volatile */sbuiltin_y - /* local */local_cy);
PopContextStack(1);
;

YY_STACKTRACE_LINE(43);
YYRValue* sWself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shoot); /* set ContextID to 1108 */
(*sWself_shoot)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(47);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_controltype, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_controltype );
if((/* context id changed from 1092 to 1108*/o0ECB8E193_controltype == YYRValue(g_pString357_F0E1EC0F))) {

YY_STACKTRACE_LINE(47);

YY_STACKTRACE_LINE(48);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg2_F0E1EC0F;
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_keyboard_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(48);

YY_STACKTRACE_LINE(49);
FREE_RValue( &__ret2__ );
gml_Script_dropWeapon(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(51);

YY_STACKTRACE_LINE(52);
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1099 to 1112*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg3_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check_pressed.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(52);

YY_STACKTRACE_LINE(53);
FREE_RValue( &__ret2__ );
gml_Script_dropWeapon(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(59);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_controltype, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_controltype );
if((/* array index changed from System.Collections.Generic.List`1[System.String] to System.Collections.Generic.List`1[System.String]*/o0ECB8E193_controltype == YYRValue(g_pString357_F0E1EC0F))) {

YY_STACKTRACE_LINE(59);

YY_STACKTRACE_LINE(61);
FREE_RValue( &__ret1__ );
sWself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shoot); /* set ContextID to 1115 */
__Args__[0] = (YYRValue*)&gs_constArg4_F0E1EC0F;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shoot))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_mouse_check_button_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(62);
YYRValue* sself_holdfire = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_holdfire); /* set ContextID to sself_holdfire */
if(BOOL_RValue( /* First usage */(*sself_holdfire) )) {

YY_STACKTRACE_LINE(62);
FREE_RValue( &__ret1__ );
sWself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shoot); /* set ContextID to 1116 */
__Args__[0] = (YYRValue*)&gs_constArg4_F0E1EC0F;
__pArgs__[0] = &__Args__[0];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shoot))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_mouse_check_button.val,&__pArgs__[0]);
PopContextStack(1);
;
}
;
;
}
else {

YY_STACKTRACE_LINE(68);

YY_STACKTRACE_LINE(69);
if((/* context id changed from 1112 to 1117*/(global_padindex) != -4)) {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(72);
sWself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shoot); /* set ContextID to 1118 */
bool sc360 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = /* context id changed from 1117 to 1118*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
if ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[0]) != 0)) { sc360=true; } else 
{
FREE_RValue( &__ret2__ );
__Args__[2] = /* context id changed from 1118 to 1119*/(global_padindex);
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_F0E1EC0F;
__pArgs__[3] = &__Args__[3];
sc360 = ((YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_gamepad_axis_value.val,&__pArgs__[2]) != 0));
 };
;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shoot))=sc360;
PopContextStack(1);
;

YY_STACKTRACE_LINE(73);
YYRValue* sself_holdfire = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_holdfire); /* set ContextID to sself_holdfire */
if(!((BOOL_RValue( /* context id changed from 1115 to 1118*/(*sself_holdfire) )))) {

YY_STACKTRACE_LINE(73);
FREE_RValue( &__ret1__ );
sWself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shoot); /* set ContextID to 1120 */
__Args__[0] = /* context id changed from 1119 to 1120*/(global_padindex);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg5_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shoot))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_button_check_pressed.val,&__pArgs__[0]);
PopContextStack(1);
;
}
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(81);
bool sc361 = false;
YYRValue* sself_shoot = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shoot); /* set ContextID to sself_shoot */
if (/* First usage */(*sself_shoot).asBool()){
YYRValue* sself_hold = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hold); /* set ContextID to sself_hold */
sc361 = (!((BOOL_RValue( /* First usage */(*sself_hold) ))));
 };
;
if(sc361) {

YY_STACKTRACE_LINE(81);

YY_STACKTRACE_LINE(85);
YYRValue* sself_bulletStreak = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletStreak); /* set ContextID to sself_bulletStreak */
if((/* First usage */(*sself_bulletStreak) > 1)) {

YY_STACKTRACE_LINE(85);

YY_STACKTRACE_LINE(86);
sWbuiltin_alarm_CD3FBBB8=2;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)2, &sWbuiltin_alarm_CD3FBBB8 );
;
;
}
else {

YY_STACKTRACE_LINE(88);

YY_STACKTRACE_LINE(89);
FREE_RValue( &__ret1__ );
YYRValue* sself_xout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xout); /* set ContextID to sself_xout */
YYRValue* sself_yout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yout); /* set ContextID to sself_yout */
__Args__[0] = /* First usage */(*sself_xout);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_yout);
__pArgs__[1] = &__Args__[1];
gml_Script_shootBullet(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(93);
FREE_RValue( &__ret1__ );
YYRValue* sself_xout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xout); /* set ContextID to sself_xout */
YYRValue* sself_yout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yout); /* set ContextID to sself_yout */
YYRValue* sself_damage = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_damage); /* set ContextID to sself_damage */
__Args__[0] = /* context id changed from 1125 to 1122*/(*sself_xout);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 1125 to 1122*/(*sself_yout);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */(*sself_damage) * 4);
__pArgs__[2] = &__Args__[2];
__Args__[3] = ((*sself_damage) * 4);
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((*sself_damage) * 8);
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg6_F0E1EC0F;
__pArgs__[5] = &__Args__[5];
gml_Script_fxDust(pSelf,pOther,__ret1__,6,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(95);
YYRValue* sWself_hold = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hold); /* set ContextID to 1122 */
(*sWself_hold)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(96);
YYRValue* sself_bulletFrequency = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletFrequency); /* set ContextID to sself_bulletFrequency */
sWbuiltin_alarm_E612E87B=/* First usage */(*sself_bulletFrequency);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)1, &sWbuiltin_alarm_E612E87B );
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

YY_STACKTRACE_LINE(105);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x0000001D);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(105);

YY_STACKTRACE_LINE(106);
bool sc362 = false;
YYRValue* sself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inuse); /* set ContextID to sself_inuse */
if (!((BOOL_RValue( /* context id changed from 1107 to 1127*/(*sself_inuse) )))){
YYRValue* sself_disabled = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_disabled); /* set ContextID to sself_disabled */
sc362 = (!((BOOL_RValue( /* First usage */(*sself_disabled) ))));
 };
;
if(sc362) {

YY_STACKTRACE_LINE(106);

YY_STACKTRACE_LINE(107);
YYRValue* sWself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_inuse); /* set ContextID to 1129 */
(*sWself_inuse)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(108);
YYRValue* sWself_disabled = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_disabled); /* set ContextID to 1129 */
(*sWself_disabled)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(109);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000009);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg4_F0E1EC0F;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(112);
FREE_RValue( &__ret1__ );
gml_Script_dropWeapon(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(113);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
oW0ECB8E193_weapon=/* First usage */sbuiltin_id;
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_weapon );
;

YY_STACKTRACE_LINE(114);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_object_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_object_index );
oW0ECB8E193_weapontype=/* First usage */sbuiltin_object_index;
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_weapontype, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_weapontype );
;
;
}
;
;
}
;
}
#endif
