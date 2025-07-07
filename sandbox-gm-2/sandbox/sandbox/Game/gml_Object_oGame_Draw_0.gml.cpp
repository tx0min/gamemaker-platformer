#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_drawTextOutline( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_curre;
extern YYVAR self_m;
extern YYVAR self_we;
extern YYVAR self_;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_room;
extern YYVAR g_Script_gml_Object_oGame_Draw_0;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_sprite_get_width;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_string_hash_to_newline;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_room_get_name;
#ifndef __YYNODEFS
const char g_pString310_2E19733F_s[] = {
0x48, 0x50, 0x00,                                                                                    // HP.
};
const YYRValue g_pString310_2E19733F(g_pString310_2E19733F_s, true);
const char g_pString313_2E19733F_s[] = {
0x57, 0x65, 0x61, 0x70, 0x6f, 0x6e, 0x00,                                                            // Weapon.
};
const YYRValue g_pString313_2E19733F(g_pString313_2E19733F_s, true);
const char g_pString314_2E19733F_s[] = {
0x52, 0x6f, 0x6f, 0x6d, 0x20, 0x5b, 0x5a, 0x2f, 0x58, 0x5d, 0x3a, 0x20, 0x00,                        // Room [Z/X]: .
};
const YYRValue g_pString314_2E19733F(g_pString314_2E19733F_s, true);
const char g_pString315_2E19733F_s[] = {
0x20, 0x2f, 0x20, 0x43, 0x4f, 0x4e, 0x54, 0x52, 0x4f, 0x4c, 0x20, 0x5b, 0x43, 0x5d, 0x3a, 0x00,      //  / CONTROL [C]:.
     // 
};
const YYRValue g_pString315_2E19733F(g_pString315_2E19733F_s, true);
const char g_pString316_2E19733F_s[] = {
0x20, 0x2f, 0x20, 0x52, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x20, 0x5b, 0x52, 0x5d, 0x20, 0x2f,      //  / Restart [R] /
0x20, 0x44, 0x45, 0x42, 0x55, 0x47, 0x20, 0x5b, 0x47, 0x5d, 0x00,                                    //  DEBUG [G].
};
const YYRValue g_pString316_2E19733F(g_pString316_2E19733F_s, true);
const char g_pString317_2E19733F_s[] = {
0x47, 0x41, 0x4d, 0x45, 0x20, 0x4f, 0x56, 0x45, 0x52, 0x00,                                          // GAME OVER.
};
const YYRValue g_pString317_2E19733F(g_pString317_2E19733F_s, true);
const char g_pString318_2E19733F_s[] = {
0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x52, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x73, 0x74, 0x61,      // Press R to resta
0x72, 0x74, 0x00,                                                                                    // rt.
};
const YYRValue g_pString318_2E19733F(g_pString318_2E19733F_s, true);
DValue gs_constArg1_2E19733F = { 0, 0, VALUE_REAL };
DValue gs_constArg5_2E19733F = { 1, 0, VALUE_REAL };
DValue gs_constArg6_2E19733F = { 16777215, 0, VALUE_REAL };
DLValue gs_constLongArg0_2E19733F = { 1LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_2E19733F = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg3_2E19733F = { 2LL, 0, VALUE_INT64 };
DLValue gs_constLongArg4_2E19733F = { 3LL, 0, VALUE_INT64 };
#else
extern const char g_pString310_2E19733F_s[];
extern const YYRValue g_pString310_2E19733F;
extern const char g_pString313_2E19733F_s[];
extern const YYRValue g_pString313_2E19733F;
extern const char g_pString314_2E19733F_s[];
extern const YYRValue g_pString314_2E19733F;
extern const char g_pString315_2E19733F_s[];
extern const YYRValue g_pString315_2E19733F;
extern const char g_pString316_2E19733F_s[];
extern const YYRValue g_pString316_2E19733F;
extern const char g_pString317_2E19733F_s[];
extern const YYRValue g_pString317_2E19733F;
extern const char g_pString318_2E19733F_s[];
extern const YYRValue g_pString318_2E19733F;
extern DValue gs_constArg1_2E19733F;
extern DValue gs_constArg5_2E19733F;
extern DValue gs_constArg6_2E19733F;
extern DLValue gs_constLongArg0_2E19733F;
extern DLValue gs_constLongArg2_2E19733F;
extern DLValue gs_constLongArg3_2E19733F;
extern DLValue gs_constLongArg4_2E19733F;
#endif // __YYNODEFS

void gml_Object_oGame_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oGame_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oGame_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue local_sprw;
YYRValue o0ECB8E193_currenthp;
YYRValue local_vida;
YYRValue local_i;
YYRValue o0ECB8E193_maxhp;
YYRValue local_color;
YYRValue local_alpha;
YYRValue o0ECB8E193_weapon;
YYRValue o_weapon0A8E9C8E3_name;
YYRValue o_weapon0A8E9C8E3_sprite_index;
YYRValue & global_debug = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debug);
YYRValue global_builtin_room;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(2);
YYGML_draw_set_halign((int)0);
;

