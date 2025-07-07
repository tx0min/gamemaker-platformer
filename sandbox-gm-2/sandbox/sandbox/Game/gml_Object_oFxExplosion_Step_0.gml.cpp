#include "pch.hpp"
extern YYVAR self_sy;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_explosionPart;
extern YYVAR self_smokePart;
extern YYVAR g_VAR_speed;
extern YYVAR g_Script_gml_Object_oFxExplosion_Step_0;
extern YYVAR g_FUNC_part_particles_create;
#ifndef __YYNODEFS
DValue gs_constArg0_819A2EDA = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_819A2EDA;
#endif // __YYNODEFS

void gml_Object_oFxExplosion_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxExplosion_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxExplosion_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue o0A886A561_system;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue o0A886A561_explosionParticle;
YYRValue o0A886A561_smokeParticle;
YYRValue sbuiltin_speed;
YYRValue __ret1__;


YY_STACKTRACE_LINE(3);
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_system, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_system );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_explosionParticle, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_explosionParticle );
__Args__[0] = /* First usage */o0A886A561_system;
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* First usage */sbuiltin_x - 8) + YYGML_random((double)16));
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((/* First usage */sbuiltin_y - 8) + YYGML_random((double)16));
__pArgs__[2] = &__Args__[2];
__Args__[3] = /* First usage */o0A886A561_explosionParticle;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg0_819A2EDA;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_part_particles_create.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_system, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_system );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_smokeParticle, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_smokeParticle );
__Args__[0] = /* array index changed from System.Collections.Generic.List`1[System.String] to System.Collections.Generic.List`1[System.String]*/o0A886A561_system;
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* volatile */sbuiltin_x - 8) + YYGML_random((double)16));
__pArgs__[1] = &__Args__[1];
__Args__[2] = ((/* volatile */sbuiltin_y - 8) + YYGML_random((double)16));
__pArgs__[2] = &__Args__[2];
__Args__[3] = /* First usage */o0A886A561_smokeParticle;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg0_819A2EDA;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_part_particles_create.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(9);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_speed );
if((/* First usage */sbuiltin_speed == 0)) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
;
}
#endif
