#include "pch.hpp"
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_hrange;
extern YYVAR self_hranger;
extern YYVAR self_vrang;
extern YYVAR self_vrangebo;
extern YYVAR self_c;
extern YYVAR self_fade;
extern YYVAR g_Script_gml_Script_fxSplatter;
extern YYVAR g_Script_gml_GlobalScript_fxSplatter;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_fxSplatter", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue local_xout;
YYRValue sbuiltin_y;
YYRValue local_yout;
YYRValue local_quantity;
YYRValue local_hrangeleft;
YYRValue local_hrangeright;
YYRValue local_vrangetop;
YYRValue local_vrangebottom;
YYRValue local_color;
YYRValue local_fadeaway;
YYRValue local_i;
YYRValue local_splat;
YYRValue oWsplat1D70C54C4_hrangeleft;
YYRValue oWsplat1D70C54C4_hrangeright;
YYRValue oWsplat1D70C54C4_vrangetop;
YYRValue oWsplat1D70C54C4_vrangebottom;
YYRValue oWsplat1D70C54C4_color;
YYRValue oWsplat1D70C54C4_fadeaway;
YYRValue __ret1__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
local_xout=/* First usage */sbuiltin_x;
;

YY_STACKTRACE_LINE(5);
if((argc > 0)) {

YY_STACKTRACE_LINE(5);
local_xout=(*YY_GET_ARG(_args, (int)(0), _count));
;
}
;

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_yout=/* First usage */sbuiltin_y;
;

YY_STACKTRACE_LINE(8);
if((argc > 1)) {

YY_STACKTRACE_LINE(8);
local_yout=(*YY_GET_ARG(_args, (int)(1), _count));
;
}
;

YY_STACKTRACE_LINE(10);
local_quantity=10;
;

YY_STACKTRACE_LINE(11);
if((argc > 2)) {

YY_STACKTRACE_LINE(11);
local_quantity=(*YY_GET_ARG(_args, (int)(2), _count));
;
}
;

YY_STACKTRACE_LINE(13);
local_hrangeleft=4;
;

YY_STACKTRACE_LINE(14);
if((argc > 3)) {

YY_STACKTRACE_LINE(14);
local_hrangeleft=(*YY_GET_ARG(_args, (int)(3), _count));
;
}
;

YY_STACKTRACE_LINE(16);
local_hrangeright=4;
;

YY_STACKTRACE_LINE(17);
if((argc > 4)) {

YY_STACKTRACE_LINE(17);
local_hrangeright=(*YY_GET_ARG(_args, (int)(4), _count));
;
}
;

YY_STACKTRACE_LINE(19);
local_vrangetop=4;
;

YY_STACKTRACE_LINE(20);
if((argc > 5)) {

YY_STACKTRACE_LINE(20);
local_vrangetop=(*YY_GET_ARG(_args, (int)(5), _count));
;
}
;

YY_STACKTRACE_LINE(22);
local_vrangebottom=4;
;

YY_STACKTRACE_LINE(23);
if((argc > 6)) {

YY_STACKTRACE_LINE(23);
local_vrangebottom=(*YY_GET_ARG(_args, (int)(6), _count));
;
}
;

YY_STACKTRACE_LINE(25);
local_color=16777215;
;

YY_STACKTRACE_LINE(26);
if((argc > 7)) {

YY_STACKTRACE_LINE(26);
local_color=(*YY_GET_ARG(_args, (int)(7), _count));
;
}
;

YY_STACKTRACE_LINE(28);
local_fadeaway=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(29);
if((argc > 8)) {

YY_STACKTRACE_LINE(29);
local_fadeaway=(*YY_GET_ARG(_args, (int)(8), _count));
;
}
;

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(32);
local_i=0;
;
bool ___f152___ = true;
while( true ) {
if (!___f152___) {

YY_STACKTRACE_LINE(32);
++/* local */local_i;
;
}
___f152___ = false;
bool ___b153___ = ((/* local */local_i < /* local */local_quantity));
if (!___b153___) break;
{

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xout;
__pArgs__[1] = &/* local */local_yout;
__Args__[2] = YYASSET_REF(0x0000000D);
__pArgs__[2] = &__Args__[2];
local_splat=gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
oWsplat1D70C54C4_hrangeleft=/* local */local_hrangeleft;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_hrangeleft, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_hrangeleft );
;

YY_STACKTRACE_LINE(35);
oWsplat1D70C54C4_hrangeright=/* local */local_hrangeright;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_hrangeright, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_hrangeright );
;

YY_STACKTRACE_LINE(36);
oWsplat1D70C54C4_vrangetop=/* local */local_vrangetop;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_vrangetop, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_vrangetop );
;

YY_STACKTRACE_LINE(37);
oWsplat1D70C54C4_vrangebottom=/* local */local_vrangebottom;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_vrangebottom, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_vrangebottom );
;

YY_STACKTRACE_LINE(38);
oWsplat1D70C54C4_color=/* local */local_color;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_color, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_color );
;

YY_STACKTRACE_LINE(39);
oWsplat1D70C54C4_fadeaway=/* local */local_fadeaway;
YYGML_Variable_SetValue( /* local */local_splat, kVARID_self_fadeaway, (int)ARRAY_INDEX_NO_INDEX, &oWsplat1D70C54C4_fadeaway );
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_fxSplatter", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself_fxSplatter_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fxSplatter); /* set ContextID to 28 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_fxSplatter_4ABE50B2)) = (YYRValue(gml_Script_fxSplatter, pSelf)), PopContextStack();
;
return _result;
}
#endif
