#include "pch.hpp"
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_blend;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_Script_gml_Object_oFxSplatter_Alarm_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxSplatter_Alarm_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxSplatter_Alarm_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxSplatter_Alarm_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_alpha;
YYRValue sWbuiltin_image_yscale;
YYRValue sWbuiltin_image_blend;
YYRValue sWbuiltin_image_angle;


YY_STACKTRACE_LINE(2);
YYRValue* sself_hrangeleft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hrangeleft); /* set ContextID to sself_hrangeleft */
YYRValue* sself_hrangeright = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hrangeright); /* set ContextID to sself_hrangeright */
YYRValue* sWself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hsp); /* set ContextID to 94 */
(*sWself_hsp)=YYGML_random_range((double)YYRValue( -/* First usage */(*sself_hrangeleft).asReal() ).asReal(),(double)/* First usage */(*sself_hrangeright).asReal());
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_vrangetop = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vrangetop); /* set ContextID to sself_vrangetop */
YYRValue* sself_vrangebottom = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vrangebottom); /* set ContextID to sself_vrangebottom */
YYRValue* sWself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vsp); /* set ContextID to 94 */
(*sWself_vsp)=YYGML_random_range((double)YYRValue( -/* First usage */(*sself_vrangetop).asReal() ).asReal(),(double)/* First usage */(*sself_vrangebottom).asReal());
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_rotsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_rotsp); /* set ContextID to 94 */
(*sWself_rotsp)=YYGML_irandom_range((int64)-30,(int64)30);
;

YY_STACKTRACE_LINE(8);
sWbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(10);
sWbuiltin_image_yscale=YYGML_random_range((double)0.3,(double)1.2);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
sWbuiltin_image_blend=/* First usage */(*sself_color);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_blend );
;

YY_STACKTRACE_LINE(12);
YYRValue* sself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xcenter); /* set ContextID to sself_xcenter */
YYRValue* sself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ycenter); /* set ContextID to sself_ycenter */
YYRValue* sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to sself_hsp */
YYRValue* sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to sself_vsp */
sWbuiltin_image_angle=YYGML_point_direction((float)(float)(/* First usage */(*sself_xcenter).asReal()),(float)(float)(/* First usage */(*sself_ycenter).asReal()),(float)((*sself_xcenter) + /* First usage */(*sself_hsp)).asReal(),(float)((*sself_ycenter) + /* First usage */(*sself_vsp)).asReal());
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;
}
#endif
