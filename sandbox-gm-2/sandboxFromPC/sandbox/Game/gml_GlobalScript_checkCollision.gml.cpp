#include "pch.hpp"
extern YYVAR g_Script_gml_Script_checkCollision;
extern YYVAR g_Script_gml_GlobalScript_checkCollision;
extern YYVAR g_FUNC_draw_get_colour;
extern YYVAR g_FUNC_point_distance;
extern YYVAR g_FUNC_position_meeting;
extern YYVAR g_FUNC_draw_circle;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_checkCollision( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_checkCollision( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_checkCollision", 0 );
YY_STACKTRACE_LINE(11);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue local_x1;
YYRValue local_y1;
YYRValue local_x2;
YYRValue local_y2;
YYRValue local_drawline;
YYRValue local_size;
YYRValue local_color;
YYRValue local_gap;
YYRValue local_alpha;
YYRValue local_c;
YYRValue local_angle;
YYRValue local_distance;
YYRValue local_i;
YYRValue local_xx;
YYRValue local_yy;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue argc(_count);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(13);
local_x1=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(14);
local_y1=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(15);
local_x2=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(16);
local_y2=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(18);
local_drawline=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(19);
if((argc > 4)) {

YY_STACKTRACE_LINE(19);
local_drawline=(*YY_GET_ARG(_args, (int)(4), _count));
;
}
;

YY_STACKTRACE_LINE(22);
local_size=1;
;

YY_STACKTRACE_LINE(23);
if((argc > 5)) {

YY_STACKTRACE_LINE(23);
local_size=(*YY_GET_ARG(_args, (int)(5), _count));
;
}
;

YY_STACKTRACE_LINE(26);
local_color=255;
;

YY_STACKTRACE_LINE(27);
if((argc > 6)) {

YY_STACKTRACE_LINE(27);
local_color=(*YY_GET_ARG(_args, (int)(6), _count));
;
}
;

YY_STACKTRACE_LINE(30);
local_gap=1;
;

YY_STACKTRACE_LINE(31);
if((argc > 7)) {

YY_STACKTRACE_LINE(31);
local_gap=(*YY_GET_ARG(_args, (int)(7), _count));
;
}
;

YY_STACKTRACE_LINE(32);
if((/* local */local_gap <= 0)) {

YY_STACKTRACE_LINE(32);
local_gap=1;
;
}
;

YY_STACKTRACE_LINE(35);
local_alpha=1;
;

YY_STACKTRACE_LINE(36);
if((argc > 8)) {

YY_STACKTRACE_LINE(36);
local_alpha=(*YY_GET_ARG(_args, (int)(8), _count));
;
}
;

YY_STACKTRACE_LINE(38);
FREE_RValue( &__ret1__ );
local_c=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_draw_get_colour.val,NULL);
;

YY_STACKTRACE_LINE(39);
YYGML_draw_set_colour((int)(int64)/* local */local_color);
;

YY_STACKTRACE_LINE(43);
local_angle=YYGML_point_direction((float)(float)(/* local */local_x1.asReal()),(float)(float)(/* local */local_y1.asReal()),(float)(float)(/* local */local_x2.asReal()),(float)(float)(/* local */local_y2.asReal()));
;

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_x1;
__pArgs__[1] = &/* local */local_y1;
__pArgs__[2] = &/* local */local_x2;
__pArgs__[3] = &/* local */local_y2;
local_distance=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_point_distance.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(46);

YY_STACKTRACE_LINE(46);
local_i=1;
;
bool ___f94___ = true;
while( true ) {
if (!___f94___) {

YY_STACKTRACE_LINE(46);
/* local */local_i+=/* local */local_gap;
;
}
___f94___ = false;
bool ___b95___ = ((/* local */local_i < /* local */local_distance));
if (!___b95___) break;
{

YY_STACKTRACE_LINE(46);

YY_STACKTRACE_LINE(47);
local_xx=(/* local */local_x1 + YYGML_lengthdir_x((float)(float)(/* local */local_i.asReal()),(float)(float)(/* local */local_angle.asReal())));
;

YY_STACKTRACE_LINE(48);
local_yy=(/* local */local_y1 + YYGML_lengthdir_y((float)(float)(/* local */local_i.asReal()),(float)(float)(/* local */local_angle.asReal())));
;

YY_STACKTRACE_LINE(50);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xx;
__pArgs__[1] = &/* local */local_yy;
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_position_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
if(BOOL_RValue( /* local */local_drawline )) {

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret2__ );
__pArgs__[3] = &/* local */local_xx;
__pArgs__[4] = &/* local */local_yy;
__Args__[5] = (/* local */local_size * 3);
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constFalse;
__pArgs__[6] = &__Args__[6];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,4,g_FUNC_draw_circle.val,&__pArgs__[3]);
;
}
;

YY_STACKTRACE_LINE(52);
_result.kind = VALUE_BOOL; _result.val = 0;return _result;
;
;
}
else {

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
if(BOOL_RValue( /* local */local_drawline )) {

YY_STACKTRACE_LINE(54);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xx;
__pArgs__[1] = &/* local */local_yy;
__pArgs__[2] = &/* local */local_size;
__Args__[3] = (YYRValue*)&gs_constFalse;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,4,g_FUNC_draw_circle.val,&__pArgs__[0]);
;
}
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(58);
YYGML_draw_set_colour((int)(int64)/* local */local_c);
;

YY_STACKTRACE_LINE(60);
_result.kind = VALUE_BOOL; _result.val = 1;return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_checkCollision( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_checkCollision( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_checkCollision", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_checkCollision_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_checkCollision); /* set ContextID to 16 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_checkCollision_4ABE50B2)) = (YYRValue(gml_Script_checkCollision, pSelf)), PopContextStack();
;
return _result;
}
#endif
