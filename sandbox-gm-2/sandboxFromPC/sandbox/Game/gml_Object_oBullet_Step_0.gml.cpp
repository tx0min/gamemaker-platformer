#include "pch.hpp"
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_Script_gml_Object_oBullet_Step_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oBullet_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBullet_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBullet_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_image_alpha;
YYRValue sWbuiltin_x;
YYRValue sWbuiltin_y;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sWbuiltin_image_angle;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_vanish = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vanish); /* set ContextID to sself_vanish */
if(BOOL_RValue( /* First usage */(*sself_vanish) )) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha-=0.1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha <= 0)) {

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
;
}
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_weight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weight); /* set ContextID to sself_weight */
if((/* First usage */(*sself_weight) != 0)) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(11);
YYRValue* sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to sself_vsp */
if((/* First usage */(*sself_vsp) < 10)) {

YY_STACKTRACE_LINE(11);
sself_weight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weight); /* set ContextID to 903 */
YYRValue* sself_grav = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_grav); /* set ContextID to sself_grav */
YYRValue* sWself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vsp); /* set ContextID to 903 */
/* First usage */(*sWself_vsp)+=(/* context id changed from 64 to 903*/(*sself_weight) * /* First usage */(*sself_grav));
;
}
;
;
}
;

YY_STACKTRACE_LINE(20);
YYRValue* sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to sself_hsp */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* First usage */sWbuiltin_x+=/* First usage */(*sself_hsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to sself_vsp */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* First usage */sWbuiltin_y+=/* context id changed from 902 to 64*/(*sself_vsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(22);
YYRValue* sself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xcenter); /* set ContextID to sself_xcenter */
YYRValue* sself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ycenter); /* set ContextID to sself_ycenter */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
sWbuiltin_image_angle=YYGML_point_direction((float)(float)(/* First usage */(*sself_xcenter).asReal()),(float)(float)(/* First usage */(*sself_ycenter).asReal()),(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;

YY_STACKTRACE_LINE(24);
YYRValue* sself_trail = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_trail); /* set ContextID to sself_trail */
if(BOOL_RValue( /* First usage */(*sself_trail) )) {

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
gml_Script_fxDust(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
}
;
}
#endif
