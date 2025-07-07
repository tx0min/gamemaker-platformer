#include "pch.hpp"
extern YYVAR g_Script_gml_Script___init_view;
extern YYVAR g_Script_gml_GlobalScript___init_view;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script___init_view( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___init_view( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___init_view", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

return _result;

}

#endif
YYRValue& gml_GlobalScript___init_view( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___init_view( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___init_view", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___init_view_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___init_view); /* set ContextID to 10 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___init_view_4ABE50B2)) = (YYRValue(gml_Script___init_view, pSelf)), PopContextStack();
;
return _result;
}
#endif
