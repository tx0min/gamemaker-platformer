#include "pch.hpp"
extern YYVAR g_Script_gml_Script___view_set_internal;
extern YYVAR g_Script_gml_GlobalScript___view_set_internal;
extern YYVAR g_FUNC_view_get_camera;
extern YYVAR g_FUNC_camera_set_view_pos;
extern YYVAR g_FUNC_camera_get_view_y;
extern YYVAR g_FUNC_camera_get_view_x;
extern YYVAR g_FUNC_camera_set_view_size;
extern YYVAR g_FUNC_camera_get_view_height;
extern YYVAR g_FUNC_camera_get_view_width;
extern YYVAR g_FUNC_camera_set_view_angle;
extern YYVAR g_FUNC_camera_set_view_border;
extern YYVAR g_FUNC_camera_get_view_border_y;
extern YYVAR g_FUNC_camera_get_view_border_x;
extern YYVAR g_FUNC_camera_set_view_speed;
extern YYVAR g_FUNC_camera_get_view_speed_y;
extern YYVAR g_FUNC_camera_get_view_speed_x;
extern YYVAR g_FUNC_camera_set_view_target;
extern YYVAR g_FUNC_view_set_visible;
extern YYVAR g_FUNC_view_set_xport;
extern YYVAR g_FUNC_view_set_yport;
extern YYVAR g_FUNC_view_set_wport;
extern YYVAR g_FUNC_view_set_hport;
extern YYVAR g_FUNC_view_set_camera;
extern YYVAR g_FUNC_view_set_surface_id;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script___view_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___view_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___view_set_internal", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue local___prop;
YYRValue local___index;
YYRValue local___val;
YYRValue local___cam;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(2);
local___prop=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(3);
local___index=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(4);
local___val=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(6);
YYRValue ___sw86___ = (/* local */local___prop);
int ___swc87___ = -1;
static SYYCaseEntry ___swcase88___[] = {
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
{ YYRValue(YYRValue((int64)15LL)), 15},
{ YYRValue(YYRValue((int64)16LL)), 16},
};
for( int ___swcount89___=0; ___swcount89___<sizeof(___swcase88___)/sizeof(___swcase88___[0]); ++___swcount89___) {
	if (___swcase88___[___swcount89___].entry == ___sw86___) {
		___swc87___ = ___swcase88___[___swcount89___].value;
		break;
	}
}
switch( ___swc87___ ) {
case 0: {

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__pArgs__[2] = &/* local */local___val;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_y.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_pos.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(8);
break;
;
}
case 1: {

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_x.val,&__pArgs__[0]);
__pArgs__[2] = &__Args__[2];
__pArgs__[3] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_pos.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(9);
break;
;
}
case 2: {

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__pArgs__[2] = &/* local */local___val;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_height.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_size.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(10);
break;
;
}
case 3: {

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_width.val,&__pArgs__[0]);
__pArgs__[2] = &__Args__[2];
__pArgs__[3] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_size.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(11);
break;
;
}
case 4: {

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_camera_set_view_angle.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(12);
break;
;
}
case 5: {

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__pArgs__[2] = &/* local */local___val;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_border_y.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_border.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(13);
break;
;
}
case 6: {

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_border_x.val,&__pArgs__[0]);
__pArgs__[2] = &__Args__[2];
__pArgs__[3] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_border.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(14);
break;
;
}
case 7: {

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__pArgs__[2] = &/* local */local___val;
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_speed_y.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_speed.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(15);
break;
;
}
case 8: {

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___cam;
__Args__[2] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_camera_get_view_speed_x.val,&__pArgs__[0]);
__pArgs__[2] = &__Args__[2];
__pArgs__[3] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_camera_set_view_speed.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(16);
break;
;
}
case 9: {

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___index;
local___cam=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_view_get_camera.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___cam;
__pArgs__[1] = &/* local */local___val;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_camera_set_view_target.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);
break;
;
}
case 10: {

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 498 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_visible.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(18);
break;
;
}
case 11: {

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 499 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_xport.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(19);
break;
;
}
case 12: {

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 500 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_yport.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(20);
break;
;
}
case 13: {

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 501 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_wport.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(21);
break;
;
}
case 14: {

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 502 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_hport.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(22);
break;
;
}
case 15: {

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 503 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_camera.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(23);
break;
;
}
case 16: {

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
YYRValue* sWself___res = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___res); /* set ContextID to 504 */
__pArgs__[0] = &/* local */local___index;
__pArgs__[1] = &/* local */local___val;
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___res))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_view_set_surface_id.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(24);
break;
;
}
default: {

YY_STACKTRACE_LINE(25);
break;
;
}
}
;

YY_STACKTRACE_LINE(28);
_result = 0;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___view_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___view_set_internal( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___view_set_internal", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___view_set_internal_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___view_set_internal); /* set ContextID to 12 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___view_set_internal_4ABE50B2)) = (YYRValue(gml_Script___view_set_internal, pSelf)), PopContextStack();
;
return _result;
}
#endif
