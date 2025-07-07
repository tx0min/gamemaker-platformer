#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oCamera_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oCamera_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oCamera_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oCamera_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYRValue* sWself_isshaking = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_isshaking); /* set ContextID to 68 */
(*sWself_isshaking)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_shakepower = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shakepower); /* set ContextID to 68 */
(*sWself_shakepower)=5;
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_hborder = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hborder); /* set ContextID to 68 */
(*sWself_hborder)=0.25;
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_vborder = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vborder); /* set ContextID to 68 */
(*sWself_vborder)=0.25;
;
}
#endif
