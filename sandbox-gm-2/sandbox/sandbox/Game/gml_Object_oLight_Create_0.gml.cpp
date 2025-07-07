#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oLight_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oLight_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oLight_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oLight_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(3);
YYRValue* sWself_lightSize = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_lightSize); /* set ContextID to 104 */
(*sWself_lightSize)=6;
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_lightStrength = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_lightStrength); /* set ContextID to 104 */
(*sWself_lightStrength)=1;
;
}
#endif
