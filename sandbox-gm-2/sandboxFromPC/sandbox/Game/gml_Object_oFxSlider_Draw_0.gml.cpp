#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oFxSlider_Draw_0;
extern YYVAR g_FUNC_draw_rectangle_colour;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_draw_sprite_pos;
#ifndef __YYNODEFS
const char g_pString273_A9DBE8C0_s[] = {
0x63, 0x69, 0x72, 0x63, 0x6c, 0x65, 0x00,                                                            // circle.
};
const YYRValue g_pString273_A9DBE8C0(g_pString273_A9DBE8C0_s, true);
const char g_pString274_A9DBE8C0_s[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
const YYRValue g_pString274_A9DBE8C0(g_pString274_A9DBE8C0_s, true);
const char g_pString275_A9DBE8C0_s[] = {
0x74, 0x6f, 0x70, 0x00,                                                                              // top.
};
const YYRValue g_pString275_A9DBE8C0(g_pString275_A9DBE8C0_s, true);
const char g_pString276_A9DBE8C0_s[] = {
0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x00,                                                            // bottom.
};
const YYRValue g_pString276_A9DBE8C0(g_pString276_A9DBE8C0_s, true);
const char g_pString277_A9DBE8C0_s[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
const YYRValue g_pString277_A9DBE8C0(g_pString277_A9DBE8C0_s, true);
DValue gs_constArg1_A9DBE8C0 = { 0, 0, VALUE_REAL };
DValue gs_constArg5_A9DBE8C0 = { 1, 0, VALUE_REAL };
DLValue gs_constLongArg0_A9DBE8C0 = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_A9DBE8C0 = { 1LL, 0, VALUE_INT64 };
DLValue gs_constLongArg3_A9DBE8C0 = { 2LL, 0, VALUE_INT64 };
DLValue gs_constLongArg4_A9DBE8C0 = { 3LL, 0, VALUE_INT64 };
#else
extern const char g_pString273_A9DBE8C0_s[];
extern const YYRValue g_pString273_A9DBE8C0;
extern const char g_pString274_A9DBE8C0_s[];
extern const YYRValue g_pString274_A9DBE8C0;
extern const char g_pString275_A9DBE8C0_s[];
extern const YYRValue g_pString275_A9DBE8C0;
extern const char g_pString276_A9DBE8C0_s[];
extern const YYRValue g_pString276_A9DBE8C0;
extern const char g_pString277_A9DBE8C0_s[];
extern const YYRValue g_pString277_A9DBE8C0;
extern DValue gs_constArg1_A9DBE8C0;
extern DValue gs_constArg5_A9DBE8C0;
extern DLValue gs_constLongArg0_A9DBE8C0;
extern DLValue gs_constLongArg2_A9DBE8C0;
extern DLValue gs_constLongArg3_A9DBE8C0;
extern DLValue gs_constLongArg4_A9DBE8C0;
#endif // __YYNODEFS

void gml_Object_oFxSlider_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxSlider_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxSlider_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[13];
YYRValue __Args__[13];
YYRValue local_xini;
YYRValue local_yini;
YYRValue sbuiltin_x;
YYRValue local_xx;
YYRValue sbuiltin_y;
YYRValue local_yy;
YYRValue o027E43236_x;
YYRValue o027E43236_y;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;


YY_STACKTRACE_LINE(1);
YYRValue* sself_slidedir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidedir); /* set ContextID to sself_slidedir */
if((/* First usage */(*sself_slidedir) != YYRValue(g_pString273_A9DBE8C0))) {

YY_STACKTRACE_LINE(1);

YY_STACKTRACE_LINE(2);
sself_slidedir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidedir); /* set ContextID to 951 */
if((/* context id changed from 87 to 951*/(*sself_slidedir) == YYRValue(g_pString274_A9DBE8C0))) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
YYRValue* sWself_xdir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xdir); /* set ContextID to 952 */
(*sWself_xdir)=-1;
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_ydir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ydir); /* set ContextID to 952 */
(*sWself_ydir)=0;
;
;
}
else {

YY_STACKTRACE_LINE(5);
sself_slidedir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidedir); /* set ContextID to 953 */
if((/* context id changed from 951 to 953*/(*sself_slidedir) == YYRValue(g_pString275_A9DBE8C0))) {

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
YYRValue* sWself_xdir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xdir); /* set ContextID to 954 */
(*sWself_xdir)=0;
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_ydir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ydir); /* set ContextID to 954 */
(*sWself_ydir)=-1;
;
;
}
else {

YY_STACKTRACE_LINE(8);
sself_slidedir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidedir); /* set ContextID to 955 */
if((/* context id changed from 953 to 955*/(*sself_slidedir) == YYRValue(g_pString276_A9DBE8C0))) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
YYRValue* sWself_xdir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xdir); /* set ContextID to 956 */
(*sWself_xdir)=0;
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_ydir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ydir); /* set ContextID to 956 */
(*sWself_ydir)=1;
;
;
}
else {

YY_STACKTRACE_LINE(11);
sself_slidedir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidedir); /* set ContextID to 957 */
if((/* context id changed from 955 to 957*/(*sself_slidedir) == YYRValue(g_pString277_A9DBE8C0))) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(13);
YYRValue* sWself_xdir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xdir); /* set ContextID to 958 */
(*sWself_xdir)=1;
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_ydir = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ydir); /* set ContextID to 958 */
(*sWself_ydir)=0;
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

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
YYRValue* sself_xinc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xinc); /* set ContextID to sself_xinc */
__Args__[0] = (YYRValue*)&gs_constLongArg0_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
local_xini=(gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) + /* First usage */(*sself_xinc));
;

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
YYRValue* sself_yinc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yinc); /* set ContextID to sself_yinc */
__Args__[0] = (YYRValue*)&gs_constLongArg2_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
local_yini=(gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) + /* First usage */(*sself_yinc));
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
YYRValue* sself_slidecolor = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidecolor); /* set ContextID to sself_slidecolor */
__Args__[0] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[3] = &__Args__[3];
__pArgs__[4] = &/* local */local_xini;
__pArgs__[5] = &/* local */local_yini;
__Args__[6] = (/* local */local_xini + gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[0]));
__pArgs__[6] = &__Args__[6];
__Args__[7] = (/* local */local_yini + gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[2]));
__pArgs__[7] = &__Args__[7];
__Args__[8] = /* First usage */(*sself_slidecolor);
__pArgs__[8] = &__Args__[8];
__Args__[9] = (*sself_slidecolor);
__pArgs__[9] = &__Args__[9];
__Args__[10] = (*sself_slidecolor);
__pArgs__[10] = &__Args__[10];
__Args__[11] = (*sself_slidecolor);
__pArgs__[11] = &__Args__[11];
__Args__[12] = (YYRValue*)&gs_constFalse;
__pArgs__[12] = &__Args__[12];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,9,g_FUNC_draw_rectangle_colour.val,&__pArgs__[4]);
;

