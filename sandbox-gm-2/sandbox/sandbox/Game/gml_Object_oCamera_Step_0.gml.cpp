#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script___view_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Object_oCamera_Step_0;
extern YYVAR g_FUNC_instance_exists;
#ifndef __YYNODEFS
DValue gs_constArg1_850F60EB = { 0, 0, VALUE_REAL };
DLValue gs_constLongArg0_850F60EB = { 2LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_850F60EB = { 3LL, 0, VALUE_INT64 };
DLValue gs_constLongArg3_850F60EB = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg4_850F60EB = { 1LL, 0, VALUE_INT64 };
#else
extern DValue gs_constArg1_850F60EB;
extern DLValue gs_constLongArg0_850F60EB;
extern DLValue gs_constLongArg2_850F60EB;
extern DLValue gs_constLongArg3_850F60EB;
extern DLValue gs_constLongArg4_850F60EB;
#endif // __YYNODEFS

void gml_Object_oCamera_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oCamera_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oCamera_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue o09F585553_x;
YYRValue sWbuiltin_x;
YYRValue o09F585553_y;
YYRValue sWbuiltin_y;
YYRValue global_builtin_room_width;
YYRValue global_builtin_room_height;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(2);
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(6);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_x, pSelf, pOther );
sWbuiltin_x=/* First usage */o09F585553_x;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(7);
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_y, pSelf, pOther );
sWbuiltin_y=/* First usage */o09F585553_y;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
YYRValue* sWself_w = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_w); /* set ContextID to 905 */
__Args__[0] = (YYRValue*)&gs_constLongArg0_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_w))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_rw = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_rw); /* set ContextID to 905 */
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_rw))=/* First usage */global_builtin_room_width;
PopContextStack(1);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYRValue* sWself_h = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_h); /* set ContextID to 905 */
__Args__[0] = (YYRValue*)&gs_constLongArg2_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_h))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_rh = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_rh); /* set ContextID to 905 */
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_rh))=/* First usage */global_builtin_room_height;
PopContextStack(1);
;

YY_STACKTRACE_LINE(14);
YYRValue* sself_w = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_w); /* set ContextID to sself_w */
YYRValue* sself_hborder = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hborder); /* set ContextID to sself_hborder */
YYRValue* sWself_hboxl = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hboxl); /* set ContextID to 905 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_hboxl))=(/* First usage */(*sself_w) * /* First usage */(*sself_hborder));
PopContextStack(1);
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_hboxl = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hboxl); /* set ContextID to sself_hboxl */
YYRValue* sWself_hboxr = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hboxr); /* set ContextID to 905 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_hboxr))=((*sself_w) - /* First usage */(*sself_hboxl));
PopContextStack(1);
;

YY_STACKTRACE_LINE(16);
YYRValue* sself_h = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_h); /* set ContextID to sself_h */
YYRValue* sself_vborder = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vborder); /* set ContextID to sself_vborder */
YYRValue* sWself_vboxt = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vboxt); /* set ContextID to 905 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vboxt))=(/* First usage */(*sself_h) * /* First usage */(*sself_vborder));
PopContextStack(1);
;

YY_STACKTRACE_LINE(17);
YYRValue* sself_vboxt = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vboxt); /* set ContextID to sself_vboxt */
YYRValue* sWself_vboxb = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vboxb); /* set ContextID to 905 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vboxb))=((*sself_h) - /* First usage */(*sself_vboxt));
PopContextStack(1);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYRValue* sself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shakepower); /* set ContextID to sself_shakepower */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
__Args__[0] = /* First usage */(*sself_shakepower);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_x - ((*sself_w) / (double)2));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg3_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = YYGML_max(__ret2__,2,&__pArgs__[0]);
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret1__,3,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
YYRValue* sself_rw = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rw); /* set ContextID to sself_rw */
__Args__[0] = (YYRValue*)&gs_constLongArg3_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
if((gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) > ((/* First usage */(*sself_rw) - (*sself_w)) - (*sself_shakepower)))) {

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret2__ );
sself_w = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_w); /* set ContextID to 908 */
sself_h = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_h); /* set ContextID to 908 */
sself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shakepower); /* set ContextID to 908 */
sself_rw = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rw); /* set ContextID to 908 */
__Args__[2] = (YYRValue*)&gs_constLongArg3_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((/* context id changed from 905 to 908*/(*sself_rw) - /* context id changed from 905 to 908*/(*sself_w)) - /* context id changed from 905 to 908*/(*sself_shakepower));
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret2__,3,&__pArgs__[2]);
;
}
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* context id changed from 908 to 905*/(*sself_shakepower);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y - (/* context id changed from 908 to 905*/(*sself_h) / (double)2));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg4_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = YYGML_max(__ret2__,2,&__pArgs__[0]);
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret1__,3,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
YYRValue* sself_rh = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rh); /* set ContextID to sself_rh */
__Args__[0] = (YYRValue*)&gs_constLongArg4_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
if((gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) > ((/* First usage */(*sself_rh) - (*sself_h)) - (*sself_shakepower)))) {

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret2__ );
sself_h = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_h); /* set ContextID to 909 */
sself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shakepower); /* set ContextID to 909 */
sself_rh = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rh); /* set ContextID to 909 */
__Args__[2] = (YYRValue*)&gs_constLongArg4_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = ((/* context id changed from 905 to 909*/(*sself_rh) - /* context id changed from 905 to 909*/(*sself_h)) - /* context id changed from 905 to 909*/(*sself_shakepower));
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret2__,3,&__pArgs__[2]);
;
}
;

YY_STACKTRACE_LINE(27);
YYRValue* sself_isshaking = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_isshaking); /* set ContextID to sself_isshaking */
if(BOOL_RValue( /* First usage */(*sself_isshaking) )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
sself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shakepower); /* set ContextID to 910 */
__Args__[0] = (YYRValue*)&gs_constLongArg3_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg3_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[0]) + YYGML_random_range((double)YYRValue( -/* context id changed from 909 to 910*/(*sself_shakepower).asReal() ).asReal(),(double)(*sself_shakepower).asReal()));
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret1__,3,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
sself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_shakepower); /* set ContextID to 910 */
__Args__[0] = (YYRValue*)&gs_constLongArg4_850F60EB;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg4_850F60EB;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_850F60EB;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[0]) + YYGML_random_range((double)YYRValue( -(*sself_shakepower).asReal() ).asReal(),(double)(*sself_shakepower).asReal()));
__pArgs__[4] = &__Args__[4];
gml_Script___view_set(pSelf,pOther,__ret1__,3,&__pArgs__[2]);
;
;
}
;
;
}
;
}
#endif
