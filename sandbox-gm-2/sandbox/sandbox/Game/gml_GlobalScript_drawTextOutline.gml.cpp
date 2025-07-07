#include "pch.hpp"
extern YYVAR g_Script_gml_Script_drawTextOutline;
extern YYVAR g_Script_gml_GlobalScript_drawTextOutline;
extern YYVAR g_FUNC_draw_get_color;
extern YYVAR g_FUNC_draw_text;
extern YYVAR g_FUNC_string_hash_to_newline;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_drawTextOutline( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_drawTextOutline( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_drawTextOutline", 0 );
YY_STACKTRACE_LINE(9);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue local_color;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(13);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
local_color=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_draw_get_color.val,NULL);
;

YY_STACKTRACE_LINE(16);
YYGML_draw_set_font((int)(int)(int64)((*YY_GET_ARG(_args, (int)(6), _count)).asReal()));
;

YY_STACKTRACE_LINE(18);
YYGML_draw_set_colour((int)(int64)(*YY_GET_ARG(_args, (int)(5), _count)));
;

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(19);
YYRValue* sWself_i = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_i); /* set ContextID to 632 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_i))=((*YY_GET_ARG(_args, (int)(0), _count)) - (*YY_GET_ARG(_args, (int)(2), _count)));
PopContextStack(1);
;
bool ___f108___ = true;
while( true ) {
if (!___f108___) {

YY_STACKTRACE_LINE(19);
sWself_i = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_i); /* set ContextID to 634 */
/* context id changed from 632 to 634*/(*sWself_i)+=1;
;
}
___f108___ = false;
YYRValue* sself_i = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_i); /* set ContextID to sself_i */
bool ___b109___ = ((/* First usage */(*sself_i) <= ((*YY_GET_ARG(_args, (int)(0), _count)) + (*YY_GET_ARG(_args, (int)(2), _count)))));
if (!___b109___) break;
{

YY_STACKTRACE_LINE(19);

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(20);
YYRValue* sWself_n = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_n); /* set ContextID to 635 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_n))=((*YY_GET_ARG(_args, (int)(1), _count)) - (*YY_GET_ARG(_args, (int)(2), _count)));
PopContextStack(1);
;
bool ___f110___ = true;
while( true ) {
if (!___f110___) {

YY_STACKTRACE_LINE(20);
sWself_n = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_n); /* set ContextID to 637 */
/* context id changed from 635 to 637*/(*sWself_n)+=1;
;
}
___f110___ = false;
YYRValue* sself_n = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_n); /* set ContextID to sself_n */
bool ___b111___ = ((/* First usage */(*sself_n) <= ((*YY_GET_ARG(_args, (int)(1), _count)) + (*YY_GET_ARG(_args, (int)(2), _count)))));
if (!___b111___) break;
{

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
sself_n = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_n); /* set ContextID to 638 */
sself_i = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_i); /* set ContextID to 638 */
__Args__[0] = (*YY_GET_ARG(_args, (int)(3), _count));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* context id changed from 633 to 638*/(*sself_i);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* context id changed from 636 to 638*/(*sself_n);
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string_hash_to_newline.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;
;
}
}
;
;
}
}
;

YY_STACKTRACE_LINE(24);
YYGML_draw_set_colour((int)(int64)(*YY_GET_ARG(_args, (int)(4), _count)));
;

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = (*YY_GET_ARG(_args, (int)(3), _count));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(0), _count));
__pArgs__[1] = &__Args__[1];
__Args__[2] = (*YY_GET_ARG(_args, (int)(1), _count));
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_string_hash_to_newline.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_draw_text.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(27);
YYGML_draw_set_colour((int)(int64)/* local */local_color);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_drawTextOutline( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_drawTextOutline( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_drawTextOutline", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_drawTextOutline_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drawTextOutline); /* set ContextID to 21 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_drawTextOutline_4ABE50B2)) = (YYRValue(gml_Script_drawTextOutline, pSelf)), PopContextStack();
;
return _result;
}
#endif
