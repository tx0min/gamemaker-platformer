#include "pch.hpp"
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_c;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_Script_gml_Script_fxDust;
extern YYVAR g_Script_gml_GlobalScript_fxDust;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_fxDust", 0 );
YY_STACKTRACE_LINE(9);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue local_xout;
YYRValue sbuiltin_y;
YYRValue local_yout;
YYRValue local_hrange;
YYRValue local_vrange;
YYRValue local_intensity;
YYRValue local_color;
YYRValue local_sprite;
YYRValue local_i;
YYRValue local_dust;
YYRValue oWdust14427EF69_color;
YYRValue oWdust14427EF69_sprite_index;
YYRValue __ret1__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(10);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
local_xout=/* First usage */sbuiltin_x;
;

YY_STACKTRACE_LINE(11);
if((argc > 0)) {

YY_STACKTRACE_LINE(11);
local_xout=(*YY_GET_ARG(_args, (int)(0), _count));
;
}
;

YY_STACKTRACE_LINE(13);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_yout=/* First usage */sbuiltin_y;
;

YY_STACKTRACE_LINE(14);
if((argc > 1)) {

YY_STACKTRACE_LINE(14);
local_yout=(*YY_GET_ARG(_args, (int)(1), _count));
;
}
;

YY_STACKTRACE_LINE(16);
local_hrange=4;
;

YY_STACKTRACE_LINE(17);
if((argc > 2)) {

YY_STACKTRACE_LINE(17);
local_hrange=(*YY_GET_ARG(_args, (int)(2), _count));
;
}
;

YY_STACKTRACE_LINE(19);
local_vrange=2;
;

YY_STACKTRACE_LINE(20);
if((argc > 3)) {

YY_STACKTRACE_LINE(20);
local_vrange=(*YY_GET_ARG(_args, (int)(3), _count));
;
}
;

YY_STACKTRACE_LINE(22);
local_intensity=5;
;

YY_STACKTRACE_LINE(23);
if((argc > 4)) {

YY_STACKTRACE_LINE(23);
local_intensity=(*YY_GET_ARG(_args, (int)(4), _count));
;
}
;

YY_STACKTRACE_LINE(25);
local_color=16777215;
;

YY_STACKTRACE_LINE(26);
if((argc > 5)) {

YY_STACKTRACE_LINE(26);
local_color=(*YY_GET_ARG(_args, (int)(5), _count));
;
}
;

YY_STACKTRACE_LINE(28);
local_sprite=YYASSET_REF(0x0100001B);
;

YY_STACKTRACE_LINE(29);
if((argc > 6)) {

YY_STACKTRACE_LINE(29);
local_sprite=(*YY_GET_ARG(_args, (int)(6), _count));
;
}
;

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(32);
local_i=0;
;
bool ___f147___ = true;
while( true ) {
if (!___f147___) {

YY_STACKTRACE_LINE(32);
++/* local */local_i;
;
}
___f147___ = false;
bool ___b148___ = ((/* local */local_i < /* local */local_intensity));
if (!___b148___) break;
{

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__Args__[0] = (/* local */local_xout + YYGML_random_range((double)YYRValue( -/* local */local_hrange.asReal() ).asReal(),(double)/* local */local_hrange.asReal()));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* local */local_yout + YYGML_random_range((double)YYRValue( -/* local */local_vrange.asReal() ).asReal(),(double)/* local */local_vrange.asReal()));
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000007);
__pArgs__[2] = &__Args__[2];
local_dust=gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
oWdust14427EF69_color=/* local */local_color;
YYGML_Variable_SetValue( /* local */local_dust, kVARID_self_color, (int)ARRAY_INDEX_NO_INDEX, &oWdust14427EF69_color );
;

YY_STACKTRACE_LINE(35);
oWdust14427EF69_sprite_index=/* local */local_sprite;
Variable_SetValue( /* local */local_dust, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &oWdust14427EF69_sprite_index );
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_fxDust", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_fxDust_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fxDust); /* set ContextID to 26 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_fxDust_4ABE50B2)) = (YYRValue(gml_Script_fxDust, pSelf)), PopContextStack();
;
return _result;
}
#endif
