#include "pch.hpp"
YYRValue& gml_Script___view_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script___view_set;
extern YYVAR g_Script_gml_GlobalScript___view_set;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script___view_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___view_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___view_set", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local___prop;
YYRValue local___index;
YYRValue local___val;
YYRValue local___res;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(2);
local___prop=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(3);
local___index=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(4);
local___val=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___prop;
__pArgs__[1] = &/* local */local___index;
__pArgs__[2] = &/* local */local___val;
gml_Script___view_set_internal(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___prop;
__pArgs__[1] = &/* local */local___index;
local___res=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(10);
_result = /* local */local___res;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___view_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___view_set( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___view_set", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___view_set_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___view_set); /* set ContextID to 13 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___view_set_4ABE50B2)) = (YYRValue(gml_Script___view_set, pSelf)), PopContextStack();
;
return _result;
}
#endif
