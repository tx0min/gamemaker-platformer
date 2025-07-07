#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oMovingPlatform_Step_2;
extern YYVAR g_FUNC_round;
extern YYVAR g_FUNC_position_meeting;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_Other;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oMovingPlatform_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oMovingPlatform_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oMovingPlatform_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue local_vxNew;
YYRValue local_vyNew;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sWbuiltin_y;
YYRValue sWbuiltin_x;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;


YY_STACKTRACE_LINE(2);
local_vxNew=0;
;

YY_STACKTRACE_LINE(3);
local_vyNew=0;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
YYRValue* sWself_cx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cx); /* set ContextID to 110 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cx))+=/* First usage */(*sself_vx);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(6);
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYRValue* sWself_cy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cy); /* set ContextID to 110 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cy))+=/* First usage */(*sself_vy);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sself_cx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cx); /* set ContextID to sself_cx */
__Args__[0] = /* First usage */(*sself_cx);
__pArgs__[0] = &__Args__[0];
local_vxNew=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_round.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
YYRValue* sself_cy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cy); /* set ContextID to sself_cy */
__Args__[0] = /* First usage */(*sself_cy);
__pArgs__[0] = &__Args__[0];
local_vyNew=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_round.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(9);
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cx))-=/* local */local_vxNew;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(10);
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cy))-=/* local */local_vyNew;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(14);
int __rep332__ = YYGML_abs((double)/* local */local_vyNew.asReal());
while( __rep332__-- > 0 ) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
sWself_cx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cx); /* set ContextID to 1069 */
sWself_cy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cy); /* set ContextID to 1069 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + YYGML_sign((double)/* local */local_vyNew.asReal()));
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000018);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(15);

YY_STACKTRACE_LINE(16);
// considering sWself_cx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_vx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sWself_cy with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_vy with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_cx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_cy with OriginalContextID 110 VarTracking_ContextIDIsValid True
SWithIterator ___wi334___;
int ___wc335___ = YYGML_NewWithIterator( &___wi334___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x00000016));
if (___wc335___ > 0 ) {
do {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + 1);
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,0,g_FUNC_Other.val,NULL);
__pArgs__[5] = &__Args__[5];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) )) {

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* First usage */sWbuiltin_y+=/* local */local_vyNew;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi334___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi334___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(22);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* volatile */sWbuiltin_y+=/* local */local_vyNew;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
;
}
else {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1073 */
/* First usage */(*sWself_vy)*=-1;
;

YY_STACKTRACE_LINE(27);
break;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(32);
int __rep336__ = YYGML_abs((double)/* local */local_vxNew.asReal());
while( __rep336__-- > 0 ) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + YYGML_sign((double)/* local */local_vxNew.asReal()));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000018);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);
// considering sWself_cx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_vx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sWself_cy with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_vy with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_cx with OriginalContextID 110 VarTracking_ContextIDIsValid True
// considering sself_cy with OriginalContextID 110 VarTracking_ContextIDIsValid True
SWithIterator ___wi338___;
int ___wc339___ = YYGML_NewWithIterator( &___wi338___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x00000016));
if (___wc339___ > 0 ) {
do {

YY_STACKTRACE_LINE(34);

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + 1);
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,0,g_FUNC_Other.val,NULL);
__pArgs__[5] = &__Args__[5];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) )) {

YY_STACKTRACE_LINE(36);

YY_STACKTRACE_LINE(37);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* First usage */sWbuiltin_x+=/* local */local_vxNew;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi338___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi338___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(40);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* volatile */sWbuiltin_x+=/* local */local_vxNew;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;
;
}
else {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 1078 */
/* First usage */(*sWself_vx)*=-1;
;

YY_STACKTRACE_LINE(44);
break;
;
;
}
;
;
}
;
}
#endif
