#include "pch.hpp"
extern YYVAR g_Script_gml_Script_tile_layer_shift;
extern YYVAR g_Script_gml_GlobalScript_tile_layer_shift;
extern YYVAR g_FUNC_layer_get_all;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_layer_get_depth;
extern YYVAR g_FUNC_layer_get_all_elements;
extern YYVAR g_FUNC_layer_get_element_type;
extern YYVAR g_FUNC_layer_tile_x;
extern YYVAR g_FUNC_layer_tile_get_x;
extern YYVAR g_FUNC_layer_tile_y;
extern YYVAR g_FUNC_layer_tile_get_y;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_tile_layer_shift( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_tile_layer_shift( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_tile_layer_shift", 0 );
YY_STACKTRACE_LINE(6);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local___depth;
YYRValue local___x;
YYRValue local___y;
YYRValue local___layers;
YYRValue local___numlayers;
YYRValue local___i;
YYRValue local___els;
YYRValue local___numels;
YYRValue local___j;
YYRValue local___eltype;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(8);
local___depth=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(9);
local___x=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(10);
local___y=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
local___layers=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_layer_get_all.val,NULL);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layers;
local___numlayers=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
;

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(17);
local___i=0;
;
bool ___f197___ = true;
while( true ) {
if (!___f197___) {

YY_STACKTRACE_LINE(17);
++/* local */local___i;
;
}
___f197___ = false;
bool ___b198___ = ((/* local */local___i < /* local */local___numlayers));
if (!___b198___) break;
{

YY_STACKTRACE_LINE(18);

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layers[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_depth.val,&__pArgs__[0]) != /* local */local___depth)) {

YY_STACKTRACE_LINE(20);
continue;
;
}
;

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layers[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
local___els=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_all_elements.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___els;
local___numels=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(25);
;

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(26);
local___j=0;
;
bool ___f199___ = true;
while( true ) {
if (!___f199___) {

YY_STACKTRACE_LINE(26);
++/* local */local___j;
;
}
___f199___ = false;
bool ___b200___ = ((/* local */local___j < /* local */local___numels));
if (!___b200___) break;
{

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___els[(int)(/* local */local___j)];
__pArgs__[0] = &__Args__[0];
local___eltype=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_element_type.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(29);
if((/* local */local___eltype == 7)) {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* local */local___els[(int)(/* local */local___j)];
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* local */local___els[(int)(/* local */local___j)];
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_layer_tile_get_x.val,&__pArgs__[0]) + /* local */local___x);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_tile_x.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__Args__[0] = /* local */local___els[(int)(/* local */local___j)];
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* local */local___els[(int)(/* local */local___j)];
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_layer_tile_get_y.val,&__pArgs__[0]) + /* local */local___y);
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_tile_y.val,&__pArgs__[1]);
;
;
}
;
;
}
}
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_tile_layer_shift( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_tile_layer_shift( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_tile_layer_shift", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_tile_layer_shift_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_tile_layer_shift); /* set ContextID to 43 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_tile_layer_shift_4ABE50B2)) = (YYRValue(gml_Script_tile_layer_shift, pSelf)), PopContextStack();
;
return _result;
}
#endif
