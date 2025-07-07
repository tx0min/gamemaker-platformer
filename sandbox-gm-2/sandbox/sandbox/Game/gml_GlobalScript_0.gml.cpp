#include "pch.hpp"
YYRValue& gml_Script___global_object_depths( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_GlobalScript_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_GlobalScript_0( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_0( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue __ret1__;

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
gml_Script___global_object_depths(pSelf,pOther,__ret1__,0,NULL);
;
return _result;
}
#endif
