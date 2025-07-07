#include "pch.hpp"
YYRValue& gml_Script_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_id;
extern YYVAR g_Script_gml_Script_PlaceMeetingException;
extern YYVAR g_Script_gml_GlobalScript_PlaceMeetingException;
extern YYVAR g_FUNC_Other;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
const char g_pString167_13AB55B7_s[] = {
0x45, 0x58, 0x43, 0x45, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x00,                                          // EXCEPTION.
};
const YYRValue g_pString167_13AB55B7(g_pString167_13AB55B7_s, true);
#else
extern const char g_pString167_13AB55B7_s[];
extern const YYRValue g_pString167_13AB55B7;
#endif // __YYNODEFS

YYRValue& gml_Script_PlaceMeetingException( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_PlaceMeetingException( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_PlaceMeetingException", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local_exception;
YYRValue sbuiltin_id;
YYRValue local_this;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
local_exception=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(6);
SWithIterator ___wi172___;
int ___wc173___ = YYGML_NewWithIterator( &___wi172___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, (*YY_GET_ARG(_args, (int)(2), _count)));
if (___wc173___ > 0 ) {
do {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(8);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
local_this=/* First usage */sbuiltin_id;
;

YY_STACKTRACE_LINE(10);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
if((/* volatile */sbuiltin_id == /* local */local_exception)) {

YY_STACKTRACE_LINE(11);
continue;
;
}
else {

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
SWithIterator ___wi169___;
int ___wc170___ = YYGML_NewWithIterator( &___wi169___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_Other.val,NULL));
if (___wc170___ > 0 ) {
do {

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret2__ );
__Args__[0] = (*YY_GET_ARG(_args, (int)(0), _count));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(1), _count));
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_this;
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret3__ );
__Args__[3] = g_pString167_13AB55B7;
__pArgs__[3] = &__Args__[3];
gml_Script_log(pSelf,pOther,__ret3__,1,&__pArgs__[3]);
;

YY_STACKTRACE_LINE(16);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
;
}
;
} while(YYGML_WithIteratorNext( &___wi169___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi169___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
}
;
;
} while(YYGML_WithIteratorNext( &___wi172___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi172___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(21);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_PlaceMeetingException( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_PlaceMeetingException( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_PlaceMeetingException", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself_PlaceMeetingException_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_PlaceMeetingException); /* set ContextID to 35 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_PlaceMeetingException_4ABE50B2)) = (YYRValue(gml_Script_PlaceMeetingException, pSelf)), PopContextStack();
;
return _result;
}
#endif
