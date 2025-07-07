#include "pch.hpp"
extern YYVAR g_Script_gml_Script_draw_set_blend_mode;
extern YYVAR g_Script_gml_GlobalScript_draw_set_blend_mode;
extern YYVAR g_FUNC_gpu_set_blendmode;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_draw_set_blend_mode( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_draw_set_blend_mode( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_draw_set_blend_mode", 0 );
YY_STACKTRACE_LINE(3);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
__Args__[1] = (*YY_GET_ARG(_args, (int)(0), _count));
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_gpu_set_blendmode.val,&__pArgs__[1]);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_draw_set_blend_mode( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_draw_set_blend_mode( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_draw_set_blend_mode", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_draw_set_blend_mode_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_draw_set_blend_mode); /* set ContextID to 19 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_draw_set_blend_mode_4ABE50B2)) = (YYRValue(gml_Script_draw_set_blend_mode, pSelf)), PopContextStack();
;
return _result;
}
#endif
