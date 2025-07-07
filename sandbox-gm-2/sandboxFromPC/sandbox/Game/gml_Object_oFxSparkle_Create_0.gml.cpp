#include "pch.hpp"
extern YYVAR g_VAR_image_speed;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_oFxSparkle_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxSparkle_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxSparkle_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxSparkle_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_speed;
YYRValue sWbuiltin_image_index;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sWbuiltin_alarm_FF09D93A;


YY_STACKTRACE_LINE(1);
sWbuiltin_image_speed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(2);
sWbuiltin_image_index=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_index );
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xcenter); /* set ContextID to 88 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xcenter))=/* First usage */sbuiltin_x;
PopContextStack(1);
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ycenter); /* set ContextID to 88 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_ycenter))=/* First usage */sbuiltin_y;
PopContextStack(1);
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_grav = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_grav); /* set ContextID to 88 */
(*sWself_grav)=14;
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_fadespeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fadespeed); /* set ContextID to 88 */
(*sWself_fadespeed)=0.02;
;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_hrangeleft = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hrangeleft); /* set ContextID to 88 */
(*sWself_hrangeleft)=5;
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_hrangeright = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hrangeright); /* set ContextID to 88 */
(*sWself_hrangeright)=5;
;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_vrangetop = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vrangetop); /* set ContextID to 88 */
(*sWself_vrangetop)=5;
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_vrangebottom = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vrangebottom); /* set ContextID to 88 */
(*sWself_vrangebottom)=5;
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_color = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_color); /* set ContextID to 88 */
(*sWself_color)=16777215;
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_fadeaway = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fadeaway); /* set ContextID to 88 */
(*sWself_fadeaway)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(16);
sWbuiltin_alarm_FF09D93A=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sWbuiltin_alarm_FF09D93A );
;
}
#endif