YY_STACKTRACE_LINE(3);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
YYRValue* sWself_top = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_top); /* set ContextID to 99 */
__Args__[0] = (YYRValue*)&gs_constLongArg0_2E19733F;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_top))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
YYRValue* sWself_left = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_left); /* set ContextID to 99 */
__Args__[0] = (YYRValue*)&gs_constLongArg2_2E19733F;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_left))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sWself_width = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_width); /* set ContextID to 99 */
__Args__[0] = (YYRValue*)&gs_constLongArg3_2E19733F;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_width))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
YYRValue* sWself_height = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_height); /* set ContextID to 99 */
__Args__[0] = (YYRValue*)&gs_constLongArg4_2E19733F;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_height))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(12);
bool sc309 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
__Args__[1] = YYASSET_REF(0x0000000E);
__pArgs__[1] = &__Args__[1];
sc309 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_instance_exists.val,&__pArgs__[1]));
 };
;
if(sc309) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret3__ );
__Args__[2] = YYASSET_REF(0x01000032);
__pArgs__[2] = &__Args__[2];
local_sprw=YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_sprite_get_width.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
YYRValue* sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to sself_left */
YYRValue* sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to sself_top */
__Args__[0] = (/* First usage */(*sself_left) + /* local */local_sprw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */(*sself_top) + 10);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_2E19733F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = g_pString310_2E19733F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg6_2E19733F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x06000000);
__pArgs__[6] = &__Args__[6];
gml_Script_drawTextOutline(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(18);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_currenthp );
local_vida=/* First usage */o0ECB8E193_currenthp;
;

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(22);
local_i=0;
;
bool ___f311___ = true;
while( true ) {
if (!___f311___) {

YY_STACKTRACE_LINE(22);
++/* local */local_i;
;
}
___f311___ = false;
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_maxhp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_maxhp );
bool ___b312___ = ((/* local */local_i < /* First usage */o0ECB8E193_maxhp));
if (!___b312___) break;
{

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(23);
local_color=255;
;

YY_STACKTRACE_LINE(24);
local_alpha=1;
;

YY_STACKTRACE_LINE(25);
if((/* local */local_i >= /* local */local_vida)) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
local_color=16777215;
;

YY_STACKTRACE_LINE(27);
local_alpha=0.5;
;
;
}
;

YY_STACKTRACE_LINE(29);
sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to 1049 */
sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to 1049 */
YYGML_draw_sprite_ext(pSelf,(int)YYASSET_REF(0x01000032).asReal(),(float)0,(float)(((/* context id changed from 1044 to 1049*/(*sself_left) + 80) + 2) + (/* local */local_sprw * /* local */local_i)).asReal(),(float)((/* context id changed from 1044 to 1049*/(*sself_top) + /* local */local_sprw) + 2).asReal(),(float)1,(float)1,(float)0,(int)(int64)/* local */local_color,(float)(float)(/* local */local_alpha.asReal()));
;
;
}
}
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* context id changed from 1049 to 1044*/(*sself_left) + /* local */local_sprw);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 1049 to 1044*/(*sself_top) + 50);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_2E19733F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = g_pString313_2E19733F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg6_2E19733F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x06000000);
__pArgs__[6] = &__Args__[6];
gml_Script_drawTextOutline(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(35);
sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to 1051 */
sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to 1051 */
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
if((/* First usage */o0ECB8E193_weapon != -4)) {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to 1052 */
sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to 1052 */
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
YYGML_Variable_GetValue( /* context id changed from 1044 to 1053*/o0ECB8E193_weapon, kVARID_self_name, (int)ARRAY_INDEX_NO_INDEX, &o_weapon0A8E9C8E3_name );
__Args__[0] = (/* context id changed from 1051 to 1052*/(*sself_left) + 150);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* context id changed from 1051 to 1052*/(*sself_top) + 75);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_2E19733F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = /* First usage */o_weapon0A8E9C8E3_name;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg6_2E19733F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x06000002);
__pArgs__[6] = &__Args__[6];
gml_Script_drawTextOutline(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(37);
sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to 1052 */
sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to 1052 */
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
YYGML_ErrCheck_Variable_GetValue( /* context id changed from 1053 to 1055*/o0ECB8E193_weapon, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &o_weapon0A8E9C8E3_sprite_index, pSelf, pOther );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)(/* First usage */o_weapon0A8E9C8E3_sprite_index.asReal()),(float)0,(float)((*sself_left) + 160).asReal(),(float)((*sself_top) + 60).asReal(),(float)0.6,(float)0.6,(float)0,(int)(int64)16777215,(float)1);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(48);
YYGML_draw_set_font((int)YYASSET_REF(0x06000002).asReal());
;

