#include "pch.hpp"
YYRValue& gml_Script___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script___background_set_internal;
extern YYVAR g_Script_gml_GlobalScript___background_set_internal;
extern YYVAR g_FUNC_round;
extern YYVAR g_FUNC_layer_get_visible;
extern YYVAR g_FUNC_layer_background_get_sprite;
extern YYVAR g_FUNC_layer_background_get_htiled;
extern YYVAR g_FUNC_layer_background_get_vtiled;
extern YYVAR g_FUNC_layer_background_get_stretch;
extern YYVAR g_FUNC_layer_background_get_blend;
extern YYVAR g_FUNC_layer_background_get_alpha;
extern YYVAR g_FUNC_layer_background_get_xscale;
extern YYVAR g_FUNC_layer_background_get_yscale;
extern YYVAR g_FUNC_layer_get_x;
extern YYVAR g_FUNC_layer_get_y;
extern YYVAR g_FUNC_layer_get_hspeed;
extern YYVAR g_FUNC_layer_get_vspeed;
extern YYVAR g_FUNC_layer_set_visible;
extern YYVAR g_FUNC_layer_background_visible;
extern YYVAR g_FUNC_layer_background_change;
extern YYVAR g_FUNC_sprite_exists;
extern YYVAR g_FUNC_layer_background_blend;
extern YYVAR g_FUNC_layer_background_alpha;
extern YYVAR g_FUNC_layer_x;
extern YYVAR g_FUNC_layer_y;
extern YYVAR g_FUNC_layer_background_htiled;
extern YYVAR g_FUNC_layer_background_vtiled;
extern YYVAR g_FUNC_layer_background_xscale;
extern YYVAR g_FUNC_layer_background_yscale;
extern YYVAR g_FUNC_layer_hspeed;
extern YYVAR g_FUNC_layer_vspeed;
#ifndef __YYNODEFS
DValue gs_constArg0_5D925933 = { 16777215, 0, VALUE_REAL };
DValue gs_constArg1_5D925933 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_5D925933;
extern DValue gs_constArg1_5D925933;
#endif // __YYNODEFS

YYRValue& gml_Script___background_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___background_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___background_set_internal", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[15];
YYRValue __Args__[15];
YYRValue local___prop;
YYRValue local___bind;
YYRValue local___val;
YYRValue local___backinfo;
YYRValue local___backid;
YYRValue local___layerid;
YYRValue local___isfore;
YYRValue local___visible;
YYRValue local___index;
YYRValue local___htiled;
YYRValue local___vtiled;
YYRValue local___stretch;
YYRValue local___blend;
YYRValue local___alpha;
YYRValue local___xscale;
YYRValue local___yscale;
YYRValue local___x;
YYRValue local___y;
YYRValue local___hspeed;
YYRValue local___vspeed;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(2);
local___prop=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(3);
local___bind=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(4);
local___val=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(5);
local___backinfo=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(7);
if((/* local */local___backinfo[(int)(0)] == -1)) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(9);
_result = -1;
return _result;
;
;
}
;

YY_STACKTRACE_LINE(12);
local___backid=/* local */local___backinfo[(int)(0)];
;

YY_STACKTRACE_LINE(13);
local___layerid=/* local */local___backinfo[(int)(1)];
;

YY_STACKTRACE_LINE(14);
local___isfore=/* local */local___backinfo[(int)(2)];
;

