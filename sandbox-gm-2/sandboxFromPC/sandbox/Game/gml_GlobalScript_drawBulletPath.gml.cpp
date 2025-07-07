#include "pch.hpp"
YYRValue& gml_Script_inView( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script_drawBulletPath;
extern YYVAR g_Script_gml_GlobalScript_drawBulletPath;
extern YYVAR g_FUNC_draw_get_colour;
extern YYVAR g_FUNC_position_meeting;
extern YYVAR g_FUNC_draw_circle;
extern YYVAR g_FUNC_draw_line;
#ifndef __YYNODEFS
DValue gs_constArg0_37322B18 = { 0, 0, VALUE_REAL };
DValue gs_constArg1_37322B18 = { 3, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_37322B18;
extern DValue gs_constArg1_37322B18;
#endif // __YYNODEFS

YYRValue& gml_Script_drawBulletPath( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_drawBulletPath( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_drawBulletPath", 0 );
YY_STACKTRACE_LINE(11);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue local_x1;
YYRValue local_y1;
YYRValue local_angle;
YYRValue local_bspeed;
YYRValue local_weight;
YYRValue local_color;
YYRValue local_linesize;
YYRValue local_gap;
YYRValue local_dotsize;
YYRValue local_c;
YYRValue local_endpath;
YYRValue local_i;
YYRValue local_hsp;
YYRValue local_vsp;
YYRValue local_xx;
YYRValue local_yy;
YYRValue local_xold;
YYRValue local_yold;
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(13);
local_x1=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(14);
local_y1=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(15);
local_angle=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(16);
local_bspeed=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(17);
local_weight=(*YY_GET_ARG(_args, (int)(4), _count));
;

YY_STACKTRACE_LINE(21);
local_color=255;
;

YY_STACKTRACE_LINE(22);
if((argc > 5)) {

YY_STACKTRACE_LINE(22);
local_color=(*YY_GET_ARG(_args, (int)(5), _count));
;
}
;

YY_STACKTRACE_LINE(25);
local_linesize=1;
;

YY_STACKTRACE_LINE(26);
if((argc > 6)) {

YY_STACKTRACE_LINE(26);
local_linesize=(*YY_GET_ARG(_args, (int)(6), _count));
;
}
;

YY_STACKTRACE_LINE(29);
local_gap=0;
;

YY_STACKTRACE_LINE(30);
if((argc > 7)) {

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_37322B18;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(7), _count));
__pArgs__[1] = &__Args__[1];
local_gap=YYGML_max(__ret1__,2,&__pArgs__[0]);
;
}
;

YY_STACKTRACE_LINE(33);
local_dotsize=3;
;

YY_STACKTRACE_LINE(34);
if((argc > 8)) {

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_37322B18;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (*YY_GET_ARG(_args, (int)(8), _count));
__pArgs__[1] = &__Args__[1];
local_dotsize=YYGML_max(__ret1__,2,&__pArgs__[0]);
;
}
;

YY_STACKTRACE_LINE(39);
FREE_RValue( &__ret1__ );
local_c=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_draw_get_colour.val,NULL);
;

YY_STACKTRACE_LINE(40);
YYGML_draw_set_colour((int)(int64)/* local */local_color);
;

YY_STACKTRACE_LINE(42);
local_endpath=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(44);
local_i=1;
;

YY_STACKTRACE_LINE(46);
local_hsp=YYGML_lengthdir_x((float)(float)(/* local */local_bspeed.asReal()),(float)(float)(/* local */local_angle.asReal()));
;

YY_STACKTRACE_LINE(47);
local_vsp=YYGML_lengthdir_y((float)(float)(/* local */local_bspeed.asReal()),(float)(float)(/* local */local_angle.asReal()));
;

YY_STACKTRACE_LINE(48);
local_xx=/* local */local_x1;
;

YY_STACKTRACE_LINE(49);
local_yy=/* local */local_y1;
;

YY_STACKTRACE_LINE(50);
local_xold=/* local */local_xx;
;

YY_STACKTRACE_LINE(51);
local_yold=/* local */local_yy;
;

YY_STACKTRACE_LINE(53);
while( true ) {
bool ___b104___ = (!((BOOL_RValue( /* local */local_endpath ))));
if (!___b104___) break;
{

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
bool sc105 = false;
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xx;
__pArgs__[1] = &/* local */local_yy;
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[0])) { sc105=true; } else 
{
FREE_RValue( &__ret2__ );
__pArgs__[3] = &/* local */local_xx;
__pArgs__[4] = &/* local */local_yy;
sc105 = (!((BOOL_RValue( gml_Script_inView(pSelf,pOther,__ret2__,2,&__pArgs__[3]) ))));
 };
;
if(sc105) {

YY_STACKTRACE_LINE(54);

YY_STACKTRACE_LINE(55);
FREE_RValue( &__ret3__ );
__pArgs__[5] = &/* local */local_xx;
__pArgs__[6] = &/* local */local_yy;
__Args__[7] = (/* local */local_dotsize * 3);
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constFalse;
__pArgs__[8] = &__Args__[8];
YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,4,g_FUNC_draw_circle.val,&__pArgs__[5]);
;

YY_STACKTRACE_LINE(56);
local_endpath=YYRValue(1!=0);
;
;
}
else {

YY_STACKTRACE_LINE(57);

YY_STACKTRACE_LINE(58);
bool sc106 = false;
if ((/* local */local_gap > 0)){
sc106 = (((/* local */local_i % /* local */local_gap) == 0));
 };
;
if(sc106) {

YY_STACKTRACE_LINE(58);

YY_STACKTRACE_LINE(59);
if((/* local */local_dotsize > 1)) {

YY_STACKTRACE_LINE(59);

YY_STACKTRACE_LINE(60);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xx;
__pArgs__[1] = &/* local */local_yy;
__pArgs__[2] = &/* local */local_dotsize;
__Args__[3] = (YYRValue*)&gs_constFalse;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_draw_circle.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(61);

YY_STACKTRACE_LINE(62);
YYGML_draw_point((float)(float)(/* local */local_xx.asReal()),(float)(float)(/* local */local_yy.asReal()));
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(65);
if((/* local */local_weight != 0)) {

YY_STACKTRACE_LINE(65);

YY_STACKTRACE_LINE(66);
if((/* local */local_vsp < 10)) {

YY_STACKTRACE_LINE(66);
/* local */local_vsp+=(/* local */local_weight * /* First usage */(global_grav));
;
}
;
;
}
;

YY_STACKTRACE_LINE(70);
/* local */local_xx+=/* local */local_hsp;
;

YY_STACKTRACE_LINE(71);
/* local */local_yy+=/* local */local_vsp;
;

YY_STACKTRACE_LINE(73);
if((/* local */local_linesize > 0)) {

YY_STACKTRACE_LINE(73);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xold;
__pArgs__[1] = &/* local */local_yold;
__pArgs__[2] = &/* local */local_xx;
__pArgs__[3] = &/* local */local_yy;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_draw_line.val,&__pArgs__[0]);
;
}
;

YY_STACKTRACE_LINE(74);
local_xold=/* local */local_xx;
;

YY_STACKTRACE_LINE(75);
local_yold=/* local */local_yy;
;
;
}
;

YY_STACKTRACE_LINE(77);
++/* local */local_i;
;
;
}
}
;

YY_STACKTRACE_LINE(83);
YYGML_draw_set_colour((int)(int64)/* local */local_c);
;

YY_STACKTRACE_LINE(85);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_drawBulletPath( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_drawBulletPath( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_drawBulletPath", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_drawBulletPath_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drawBulletPath); /* set ContextID to 20 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_drawBulletPath_4ABE50B2)) = (YYRValue(gml_Script_drawBulletPath, pSelf)), PopContextStack();
;
return _result;
}
#endif
