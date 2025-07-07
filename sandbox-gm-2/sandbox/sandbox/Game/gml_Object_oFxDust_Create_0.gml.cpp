#include "pch.hpp"
extern YYVAR g_VAR_image_speed;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_oFxDust_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxDust_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxDust_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxDust_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_speed;
YYRValue sWbuiltin_image_index;
YYRValue sWbuiltin_image_xscale;
YYRValue sWbuiltin_image_yscale;
YYRValue sWbuiltin_hspeed;
YYRValue sWbuiltin_vspeed;
YYRValue sWbuiltin_alarm_FF09D93A;


YY_STACKTRACE_LINE(1);
sWbuiltin_image_speed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(2);
sWbuiltin_image_index=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_index );
;

YY_STACKTRACE_LINE(3);
sWbuiltin_image_xscale=YYGML_random_range((double)0.5,(double)1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_xscale );
;

YY_STACKTRACE_LINE(4);
sWbuiltin_image_yscale=YYGML_random_range((double)0.5,(double)1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;

YY_STACKTRACE_LINE(6);
sWbuiltin_hspeed=YYGML_random_range((double)-1,(double)1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_hspeed );
;

YY_STACKTRACE_LINE(7);
sWbuiltin_vspeed=YYGML_random_range((double)-1,(double)1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_vspeed );
;

YY_STACKTRACE_LINE(8);
YYRValue* sWself_color = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_color); /* set ContextID to 75 */
(*sWself_color)=16777215;
;

YY_STACKTRACE_LINE(9);
sWbuiltin_alarm_FF09D93A=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sWbuiltin_alarm_FF09D93A );
;
}
#endif
