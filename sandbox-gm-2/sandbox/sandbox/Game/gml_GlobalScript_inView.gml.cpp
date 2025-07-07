#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_inView;
extern YYVAR g_Script_gml_GlobalScript_inView;
#ifndef __YYNODEFS
DValue gs_constArg1_5F876074 = { 0, 0, VALUE_REAL };
DLValue gs_constLongArg0_5F876074 = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_5F876074 = { 2LL, 0, VALUE_INT64 };
DLValue gs_constLongArg3_5F876074 = { 1LL, 0, VALUE_INT64 };
DLValue gs_constLongArg4_5F876074 = { 3LL, 0, VALUE_INT64 };
#else
extern DValue gs_constArg1_5F876074;
extern DLValue gs_constLongArg0_5F876074;
extern DLValue gs_constLongArg2_5F876074;
extern DLValue gs_constLongArg3_5F876074;
extern DLValue gs_constLongArg4_5F876074;
#endif // __YYNODEFS

YYRValue& gml_Script_inView( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_inView( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_inView", 0 );
YY_STACKTRACE_LINE(4);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local_xx;
YYRValue local_yy;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(5);
local_xx=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(6);
local_yy=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constLongArg0_5F876074;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[1] = &__Args__[1];
if((/* local */local_xx < gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]))) {

YY_STACKTRACE_LINE(8);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
}
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (YYRValue*)&gs_constLongArg0_5F876074;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg2_5F876074;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[3] = &__Args__[3];
if((/* local */local_xx > (gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) + gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])))) {

YY_STACKTRACE_LINE(9);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
}
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constLongArg3_5F876074;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[1] = &__Args__[1];
if((/* local */local_yy < gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]))) {

YY_STACKTRACE_LINE(10);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
}
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (YYRValue*)&gs_constLongArg3_5F876074;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg4_5F876074;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_5F876074;
__pArgs__[3] = &__Args__[3];
if((/* local */local_yy > (gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]) + gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[2])))) {

YY_STACKTRACE_LINE(11);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
}
;

YY_STACKTRACE_LINE(16);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_inView( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_inView( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_inView", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_inView_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_inView); /* set ContextID to 30 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_inView_4ABE50B2)) = (YYRValue(gml_Script_inView, pSelf)), PopContextStack();
;
return _result;
}
#endif
