#include "pch.hpp"
extern YYVAR g_Script_gml_Script___init_global;
extern YYVAR g_Script_gml_GlobalScript___init_global;
extern YYVAR g_FUNC_layer_force_draw_depth;
#ifndef __YYNODEFS
DValue gs_constArg0_DAF735D3 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_DAF735D3;
#endif // __YYNODEFS

YYRValue& gml_Script___init_global( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___init_global( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___init_global", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(5);
__Args__[0] = (YYRValue*)&gs_constTrue;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_DAF735D3;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_force_draw_depth.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(6);
YYGML_draw_set_colour((int)(int64)0);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___init_global( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___init_global( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___init_global", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___init_global_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___init_global); /* set ContextID to 9 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___init_global_4ABE50B2)) = (YYRValue(gml_Script___init_global, pSelf)), PopContextStack();
;
return _result;
}
#endif
