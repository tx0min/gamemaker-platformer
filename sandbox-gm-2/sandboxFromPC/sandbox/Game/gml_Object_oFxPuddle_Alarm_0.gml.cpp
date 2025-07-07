#include "pch.hpp"
extern YYVAR g_VAR_sprite_width;
extern YYVAR g_VAR_sprite_height;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oFxPuddle_Alarm_0;
extern YYVAR g_FUNC_ds_map_create;
extern YYVAR g_FUNC_ds_map_set;
extern YYVAR g_FUNC_ds_map_find_value;
extern YYVAR g_FUNC_sprite_get_width;
extern YYVAR g_FUNC_sprite_get_height;
#ifndef __YYNODEFS
const char g_pString247_A1FA4F49_s[] = {
0x78, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x00,                                                            // xscale.
};
const YYRValue g_pString247_A1FA4F49(g_pString247_A1FA4F49_s, true);
const char g_pString248_A1FA4F49_s[] = {
0x79, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x00,                                                            // yscale.
};
const YYRValue g_pString248_A1FA4F49(g_pString248_A1FA4F49_s, true);
const char g_pString249_A1FA4F49_s[] = {
0x72, 0x6f, 0x74, 0x00,                                                                              // rot.
};
const YYRValue g_pString249_A1FA4F49(g_pString249_A1FA4F49_s, true);
const char g_pString250_A1FA4F49_s[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
const YYRValue g_pString250_A1FA4F49(g_pString250_A1FA4F49_s, true);
const char g_pString251_A1FA4F49_s[] = {
0x78, 0x00,                                                                                          // x.
};
const YYRValue g_pString251_A1FA4F49(g_pString251_A1FA4F49_s, true);
const char g_pString252_A1FA4F49_s[] = {
0x79, 0x00,                                                                                          // y.
};
const YYRValue g_pString252_A1FA4F49(g_pString252_A1FA4F49_s, true);
const char g_pString253_A1FA4F49_s[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
const YYRValue g_pString253_A1FA4F49(g_pString253_A1FA4F49_s, true);
const char g_pString254_A1FA4F49_s[] = {
0x74, 0x6f, 0x70, 0x00,                                                                              // top.
};
const YYRValue g_pString254_A1FA4F49(g_pString254_A1FA4F49_s, true);
const char g_pString255_A1FA4F49_s[] = {
0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x00,                                                            // bottom.
};
const YYRValue g_pString255_A1FA4F49(g_pString255_A1FA4F49_s, true);
#else
extern const char g_pString247_A1FA4F49_s[];
extern const YYRValue g_pString247_A1FA4F49;
extern const char g_pString248_A1FA4F49_s[];
extern const YYRValue g_pString248_A1FA4F49;
extern const char g_pString249_A1FA4F49_s[];
extern const YYRValue g_pString249_A1FA4F49;
extern const char g_pString250_A1FA4F49_s[];
extern const YYRValue g_pString250_A1FA4F49;
extern const char g_pString251_A1FA4F49_s[];
extern const YYRValue g_pString251_A1FA4F49;
extern const char g_pString252_A1FA4F49_s[];
extern const YYRValue g_pString252_A1FA4F49;
extern const char g_pString253_A1FA4F49_s[];
extern const YYRValue g_pString253_A1FA4F49;
extern const char g_pString254_A1FA4F49_s[];
extern const YYRValue g_pString254_A1FA4F49;
extern const char g_pString255_A1FA4F49_s[];
extern const YYRValue g_pString255_A1FA4F49;
#endif // __YYNODEFS

void gml_Object_oFxPuddle_Alarm_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxPuddle_Alarm_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxPuddle_Alarm_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_i;
YYRValue local_dw;
YYRValue local_dh;
YYRValue sbuiltin_sprite_width;
YYRValue local_sw;
YYRValue sbuiltin_sprite_height;
YYRValue local_sh;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(4);
local_i=0;
;
bool ___f245___ = true;
while( true ) {
if (!___f245___) {

YY_STACKTRACE_LINE(4);
++/* local */local_i;
;
}
___f245___ = false;
YYRValue* sself_numdrops = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_numdrops); /* set ContextID to sself_numdrops */
bool ___b246___ = ((/* local */local_i < /* First usage */(*sself_numdrops)));
if (!___b246___) break;
{

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
YYRValue* sWself_drop = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drop); /* set ContextID to 924 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_drop))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_ds_map_create.val,NULL);
PopContextStack(1);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
YYRValue* sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to sself_drop */
__Args__[0] = /* First usage */(*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString247_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_random_range((double)0.7,(double)1.2);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString248_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_random_range((double)0.7,(double)1.2);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString249_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_random((double)360);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString247_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x0100001B);
__pArgs__[2] = &__Args__[2];
local_dw=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]) * YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_sprite_get_width.val,&__pArgs__[2]));
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString248_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x0100001B);
__pArgs__[2] = &__Args__[2];
local_dh=(YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]) * YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_sprite_get_height.val,&__pArgs__[2]));
;

