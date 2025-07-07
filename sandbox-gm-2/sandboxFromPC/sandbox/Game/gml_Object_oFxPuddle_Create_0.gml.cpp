#include "pch.hpp"
extern YYVAR g_VAR_image_speed;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oFxPuddle_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxPuddle_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxPuddle_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxPuddle_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_speed;
YYRValue sWbuiltin_image_index;
YYRValue sbuiltin_y;


YY_STACKTRACE_LINE(1);
sWbuiltin_image_speed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(3);
sWbuiltin_image_index=YYGML_irandom_range((int64)0,(int64)2);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_index );
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_finalyscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_finalyscale); /* set ContextID to 82 */
(*sWself_finalyscale)=YYGML_random_range((double)1,(double)1.5);
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_finalxscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_finalxscale); /* set ContextID to 82 */
(*sWself_finalxscale)=YYGML_random_range((double)0.5,(double)1);
;

YY_STACKTRACE_LINE(8);
YYRValue* sWself_yend = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yend); /* set ContextID to 82 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yend))=(/* First usage */sbuiltin_y + YYGML_irandom_range((int64)1,(int64)130));
PopContextStack(1);
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_numdrops = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_numdrops); /* set ContextID to 82 */
(*sWself_numdrops)=YYGML_irandom((int64)3);
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_drops = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drops); /* set ContextID to 82 */
(*sWself_drops)=-4;
;
}
#endif