YY_STACKTRACE_LINE(49);
YYGML_draw_set_halign((int)2);
;

YY_STACKTRACE_LINE(50);
YYGML_draw_set_valign((int)0);
;

YY_STACKTRACE_LINE(51);
YYGML_draw_set_colour((int)(int64)0);
;

YY_STACKTRACE_LINE(53);
if(BOOL_RValue( /* First usage */(global_debug) )) {

YY_STACKTRACE_LINE(54);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
FREE_RValue( &__ret5__ );
YYRValue* sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to sself_left */
YYRValue* sself_width = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_width); /* set ContextID to sself_width */
YYRValue* sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to sself_top */
YYRValue* sself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_controltype); /* set ContextID to sself_controltype */
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
__Args__[0] = /* First usage */global_builtin_room;
__pArgs__[0] = &__Args__[0];
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret5__,1,g_FUNC_room_get_name.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((((YYRValue(g_pString314_2E19733F) + YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,1,g_FUNC_string.val,&__pArgs__[1])) + YYRValue(g_pString315_2E19733F)) + /* First usage */(*sself_controltype)) + YYRValue(g_pString316_2E19733F));
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_string.val,&__pArgs__[2]);
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((/* context id changed from 1052 to 1057*/(*sself_left) + /* First usage */(*sself_width)) - 16);
__pArgs__[4] = &__Args__[4];
__Args__[5] = (/* context id changed from 1052 to 1057*/(*sself_top) + 16);
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string_hash_to_newline.val,&__pArgs__[3]);
__pArgs__[6] = &__Args__[6];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[4]);
;
}
;

YY_STACKTRACE_LINE(57);
YYRValue* sself_gameover = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_gameover); /* set ContextID to sself_gameover */
if(BOOL_RValue( /* First usage */(*sself_gameover) )) {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(58);
YYGML_draw_set_halign((int)1);
;

YY_STACKTRACE_LINE(59);
YYGML_draw_set_valign((int)1);
;

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
YYRValue* sself_left = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_left); /* set ContextID to sself_left */
YYRValue* sself_width = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_width); /* set ContextID to sself_width */
YYRValue* sself_top = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_top); /* set ContextID to sself_top */
YYRValue* sself_height = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_height); /* set ContextID to sself_height */
__Args__[0] = (/* context id changed from 1057 to 1058*/(*sself_left) + (/* context id changed from 1057 to 1058*/(*sself_width) / (double)2));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* context id changed from 1057 to 1058*/(*sself_top) + (/* First usage */(*sself_height) / (double)2)) - 20);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_2E19733F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = g_pString317_2E19733F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg6_2E19733F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x06000001);
__pArgs__[6] = &__Args__[6];
gml_Script_drawTextOutline(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(61);
FREE_RValue( &__ret1__ );
__Args__[0] = ((*sself_left) + ((*sself_width) / (double)2));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (((*sself_top) + ((*sself_height) / (double)2)) + 20);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg5_2E19733F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = g_pString318_2E19733F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_2E19733F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg6_2E19733F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x06000000);
__pArgs__[6] = &__Args__[6];
gml_Script_drawTextOutline(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;
;
}
;
}
#endif
