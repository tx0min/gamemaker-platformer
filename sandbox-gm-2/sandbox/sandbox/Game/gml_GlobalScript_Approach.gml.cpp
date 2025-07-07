#include "pch.hpp"
extern YYVAR g_Script_gml_Script_Approach;
extern YYVAR g_Script_gml_GlobalScript_Approach;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_Approach", 0 );
YY_STACKTRACE_LINE(5);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(7);
if(((*YY_GET_ARG(_args, (int)(0), _count)) < (*YY_GET_ARG(_args, (int)(1), _count)))) {

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__Args__[3] = ((*YY_GET_ARG(_args, (int)(0), _count)) + (*YY_GET_ARG(_args, (int)(2), _count)));
__pArgs__[3] = &__Args__[3];
__Args__[4] = (*YY_GET_ARG(_args, (int)(1), _count));
__pArgs__[4] = &__Args__[4];
_result = YYGML_min(__ret1__,2,&__pArgs__[3]);
return _result;
;
}
else {

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = ((*YY_GET_ARG(_args, (int)(0), _count)) - (*YY_GET_ARG(_args, (int)(2), _count)));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(1), _count));
__pArgs__[1] = &__Args__[1];
_result = YYGML_max(__ret1__,2,&__pArgs__[0]);
return _result;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_Approach", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_Approach_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_Approach); /* set ContextID to 14 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_Approach_4ABE50B2)) = (YYRValue(gml_Script_Approach, pSelf)), PopContextStack();
;
return _result;
}
#endif
