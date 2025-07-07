#include "pch.hpp"
YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_sprite_yoffset;
extern YYVAR g_Script_gml_Object_oFxPuddle_Step_0;
extern YYVAR g_FUNC_position_meeting;
extern YYVAR g_FUNC_round;
#ifndef __YYNODEFS
const char g_pString257_D5F44C16_s[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
const YYRValue g_pString257_D5F44C16(g_pString257_D5F44C16_s, true);
const char g_pString259_D5F44C16_s[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
const YYRValue g_pString259_D5F44C16(g_pString259_D5F44C16_s, true);
DValue gs_constArg0_D5F44C16 = { 0.01, 0, VALUE_REAL };
DValue gs_constArg1_D5F44C16 = { 1, 0, VALUE_REAL };
#else
extern const char g_pString257_D5F44C16_s[];
extern const YYRValue g_pString257_D5F44C16;
extern const char g_pString259_D5F44C16_s[];
extern const YYRValue g_pString259_D5F44C16;
extern DValue gs_constArg0_D5F44C16;
extern DValue gs_constArg1_D5F44C16;
#endif // __YYNODEFS

void gml_Object_oFxPuddle_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxPuddle_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxPuddle_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[8];
YYRValue __Args__[8];
YYRValue sbuiltin_image_yscale;
YYRValue sWbuiltin_image_yscale;
YYRValue sbuiltin_image_xscale;
YYRValue sWbuiltin_image_xscale;
YYRValue local_met;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_sprite_yoffset;
YYRValue sWbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_finalyscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_finalyscale); /* set ContextID to sself_finalyscale */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
__Args__[0] = /* First usage */sbuiltin_image_yscale;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_finalyscale);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_D5F44C16;
__pArgs__[2] = &__Args__[2];
sWbuiltin_image_yscale=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
YYRValue* sself_finalxscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_finalxscale); /* set ContextID to sself_finalxscale */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
__Args__[0] = /* First usage */sbuiltin_image_xscale;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_finalxscale);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_D5F44C16;
__pArgs__[2] = &__Args__[2];
sWbuiltin_image_xscale=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_xscale );
;

YY_STACKTRACE_LINE(5);
bool sc258 = false;
YYRValue* sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to sself_position */
if ((/* First usage */(*sself_position) == YYRValue(g_pString257_D5F44C16))) { sc258=true; } else 
{
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 935 */
sc258 = ((/* context id changed from 84 to 935*/(*sself_position) == YYRValue(g_pString259_D5F44C16)));
 };
;
if(sc258) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
local_met=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(8);
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 936 */
if((/* context id changed from 935 to 936*/(*sself_position) == YYRValue(g_pString257_D5F44C16))) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
bool sc260 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_yoffset.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_yoffset );
__Args__[0] = /* First usage */sbuiltin_sprite_yoffset;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_x - 1);
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((/* First usage */sbuiltin_y + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_round.val,&__pArgs__[0])) + 1);
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYASSET_REF(0x00000019);
__pArgs__[3] = &__Args__[3];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[1])) { sc260=true; } else 
{
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_yoffset.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_yoffset );
__Args__[4] = /* volatile */sbuiltin_sprite_yoffset;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (/* volatile */sbuiltin_x + 1);
__pArgs__[5] = &__Args__[5];
__Args__[6] = ((/* volatile */sbuiltin_y + YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,1,g_FUNC_round.val,&__pArgs__[4])) + 1);
__pArgs__[6] = &__Args__[6];
__Args__[7] = YYASSET_REF(0x00000019);
__pArgs__[7] = &__Args__[7];
sc260 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_position_meeting.val,&__pArgs__[5]) ))));
 };
;
local_met=sc260;
;
;
}
else {

YY_STACKTRACE_LINE(10);
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 939 */
if((/* context id changed from 936 to 939*/(*sself_position) == YYRValue(g_pString259_D5F44C16))) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
bool sc261 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_yoffset.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_yoffset );
__Args__[0] = /* volatile */sbuiltin_sprite_yoffset;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_x + 1);
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((/* volatile */sbuiltin_y + YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_round.val,&__pArgs__[0])) + 1);
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYASSET_REF(0x00000019);
__pArgs__[3] = &__Args__[3];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[1])) { sc261=true; } else 
{
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_yoffset.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_yoffset );
__Args__[4] = /* volatile */sbuiltin_sprite_yoffset;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (/* volatile */sbuiltin_x - 1);
__pArgs__[5] = &__Args__[5];
__Args__[6] = ((/* volatile */sbuiltin_y + YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,1,g_FUNC_round.val,&__pArgs__[4])) + 1);
__pArgs__[6] = &__Args__[6];
__Args__[7] = YYASSET_REF(0x00000019);
__pArgs__[7] = &__Args__[7];
sc261 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_position_meeting.val,&__pArgs__[5]) ))));
 };
;
local_met=sc261;
;
;
}
;
}
;

YY_STACKTRACE_LINE(14);
if(!((BOOL_RValue( /* local */local_met )))) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
YYRValue* sself_yend = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yend); /* set ContextID to sself_yend */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_y;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_yend);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_D5F44C16;
__pArgs__[2] = &__Args__[2];
sWbuiltin_y=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
;
}
;
;
}
;
}
#endif
