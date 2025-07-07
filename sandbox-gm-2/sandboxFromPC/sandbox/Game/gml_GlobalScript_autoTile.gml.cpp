#include "pch.hpp"
extern YYVAR g_VAR_sprite_width;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Script_autoTile;
extern YYVAR g_Script_gml_GlobalScript_autoTile;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_autoTile( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_autoTile( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_autoTile", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_sprite_width;
YYRValue local_iw;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue local_w_left;
YYRValue local_w_right;
YYRValue local_w_up;
YYRValue local_w_down;
YYRValue local_w_upleft;
YYRValue local_w_downleft;
YYRValue local_w_upright;
YYRValue local_w_downright;
YYRValue global_builtin_room_width;
YYRValue global_builtin_room_height;
YYRValue local_tile;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
;

YY_STACKTRACE_LINE(8);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_width.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_width );
local_iw=/* First usage */sbuiltin_sprite_width;
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* First usage */sbuiltin_x - /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_left=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_right=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_up=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_down=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x - /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_upleft=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x - /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_downleft=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_upright=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_iw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* local */local_iw);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_w_downright=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(18);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
if(((/* volatile */sbuiltin_x - /* local */local_iw) < 0)) {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(18);
local_w_left=1;
;

local_w_upleft=1;
;

local_w_downleft=1;
;
;
}
;

YY_STACKTRACE_LINE(19);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
if(((/* volatile */sbuiltin_x + /* local */local_iw) > /* First usage */global_builtin_room_width)) {

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(19);
local_w_right=1;
;

local_w_upright=1;
;

local_w_downright=1;
;
;
}
;

YY_STACKTRACE_LINE(20);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
if(((/* volatile */sbuiltin_y - /* local */local_iw) < 0)) {

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(20);
local_w_up=1;
;

local_w_upright=1;
;

local_w_upleft=1;
;
;
}
;

YY_STACKTRACE_LINE(21);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
if(((/* volatile */sbuiltin_y + /* local */local_iw) > /* First usage */global_builtin_room_height)) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(21);
local_w_down=1;
;

local_w_downright=1;
;

local_w_downleft=1;
;
;
}
;

YY_STACKTRACE_LINE(23);
local_tile=44;
;

YY_STACKTRACE_LINE(24);
if(BOOL_RValue( /* local */local_w_up )) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
local_tile=0;
;

