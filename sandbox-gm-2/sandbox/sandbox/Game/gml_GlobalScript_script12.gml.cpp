#include "pch.hpp"
extern YYVAR g_Script_gml_Script_script12;
extern YYVAR g_Script_gml_GlobalScript_script12;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_script12( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_script12( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_script12", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

return _result;

}

#endif
YYRValue& gml_GlobalScript_script12( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_script12( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_script12", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself_script12_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_script12); /* set ContextID to 41 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_script12_4ABE50B2)) = (YYRValue(gml_Script_script12, pSelf)), PopContextStack();
;
return _result;
}
#endif