YY_STACKTRACE_LINE(16);
if((/* local */local___prop == (int64)1LL)) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___val;
__pArgs__[1] = &/* local */local___isfore;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_round.val,&__pArgs__[0]) != YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_round.val,&__pArgs__[1]))) {

YY_STACKTRACE_LINE(20);

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret3__ );
__pArgs__[2] = &/* local */local___layerid;
local___visible=YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,1,g_FUNC_layer_get_visible.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___index=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_sprite.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___htiled=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_htiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___vtiled=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_vtiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(27);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___stretch=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_stretch.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___blend=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_blend.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(29);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___alpha=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_alpha.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___xscale=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_xscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
local___yscale=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_background_get_yscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(33);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___x=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_x.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___y=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_y.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___hspeed=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_hspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___vspeed=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_vspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(38);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bind;
__pArgs__[1] = &/* local */local___visible;
__pArgs__[2] = &/* local */local___val;
__pArgs__[3] = &/* local */local___index;
__pArgs__[4] = &/* local */local___x;
__pArgs__[5] = &/* local */local___y;
__pArgs__[6] = &/* local */local___htiled;
__pArgs__[7] = &/* local */local___vtiled;
__pArgs__[8] = &/* local */local___xscale;
__pArgs__[9] = &/* local */local___yscale;
__pArgs__[10] = &/* local */local___stretch;
__pArgs__[11] = &/* local */local___hspeed;
__pArgs__[12] = &/* local */local___vspeed;
__pArgs__[13] = &/* local */local___blend;
__pArgs__[14] = &/* local */local___alpha;
gml_Script___background_set_element(pSelf,pOther,__ret1__,15,&__pArgs__[0]);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
YYRValue ___sw27___ = (/* local */local___prop);
int ___swc28___ = -1;
static SYYCaseEntry ___swcase29___[] = {
{ YYRValue(YYRValue((int64)0LL)), 0},
{ YYRValue(YYRValue((int64)2LL)), 1},
{ YYRValue(YYRValue((int64)3LL)), 2},
{ YYRValue(YYRValue((int64)4LL)), 3},
{ YYRValue(YYRValue((int64)7LL)), 4},
{ YYRValue(YYRValue((int64)8LL)), 5},
{ YYRValue(YYRValue((int64)9LL)), 6},
{ YYRValue(YYRValue((int64)10LL)), 7},
{ YYRValue(YYRValue((int64)11LL)), 8},
{ YYRValue(YYRValue((int64)12LL)), 9},
{ YYRValue(YYRValue((int64)13LL)), 10},
{ YYRValue(YYRValue((int64)14LL)), 11},
};
for( int ___swcount30___=0; ___swcount30___<sizeof(___swcase29___)/sizeof(___swcase29___[0]); ++___swcount30___) {
	if (___swcase29___[___swcount30___].entry == ___sw27___) {
		___swc28___ = ___swcase29___[___swcount30___].value;
		break;
	}
}
switch( ___swc28___ ) {
case 0: {

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_set_visible.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(45);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_visible.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(45);
break;
;
}
case 1: {

YY_STACKTRACE_LINE(47);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_change.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(49);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___val;
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(49);

YY_STACKTRACE_LINE(50);
FREE_RValue( &__ret2__ );
__pArgs__[1] = &/* local */local___backid;
__Args__[2] = (YYRValue*)&gs_constArg0_5D925933;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_layer_background_blend.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__Args__[1] = (YYRValue*)&gs_constArg1_5D925933;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_alpha.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(53);
break;
;
}
case 2: {

YY_STACKTRACE_LINE(54);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_x.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(54);
break;
;
}
case 3: {

YY_STACKTRACE_LINE(55);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_y.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(55);
break;
;
}
case 4: {

YY_STACKTRACE_LINE(56);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_htiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(56);
break;
;
}
case 5: {

YY_STACKTRACE_LINE(57);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_vtiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(57);
break;
;
}
case 6: {

YY_STACKTRACE_LINE(58);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_xscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(58);
break;
;
}
case 7: {

YY_STACKTRACE_LINE(59);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_yscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(59);
break;
;
}
case 8: {

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_hspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(60);
break;
;
}
case 9: {

YY_STACKTRACE_LINE(61);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_vspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(61);
break;
;
}
case 10: {

YY_STACKTRACE_LINE(62);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_blend.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(62);
break;
;
}
case 11: {

YY_STACKTRACE_LINE(63);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backid;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_alpha.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(63);
break;
;
}
default: {

YY_STACKTRACE_LINE(64);
break;
;
}
}
;
;
}
;

YY_STACKTRACE_LINE(68);
_result = -1;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___background_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___background_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___background_set_internal", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___background_set_internal_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___background_set_internal); /* set ContextID to 5 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___background_set_internal_4ABE50B2)) = (YYRValue(gml_Script___background_set_internal, pSelf)), PopContextStack();
;
return _result;
}
#endif