YY_STACKTRACE_LINE(27);
if(BOOL_RValue( /* local */local_w_right )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
local_tile=4;
;

YY_STACKTRACE_LINE(30);
if(BOOL_RValue( /* local */local_w_down )) {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
local_tile=12;
;

YY_STACKTRACE_LINE(33);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(34);

YY_STACKTRACE_LINE(35);
local_tile=28;
;

YY_STACKTRACE_LINE(36);
if(BOOL_RValue( /* local */local_w_upright )) {

YY_STACKTRACE_LINE(37);

YY_STACKTRACE_LINE(38);
local_tile=29;
;

YY_STACKTRACE_LINE(39);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(40);

YY_STACKTRACE_LINE(41);
local_tile=33;
;

YY_STACKTRACE_LINE(42);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
local_tile=39;
;

YY_STACKTRACE_LINE(45);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(45);
local_tile=43;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(47);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(47);
local_tile=40;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(49);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
local_tile=37;
;

YY_STACKTRACE_LINE(52);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(52);
local_tile=41;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(54);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(54);
local_tile=36;
;
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(56);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(58);
local_tile=30;
;

YY_STACKTRACE_LINE(59);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(61);
local_tile=34;
;

YY_STACKTRACE_LINE(62);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(62);
local_tile=42;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(64);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(64);
local_tile=38;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(66);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(67);

YY_STACKTRACE_LINE(68);
local_tile=31;
;

YY_STACKTRACE_LINE(69);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(69);
local_tile=35;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(71);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(71);
local_tile=32;
;
}
;
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(73);
if(BOOL_RValue( /* local */local_w_upright )) {

YY_STACKTRACE_LINE(74);

YY_STACKTRACE_LINE(75);
local_tile=16;
;

YY_STACKTRACE_LINE(76);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(76);
local_tile=18;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(78);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(78);
local_tile=17;
;
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(80);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(81);

YY_STACKTRACE_LINE(82);
local_tile=15;
;

YY_STACKTRACE_LINE(83);
if(BOOL_RValue( /* local */local_w_upright )) {

YY_STACKTRACE_LINE(84);

YY_STACKTRACE_LINE(85);
local_tile=25;
;

YY_STACKTRACE_LINE(86);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(86);
local_tile=27;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(88);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(88);
local_tile=26;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(90);
if(BOOL_RValue( /* local */local_w_upright )) {

YY_STACKTRACE_LINE(90);
local_tile=8;
;
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(92);
if(BOOL_RValue( /* local */local_w_down )) {

YY_STACKTRACE_LINE(93);

YY_STACKTRACE_LINE(94);
local_tile=45;
;

YY_STACKTRACE_LINE(95);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(96);

YY_STACKTRACE_LINE(97);
local_tile=14;
;

YY_STACKTRACE_LINE(98);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(99);

YY_STACKTRACE_LINE(100);
local_tile=22;
;

YY_STACKTRACE_LINE(101);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(101);
local_tile=24;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(103);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(103);
local_tile=23;
;
}
;
}
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(106);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(107);

YY_STACKTRACE_LINE(108);
local_tile=7;
;

YY_STACKTRACE_LINE(109);
if(BOOL_RValue( /* local */local_w_upleft )) {

YY_STACKTRACE_LINE(109);
local_tile=11;
;
}
;
;
}
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(112);
if(BOOL_RValue( /* local */local_w_right )) {

YY_STACKTRACE_LINE(113);

YY_STACKTRACE_LINE(114);
local_tile=1;
;

YY_STACKTRACE_LINE(115);
if(BOOL_RValue( /* local */local_w_down )) {

YY_STACKTRACE_LINE(116);

YY_STACKTRACE_LINE(117);
local_tile=5;
;

YY_STACKTRACE_LINE(118);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(119);

YY_STACKTRACE_LINE(120);
local_tile=13;
;

YY_STACKTRACE_LINE(121);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(122);

YY_STACKTRACE_LINE(123);
local_tile=19;
;

YY_STACKTRACE_LINE(124);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(124);
local_tile=21;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(126);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(126);
local_tile=20;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(128);
if(BOOL_RValue( /* local */local_w_downright )) {

YY_STACKTRACE_LINE(128);
local_tile=9;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(130);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(131);

YY_STACKTRACE_LINE(132);
local_tile=46;
;
;
}
;
}
;
;
}
else {

YY_STACKTRACE_LINE(135);
if(BOOL_RValue( /* local */local_w_down )) {

YY_STACKTRACE_LINE(136);

YY_STACKTRACE_LINE(137);
local_tile=2;
;

YY_STACKTRACE_LINE(138);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(139);

YY_STACKTRACE_LINE(140);
local_tile=6;
;

YY_STACKTRACE_LINE(141);
if(BOOL_RValue( /* local */local_w_downleft )) {

YY_STACKTRACE_LINE(141);
local_tile=10;
;
}
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(144);
if(BOOL_RValue( /* local */local_w_left )) {

YY_STACKTRACE_LINE(145);

YY_STACKTRACE_LINE(146);
local_tile=3;
;
;
}
;
}
;
}
;
}
;

YY_STACKTRACE_LINE(149);
_result = /* local */local_tile;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_autoTile( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_autoTile( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_autoTile", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself_autoTile_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_autoTile); /* set ContextID to 15 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_autoTile_4ABE50B2)) = (YYRValue(gml_Script_autoTile, pSelf)), PopContextStack();
;
return _result;
}
#endif
