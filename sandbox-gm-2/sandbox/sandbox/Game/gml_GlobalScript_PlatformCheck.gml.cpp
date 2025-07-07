#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_id;
extern YYVAR g_Script_gml_Script_PlatformCheck;
extern YYVAR g_Script_gml_GlobalScript_PlatformCheck;
extern YYVAR g_FUNC_instance_place;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_Other;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_PlatformCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_PlatformCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_PlatformCheck", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue local_collision;
YYRValue sbuiltin_id;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);
YYRValue __ret4__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + YYGML_sign((double)/* First usage */(*sself_vy).asReal()));
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_collision=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(6);
if(BOOL_RValue( /* local */local_collision )) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 804 */
if((/* context id changed from 803 to 804*/(*sself_vy) >= 0)) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 805 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_platformTarget))=/* local */local_collision;
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(11);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 806 */
(*sWself_vy)=0;
;
;
}
;

YY_STACKTRACE_LINE(13);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
;
}
;

YY_STACKTRACE_LINE(16);
if((/* context id changed from 804 to 803*/(*sself_vy) < 0)) {

YY_STACKTRACE_LINE(16);

YY_STACKTRACE_LINE(17);
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 807 */
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 807 */
(*sWself_platformTarget)=0;
;
;
}
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
YYRValue* sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to sself_platformTarget */
__Args__[0] = /* First usage */(*sself_platformTarget);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(21);
sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to 808 */
if(BOOL_RValue( /* context id changed from 803 to 808*/(*sself_platformTarget) )) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
bool sc175 = false;
FREE_RValue( &__ret2__ );
sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to 809 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[1] = /* volatile */sbuiltin_x;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (/* volatile */sbuiltin_y + 1);
__pArgs__[2] = &__Args__[2];
__Args__[3] = /* context id changed from 808 to 809*/(*sself_platformTarget);
__pArgs__[3] = &__Args__[3];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[1])){
FREE_RValue( &__ret3__ );
sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to 810 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[4] = /* volatile */sbuiltin_x;
__pArgs__[4] = &__Args__[4];
__Args__[5] = /* volatile */sbuiltin_y;
__pArgs__[5] = &__Args__[5];
__Args__[6] = /* context id changed from 809 to 810*/(*sself_platformTarget);
__pArgs__[6] = &__Args__[6];
sc175 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_place_meeting.val,&__pArgs__[4]) ))));
 };
;
if(sc175) {

YY_STACKTRACE_LINE(22);

YY_STACKTRACE_LINE(24);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 811 */
(*sWself_vy)=0;
;

YY_STACKTRACE_LINE(25);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
;
}
else {

YY_STACKTRACE_LINE(27);
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 812 */
(*sWself_platformTarget)=0;
;
}
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(30);
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 813 */
(*sWself_platformTarget)=0;
;
}
;

YY_STACKTRACE_LINE(32);
if((/* context id changed from 807 to 803*/(*sself_vy) > 0)) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 814 */
// considering sself_vy with OriginalContextID 803 VarTracking_ContextIDIsValid True
// considering sself_platformTarget with OriginalContextID 803 VarTracking_ContextIDIsValid True
SWithIterator ___wi178___;
int ___wc179___ = YYGML_NewWithIterator( &___wi178___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x00000016));
if (___wc179___ > 0 ) {
do {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);

YY_STACKTRACE_LINE(35);
bool sc176 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - 1);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_Other.val,NULL);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = /* volatile */sbuiltin_y;
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,0,g_FUNC_Other.val,NULL);
__pArgs__[5] = &__Args__[5];
sc176 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 };
;
if(sc176) {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 817 */
(*sWself_vy)=0;
;
;
}
;
;
;
} while(YYGML_WithIteratorNext( &___wi178___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi178___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(41);
// considering sself_vy with OriginalContextID 803 VarTracking_ContextIDIsValid True
// considering sself_platformTarget with OriginalContextID 803 VarTracking_ContextIDIsValid True
SWithIterator ___wi182___;
int ___wc183___ = YYGML_NewWithIterator( &___wi182___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x00000017));
if (___wc183___ > 0 ) {
do {

YY_STACKTRACE_LINE(41);

YY_STACKTRACE_LINE(42);
bool sc180 = false;
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y - 1);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_Other.val,NULL);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = /* volatile */sbuiltin_y;
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,0,g_FUNC_Other.val,NULL);
__pArgs__[5] = &__Args__[5];
sc180 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 };
;
if(sc180) {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(44);
YYRValue* oWself_platformTarget = &((CInstanceBase*)pOther)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 820 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
(PushContextStack( (YYObjectBase*)pOther ), (*oWself_platformTarget))=/* First usage */sbuiltin_id;
PopContextStack(1);
;

YY_STACKTRACE_LINE(45);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi182___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi182___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;

YY_STACKTRACE_LINE(50);
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 803 */
(*sWself_platformTarget)=0;
;

YY_STACKTRACE_LINE(51);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_PlatformCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_PlatformCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_PlatformCheck", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_PlatformCheck_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_PlatformCheck); /* set ContextID to 36 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_PlatformCheck_4ABE50B2)) = (YYRValue(gml_Script_PlatformCheck, pSelf)), PopContextStack();
;
return _result;
}
#endif
