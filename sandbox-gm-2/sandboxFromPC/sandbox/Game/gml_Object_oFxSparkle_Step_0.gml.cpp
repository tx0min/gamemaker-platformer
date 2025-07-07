#include "pch.hpp"
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oFxSparkle_Step_0;
extern YYVAR g_FUNC_power;
#ifndef __YYNODEFS
DValue gs_constArg0_C99FF79B = { 2, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_C99FF79B;
#endif // __YYNODEFS

void gml_Object_oFxSparkle_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxSparkle_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxSparkle_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_y;
YYRValue local_tmp;
YYRValue sWbuiltin_x;
YYRValue sWbuiltin_y;
YYRValue sbuiltin_x;
YYRValue sWbuiltin_image_angle;
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_image_alpha;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_tmp=/* First usage */sbuiltin_y;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to sself_vsp */
YYRValue* sself_grav = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_grav); /* set ContextID to sself_grav */
if((/* First usage */(*sself_vsp) < /* First usage */(*sself_grav))) {

YY_STACKTRACE_LINE(3);
YYRValue* sWself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vsp); /* set ContextID to 973 */
/* First usage */(*sWself_vsp)+=0.1;
;
}
;

YY_STACKTRACE_LINE(4);
bool sc283 = false;
YYRValue* sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to sself_hsp */
if ((/* First usage */(*sself_hsp) > -0.2)){
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 974 */
sc283 = ((/* context id changed from 90 to 974*/(*sself_hsp) < 0.2));
 };
;
if(sc283) {

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 975 */
YYRValue* sWself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hsp); /* set ContextID to 975 */
__Args__[0] = /* context id changed from 90 to 975*/(*sself_vsp);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_C99FF79B;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_hsp))=YYRValue( -YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_power.val,&__pArgs__[0]).asReal() );
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* First usage */sWbuiltin_x+=/* context id changed from 974 to 90*/(*sself_hsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* First usage */sWbuiltin_y+=/* context id changed from 975 to 90*/(*sself_vsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xcenter); /* set ContextID to sself_xcenter */
YYRValue* sself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ycenter); /* set ContextID to sself_ycenter */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
sWbuiltin_image_angle=YYGML_point_direction((float)(float)(/* First usage */(*sself_xcenter).asReal()),(float)(float)(/* First usage */(*sself_ycenter).asReal()),(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* volatile */sbuiltin_y.asReal()));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;

YY_STACKTRACE_LINE(12);
YYRValue* sself_fadeaway = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fadeaway); /* set ContextID to sself_fadeaway */
if(BOOL_RValue( /* First usage */(*sself_fadeaway) )) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 977 */
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 977 */
YYRValue* sself_fadespeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fadespeed); /* set ContextID to sself_fadespeed */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha-=/* First usage */(*sself_fadespeed);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(14);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha <= 0)) {

YY_STACKTRACE_LINE(14);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
;
}
;
}
#endif