YY_STACKTRACE_LINE(23);
YYRValue* sself_xdir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xdir); /* set ContextID to sself_xdir */
YYRValue* sself_slidesp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidesp); /* set ContextID to sself_slidesp */
YYRValue* sWself_xinc = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xinc); /* set ContextID to 951 */
/* First usage */(*sWself_xinc)+=(/* First usage */(*sself_xdir) * /* First usage */(*sself_slidesp));
;

YY_STACKTRACE_LINE(24);
YYRValue* sself_ydir = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ydir); /* set ContextID to sself_ydir */
YYRValue* sWself_yinc = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yinc); /* set ContextID to 951 */
/* First usage */(*sWself_yinc)+=(/* First usage */(*sself_ydir) * (*sself_slidesp));
;

YY_STACKTRACE_LINE(26);
bool sc278 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (YYRValue*)&gs_constLongArg0_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[3] = &__Args__[3];
if ((/* local */local_xini <= (gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) - gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])))) { sc278=true; } else 
{
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
sself_slidesp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidesp); /* set ContextID to 959 */
__Args__[4] = (YYRValue*)&gs_constLongArg0_A9DBE8C0;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[7] = &__Args__[7];
sc278 = ((/* local */local_xini >= (gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[4]) + gml_Script___view_get(pSelf,pOther,__ret4__,2,&__pArgs__[6]))));
 };
;
if(sc278) {

YY_STACKTRACE_LINE(27);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;

YY_STACKTRACE_LINE(29);
bool sc279 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (YYRValue*)&gs_constLongArg2_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[3] = &__Args__[3];
if ((/* local */local_yini <= (gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) - gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])))) { sc279=true; } else 
{
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
__Args__[4] = (YYRValue*)&gs_constLongArg2_A9DBE8C0;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[7] = &__Args__[7];
sc279 = ((/* local */local_yini >= (gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[4]) + gml_Script___view_get(pSelf,pOther,__ret4__,2,&__pArgs__[6]))));
 };
;
if(sc279) {

YY_STACKTRACE_LINE(30);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
;
}
else {

YY_STACKTRACE_LINE(31);

YY_STACKTRACE_LINE(32);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
local_xx=/* First usage */sbuiltin_x;
;

YY_STACKTRACE_LINE(33);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_yy=/* First usage */sbuiltin_y;
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constLongArg0_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
local_xini=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constLongArg2_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
local_yini=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001E);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(37);

YY_STACKTRACE_LINE(38);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_x, pSelf, pOther );
local_xx=/* First usage */o027E43236_x;
;

