#include "pch.hpp"
extern YYVAR g_Script_gml_Script_log;
extern YYVAR g_Script_gml_GlobalScript_log;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_show_debug_message;
#ifndef __YYNODEFS
const char g_pString159_64821931_s[] = {
0x2c, 0x20, 0x00,                                                                                    // , .
};
const YYRValue g_pString159_64821931(g_pString159_64821931_s, true);
#else
extern const char g_pString159_64821931_s[];
extern const YYRValue g_pString159_64821931;
#endif // __YYNODEFS

YYRValue& gml_Script_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_log", 0 );
YY_STACKTRACE_LINE(3);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue local_r;
YYRValue local_i;
YYRValue __ret1__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
__Args__[0] = (*YY_GET_ARG(_args, (int)(0), _count));
__pArgs__[0] = &__Args__[0];
local_r=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(5);
local_i=1;
;
bool ___f157___ = true;
while( true ) {
if (!___f157___) {

YY_STACKTRACE_LINE(5);
++/* local */local_i;
;
}
___f157___ = false;
bool ___b158___ = ((/* local */local_i < argc));
if (!___b158___) break;
{

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__Args__[0] = (*YY_GET_ARG(_args, (int)(/* local */local_i), _count));
__pArgs__[0] = &__Args__[0];
/* local */local_r+=(YYRValue(g_pString159_64821931) + YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]));
;
;
}
}
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_r;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_show_debug_message.val,&__pArgs__[0]);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_log", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_log_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_log); /* set ContextID to 31 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_log_4ABE50B2)) = (YYRValue(gml_Script_log, pSelf)), PopContextStack();
;
return _result;
}
#endif
