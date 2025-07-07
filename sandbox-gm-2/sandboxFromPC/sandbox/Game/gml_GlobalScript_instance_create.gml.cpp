#include "pch.hpp"
YYRValue& gml_Script_object_get_depth( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_instance_create;
extern YYVAR g_Script_gml_GlobalScript_instance_create;
extern YYVAR g_FUNC_instance_create_depth;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_instance_create", 0 );
YY_STACKTRACE_LINE(5);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local_myDepth;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
__Args__[3] = (*YY_GET_ARG(_args, (int)(2), _count));
__pArgs__[3] = &__Args__[3];
local_myDepth=gml_Script_object_get_depth(pSelf,pOther,__ret1__,1,&__pArgs__[3]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
__Args__[0] = (*YY_GET_ARG(_args, (int)(0), _count));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(1), _count));
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_myDepth;
__Args__[3] = (*YY_GET_ARG(_args, (int)(2), _count));
__pArgs__[3] = &__Args__[3];
_result = YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_instance_create_depth.val,&__pArgs__[0]);
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_instance_create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_instance_create_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_instance_create); /* set ContextID to 29 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_instance_create_4ABE50B2)) = (YYRValue(gml_Script_instance_create, pSelf)), PopContextStack();
;
return _result;
}
#endif
