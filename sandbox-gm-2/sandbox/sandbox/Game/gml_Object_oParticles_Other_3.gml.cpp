#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oParticles_Other_3;
extern YYVAR g_FUNC_part_system_destroy;
extern YYVAR g_FUNC_part_type_destroy;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParticles_Other_3( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParticles_Other_3( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParticles_Other_3", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_system = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_system); /* set ContextID to sself_system */
__Args__[0] = /* First usage */(*sself_system);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_part_system_destroy.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
YYRValue* sself_explosionCenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_explosionCenter); /* set ContextID to sself_explosionCenter */
__Args__[0] = /* First usage */(*sself_explosionCenter);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_part_type_destroy.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sself_explosionParticle = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_explosionParticle); /* set ContextID to sself_explosionParticle */
__Args__[0] = /* First usage */(*sself_explosionParticle);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_part_type_destroy.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
YYRValue* sself_smokeParticle = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_smokeParticle); /* set ContextID to sself_smokeParticle */
__Args__[0] = /* First usage */(*sself_smokeParticle);
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_part_type_destroy.val,&__pArgs__[0]);
;
}
#endif
