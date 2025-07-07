#include "pch.hpp"
YYRValue& gml_Script_createPartTypeSprite( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_oParticles_Create_0;
extern YYVAR g_FUNC_part_system_create;
#ifndef __YYNODEFS
DValue gs_constArg0_E3104B1F = { 30, 0, VALUE_REAL };
DValue gs_constArg1_E3104B1F = { 0.6, 0, VALUE_REAL };
DValue gs_constArg2_E3104B1F = { 0.8, 0, VALUE_REAL };
DValue gs_constArg3_E3104B1F = { -0.001, 0, VALUE_REAL };
DValue gs_constArg4_E3104B1F = { 15, 0, VALUE_REAL };
DValue gs_constArg5_E3104B1F = { 20, 0, VALUE_REAL };
DValue gs_constArg6_E3104B1F = { 0.5, 0, VALUE_REAL };
DValue gs_constArg7_E3104B1F = { 1, 0, VALUE_REAL };
DValue gs_constArg8_E3104B1F = { -0.01, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_E3104B1F;
extern DValue gs_constArg1_E3104B1F;
extern DValue gs_constArg2_E3104B1F;
extern DValue gs_constArg3_E3104B1F;
extern DValue gs_constArg4_E3104B1F;
extern DValue gs_constArg5_E3104B1F;
extern DValue gs_constArg6_E3104B1F;
extern DValue gs_constArg7_E3104B1F;
extern DValue gs_constArg8_E3104B1F;
#endif // __YYNODEFS

void gml_Object_oParticles_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParticles_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParticles_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYRValue* sWself_system = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_system); /* set ContextID to 121 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_system))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_part_system_create.val,NULL);
PopContextStack(1);
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
YYRValue* sWself_explosionCenter = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_explosionCenter); /* set ContextID to 121 */
__Args__[0] = YYASSET_REF(0x0100001D);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constTrue;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_E3104B1F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_E3104B1F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_E3104B1F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg2_E3104B1F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg3_E3104B1F;
__pArgs__[6] = &__Args__[6];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_explosionCenter))=gml_Script_createPartTypeSprite(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
YYRValue* sWself_explosionParticle = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_explosionParticle); /* set ContextID to 121 */
__Args__[0] = YYASSET_REF(0x0100001C);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constTrue;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg4_E3104B1F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg5_E3104B1F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg6_E3104B1F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg7_E3104B1F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg8_E3104B1F;
__pArgs__[6] = &__Args__[6];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_explosionParticle))=gml_Script_createPartTypeSprite(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sWself_smokeParticle = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_smokeParticle); /* set ContextID to 121 */
__Args__[0] = YYASSET_REF(0x0100001B);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constTrue;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg4_E3104B1F;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg4_E3104B1F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg6_E3104B1F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg7_E3104B1F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg8_E3104B1F;
__pArgs__[6] = &__Args__[6];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_smokeParticle))=gml_Script_createPartTypeSprite(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
PopContextStack(1);
;
}
#endif
