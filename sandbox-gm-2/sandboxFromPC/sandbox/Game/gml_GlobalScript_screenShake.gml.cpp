#include "pch.hpp"
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Script_screenShake;
extern YYVAR g_Script_gml_GlobalScript_screenShake;
extern YYVAR g_FUNC_instance_exists;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_screenShake", 0 );
YY_STACKTRACE_LINE(3);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue local_size;
YYRValue sWbuiltin_alarm_FF09D93A;
YYRValue __ret1__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
local_size=5;
;

YY_STACKTRACE_LINE(5);
if((argc > 0)) {

YY_STACKTRACE_LINE(5);
local_size=(*YY_GET_ARG(_args, (int)(0), _count));
;
}
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x00000003);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
SWithIterator ___wi190___;
int ___wc191___ = YYGML_NewWithIterator( &___wi190___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x00000003));
if (___wc191___ > 0 ) {
do {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
YYRValue* sWself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shakepower); /* set ContextID to 856 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shakepower))=/* local */local_size;
PopContextStack(1);
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_isshaking = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_isshaking); /* set ContextID to 856 */
(*sWself_isshaking)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(11);
sWbuiltin_alarm_FF09D93A=30;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sWbuiltin_alarm_FF09D93A );
;
;
} while(YYGML_WithIteratorNext( &___wi190___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi190___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_screenShake", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_screenShake_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_screenShake); /* set ContextID to 40 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_screenShake_4ABE50B2)) = (YYRValue(gml_Script_screenShake, pSelf)), PopContextStack();
;
return _result;
}
#endif
