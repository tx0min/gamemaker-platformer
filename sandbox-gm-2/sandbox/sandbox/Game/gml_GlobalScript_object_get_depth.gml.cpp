#include "pch.hpp"
extern YYVAR self___objectID2D;
extern YYVAR g_Script_gml_Script_object_get_depth;
extern YYVAR g_Script_gml_GlobalScript_object_get_depth;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_Global;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_object_get_depth( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_object_get_depth( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_object_get_depth", 0 );
YY_STACKTRACE_LINE(4);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue local_objID;
YYRValue local_ret;
YYRValue & global___objectID2Depth = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global___objectID2Depth);
YYRValue o_40__40_Global_40__40_04B76A7B1___objectID2Depth;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
local_objID=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(7);
local_ret=0;
;

YY_STACKTRACE_LINE(8);
bool sc162 = false;
if ((/* local */local_objID >= 0)){
FREE_RValue( &__ret1__ );
__Args__[0] = /* First usage */(global___objectID2Depth);
__pArgs__[0] = &__Args__[0];
sc162 = ((/* local */local_objID < YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0])));
 };
;
if(sc162) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,0,g_FUNC_Global.val,NULL), kVARID_self___objectID2Depth, (int)/* local */local_objID, &o_40__40_Global_40__40_04B76A7B1___objectID2Depth );
local_ret=/* First usage */o_40__40_Global_40__40_04B76A7B1___objectID2Depth;
;
;
}
;

YY_STACKTRACE_LINE(11);
_result = /* local */local_ret;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_object_get_depth( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_object_get_depth( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_object_get_depth", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_object_get_depth_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_object_get_depth); /* set ContextID to 33 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_object_get_depth_4ABE50B2)) = (YYRValue(gml_Script_object_get_depth, pSelf)), PopContextStack();
;
return _result;
}
#endif
