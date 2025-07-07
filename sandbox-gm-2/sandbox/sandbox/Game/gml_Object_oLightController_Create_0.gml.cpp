#include "pch.hpp"
extern YYVAR g_VAR_room_width;
extern YYVAR g_VAR_room_height;
extern YYVAR g_Script_gml_Object_oLightController_Create_0;
extern YYVAR g_FUNC_surface_create;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oLightController_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oLightController_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oLightController_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue global_builtin_room_width;
YYRValue global_builtin_room_height;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYRValue* sWself_surf = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_surf); /* set ContextID to 106 */
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_height.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_height );
__Args__[0] = /* First usage */global_builtin_room_width;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */global_builtin_room_height;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_surf))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_surface_create.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_surfScale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_surfScale); /* set ContextID to 106 */
(*sWself_surfScale)=0.125;
;
}
#endif