YY_STACKTRACE_LINE(39);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001E), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o027E43236_y, pSelf, pOther );
local_yy=/* First usage */o027E43236_y;
;
;
}
;

YY_STACKTRACE_LINE(41);
YYRValue* sself_slidesp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_slidesp); /* set ContextID to sself_slidesp */
YYRValue* sWself_inc = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_inc); /* set ContextID to 963 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_inc))+=/* context id changed from 959 to 963*/(*sself_slidesp);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(42);
FREE_RValue( &__ret1__ );
YYRValue* sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to sself_inc */
__Args__[0] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
if((/* First usage */(*sself_inc) < gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]))) {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
YYGML_draw_set_colour((int)(int64)0);
;

YY_STACKTRACE_LINE(44);
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 967 */
if(((/* local */local_yy - /* context id changed from 963 to 967*/(*sself_inc)) > /* local */local_yini)) {

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret1__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 968 */
__Args__[0] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
YYGML_draw_rectangle((float)(float)(/* local */local_xini.asReal()),(float)(float)(/* local */local_yini.asReal()),(float)(/* local */local_xini + gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0])).asReal(),(float)(/* local */local_yy - /* context id changed from 967 to 968*/(*sself_inc)).asReal(),(bool)YYRValue(0!=0));
;
}
;

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 967 */
__Args__[0] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
if(((/* local */local_yy + /* context id changed from 968 to 967*/(*sself_inc)) < (/* local */local_yini + gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0])))) {

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 969 */
__Args__[2] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[5] = &__Args__[5];
YYGML_draw_rectangle((float)(float)(/* local */local_xini.asReal()),(float)(/* local */local_yy + /* context id changed from 967 to 969*/(*sself_inc)).asReal(),(float)(/* local */local_xini + gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])).asReal(),(float)(/* local */local_yini + gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[4])).asReal(),(bool)YYRValue(0!=0));
;
}
;

YY_STACKTRACE_LINE(46);
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 967 */
if(((/* local */local_xx - /* context id changed from 969 to 967*/(*sself_inc)) > /* local */local_xini)) {

YY_STACKTRACE_LINE(46);
FREE_RValue( &__ret1__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 970 */
__Args__[0] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
YYGML_draw_rectangle((float)(float)(/* local */local_xini.asReal()),(float)(float)(/* local */local_yini.asReal()),(float)(/* local */local_xx - /* context id changed from 967 to 970*/(*sself_inc)).asReal(),(float)(/* local */local_yini + gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0])).asReal(),(bool)YYRValue(0!=0));
;
}
;

YY_STACKTRACE_LINE(47);
FREE_RValue( &__ret1__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 967 */
__Args__[0] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
if(((/* local */local_xx + /* context id changed from 970 to 967*/(*sself_inc)) < (/* local */local_xini + gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0])))) {

YY_STACKTRACE_LINE(47);
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 971 */
__Args__[2] = (YYRValue*)&gs_constLongArg3_A9DBE8C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constLongArg4_A9DBE8C0;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[5] = &__Args__[5];
YYGML_draw_rectangle((float)(/* local */local_xx + /* context id changed from 967 to 971*/(*sself_inc)).asReal(),(float)(float)(/* local */local_yini.asReal()),(float)(/* local */local_xini + gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])).asReal(),(float)(/* local */local_yini + gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[4])).asReal(),(bool)YYRValue(0!=0));
;
}
;

YY_STACKTRACE_LINE(49);
FREE_RValue( &__ret1__ );
sself_inc = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inc); /* set ContextID to 967 */
__Args__[0] = YYASSET_REF(0x01000019);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_A9DBE8C0;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* local */local_xx - /* context id changed from 971 to 967*/(*sself_inc));
__pArgs__[2] = &__Args__[2];
__Args__[3] = (/* local */local_yy - (*sself_inc));
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* local */local_xx + (*sself_inc));
__pArgs__[4] = &__Args__[4];
__Args__[5] = (/* local */local_yy - (*sself_inc));
__pArgs__[5] = &__Args__[5];
__Args__[6] = (/* local */local_xx + (*sself_inc));
__pArgs__[6] = &__Args__[6];
__Args__[7] = (/* local */local_yy + (*sself_inc));
__pArgs__[7] = &__Args__[7];
__Args__[8] = (/* local */local_xx - (*sself_inc));
__pArgs__[8] = &__Args__[8];
__Args__[9] = (/* local */local_yy + (*sself_inc));
__pArgs__[9] = &__Args__[9];
__Args__[10] = (YYRValue*)&gs_constArg5_A9DBE8C0;
__pArgs__[10] = &__Args__[10];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,11,g_FUNC_draw_sprite_pos.val,&__pArgs__[0]);
;
;
}
;
;
}
;
}
#endif