YY_STACKTRACE_LINE(12);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_width.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_width );
local_sw=(/* First usage */sbuiltin_sprite_width - /* local */local_dw);
;

YY_STACKTRACE_LINE(13);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_height.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_height );
local_sh=(/* First usage */sbuiltin_sprite_height - /* local */local_dh);
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to sself_position */
if((/* First usage */(*sself_position) == YYRValue(g_pString250_A1FA4F49))) {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 925 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
__Args__[0] = /* context id changed from 924 to 925*/(*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString251_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */sbuiltin_x - YYGML_random((double)/* local */local_sw.asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 925 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString252_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* First usage */sbuiltin_y + YYGML_random_range((double)(YYRValue( -/* local */local_sh.asReal() ) / (double)2).asReal(),(double)(/* local */local_sh / (double)2).asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(18);
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 926 */
if((/* context id changed from 924 to 926*/(*sself_position) == YYRValue(g_pString253_A1FA4F49))) {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 927 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
__Args__[0] = /* context id changed from 925 to 927*/(*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString251_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_x + YYGML_random((double)/* local */local_sw.asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 927 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString252_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_y + YYGML_random_range((double)(YYRValue( -/* local */local_sh.asReal() ) / (double)2).asReal(),(double)(/* local */local_sh / (double)2).asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(21);
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 928 */
if((/* context id changed from 926 to 928*/(*sself_position) == YYRValue(g_pString254_A1FA4F49))) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 929 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
__Args__[0] = /* context id changed from 927 to 929*/(*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString251_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_x + YYGML_random_range((double)(YYRValue( -/* local */local_sw.asReal() ) / (double)2).asReal(),(double)(/* local */local_sw / (double)2).asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 929 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString252_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_y + YYGML_random((double)/* local */local_sh.asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(24);
sself_position = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_position); /* set ContextID to 930 */
if((/* context id changed from 928 to 930*/(*sself_position) == YYRValue(g_pString255_A1FA4F49))) {

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 931 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
__Args__[0] = /* context id changed from 929 to 931*/(*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString251_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_x + YYGML_random_range((double)(YYRValue( -/* local */local_sw.asReal() ) / (double)2).asReal(),(double)(/* local */local_sw / (double)2).asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
sself_drop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drop); /* set ContextID to 931 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (*sself_drop);
__pArgs__[0] = &__Args__[0];
__Args__[1] = g_pString252_A1FA4F49;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_y - YYGML_random((double)/* local */local_sh.asReal()));
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_ds_map_set.val,&__pArgs__[0]);
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

YY_STACKTRACE_LINE(29);
YYRValue* sWself_drops_260A6C49 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drops); /* set ContextID to 924 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_drops_260A6C49))((int)(/* local */local_i))=/* context id changed from 931 to 924*/(*sself_drop);
PopContextStack(2);
;
;
}
}
;
}
#endif
