#include "pch.hpp"
YYRValue& gml_Script___background_get_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script___background_get_internal;
extern YYVAR g_Script_gml_GlobalScript___background_get_internal;
extern YYVAR g_FUNC_layer_background_exists;
extern YYVAR g_FUNC_layer_get_visible;
extern YYVAR g_FUNC_layer_background_get_sprite;
extern YYVAR g_FUNC_layer_get_x;
extern YYVAR g_FUNC_layer_get_y;
extern YYVAR g_FUNC_sprite_get_width;
extern YYVAR g_FUNC_layer_background_get_index;
extern YYVAR g_FUNC_sprite_get_height;
extern YYVAR g_FUNC_layer_background_get_htiled;
extern YYVAR g_FUNC_layer_background_get_vtiled;
extern YYVAR g_FUNC_layer_background_get_xscale;
extern YYVAR g_FUNC_layer_background_get_yscale;
extern YYVAR g_FUNC_layer_get_hspeed;
extern YYVAR g_FUNC_layer_get_vspeed;
extern YYVAR g_FUNC_layer_background_get_blend;
extern YYVAR g_FUNC_layer_background_get_alpha;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script___background_get_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___background_get_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___background_get_internal", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local___prop;
YYRValue local___bind;
YYRValue local___backinfo;
YYRValue local___res;
YYRValue local___backid;
YYRValue local___layerid;
YYRValue local___isfore;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(2);
local___prop=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(3);
local___bind=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(4);
local___backinfo=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(6);
bool sc9 = false;
if ((/* local */local___backinfo[(int)(0)] == -1)) { sc9=true; } else 
{
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___backinfo[(int)(1)];
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* local */local___backinfo[(int)(0)];
__pArgs__[1] = &__Args__[1];
sc9 = ((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_exists.val,&__pArgs__[0]) == YYRValue(0!=0)));
 };
;
if(sc9) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret2__ );
__pArgs__[2] = &/* local */local___bind;
local___backinfo=gml_Script___background_get_element(pSelf,pOther,__ret2__,1,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(12);
if((/* local */local___backinfo[(int)(0)] == -1)) {

YY_STACKTRACE_LINE(13);
_result = -1;
return _result;
;
}
;
;
}
;

YY_STACKTRACE_LINE(18);
local___res=-1;
;

YY_STACKTRACE_LINE(20);
local___backid=/* local */local___backinfo[(int)(0)];
;

YY_STACKTRACE_LINE(21);
local___layerid=/* local */local___backinfo[(int)(1)];
;

YY_STACKTRACE_LINE(22);
local___isfore=/* local */local___backinfo[(int)(2)];
;

YY_STACKTRACE_LINE(24);
YYRValue ___sw10___ = (/* local */local___prop);
int ___swc11___ = -1;
static SYYCaseEntry ___swcase12___[] = {
{ YYRValue(YYRValue((int64)0LL)), 0},
{ YYRValue(YYRValue((int64)1LL)), 1},
{ YYRValue(YYRValue((int64)2LL)), 2},
{ YYRValue(YYRValue((int64)3LL)), 3},
{ YYRValue(YYRValue((int64)4LL)), 4},
{ YYRValue(YYRValue((int64)5LL)), 5},
{ YYRValue(YYRValue((int64)6LL)), 6},
{ YYRValue(YYRValue((int64)7LL)), 7},
{ YYRValue(YYRValue((int64)8LL)), 8},
{ YYRValue(YYRValue((int64)9LL)), 9},
{ YYRValue(YYRValue((int64)10LL)), 10},
{ YYRValue(YYRValue((int64)11LL)), 11},
{ YYRValue(YYRValue((int64)12LL)), 12},
{ YYRValue(YYRValue((int64)13LL)), 13},
{ YYRValue(YYRValue((int64)14LL)), 14},
};
for( int ___swcount13___=0; ___swcount13___<sizeof(___swcase12___)/sizeof(___swcase12___[0]); ++___swcount13___) {
	if (___swcase12___[___swcount13___].entry == ___sw10___) {
		___swc11___ = ___swcase12___[___swcount13___].value;
		break;
	}
}
switch( ___swc11___ ) {
case 0: {

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_visible.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
break;
;
}
case 1: {

YY_STACKTRACE_LINE(27);
local___res=/* local */local___isfore;
;

YY_STACKTRACE_LINE(27);
break;
;
}
case 2: {

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_sprite.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(28);
break;
;
}
case 3: {

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_x.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(29);
break;
;
}
case 4: {

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_y.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(30);
break;
;
}
case 5: {

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___backid;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_layer_background_get_index.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_get_width.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(31);
break;
;
}
case 6: {

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___backid;
__Args__[1] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_layer_background_get_index.val,&__pArgs__[0]);
__pArgs__[1] = &__Args__[1];
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_get_height.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(32);
break;
;
}
case 7: {

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_htiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(33);
break;
;
}
case 8: {

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_vtiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
break;
;
}
case 9: {

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_xscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(35);
break;
;
}
case 10: {

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_yscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(36);
break;
;
}
case 11: {

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_hspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(37);
break;
;
}
case 12: {

YY_STACKTRACE_LINE(38);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_vspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(38);
break;
;
}
case 13: {

YY_STACKTRACE_LINE(39);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_blend.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(39);
break;
;
}
case 14: {

YY_STACKTRACE_LINE(40);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___res=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_alpha.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(40);
break;
;
}
default: {

YY_STACKTRACE_LINE(41);
break;
;
}
}
;

YY_STACKTRACE_LINE(44);
_result = /* local */local___res;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___background_get_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___background_get_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___background_get_internal", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___background_get_internal_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___background_get_internal); /* set ContextID to 2 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___background_get_internal_4ABE50B2)) = (YYRValue(gml_Script___background_get_internal, pSelf)), PopContextStack();
;
return _result;
}
#endif
