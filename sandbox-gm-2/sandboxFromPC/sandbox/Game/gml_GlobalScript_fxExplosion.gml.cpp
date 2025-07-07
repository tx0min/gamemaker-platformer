#include "pch.hpp"
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_sy;
extern YYVAR self_explosionCe;
extern YYVAR g_Script_gml_Script_fxExplosion;
extern YYVAR g_Script_gml_GlobalScript_fxExplosion;
extern YYVAR g_FUNC_part_particles_create;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_AE8F346B = { 2, 0, VALUE_REAL };
DValue gs_constArg1_AE8F346B = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_AE8F346B;
extern DValue gs_constArg1_AE8F346B;
#endif // __YYNODEFS

YYRValue& gml_Script_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_fxExplosion", 0 );
YY_STACKTRACE_LINE(4);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[5];
YYRValue __Args__[5];
YYRValue local_xx;
YYRValue local_yy;
YYRValue o0A886A561_system;
YYRValue o0A886A561_explosionCenter;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
local_xx=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(7);
local_yy=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(9);
int __rep150__ = 10;
while( __rep150__-- > 0 ) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = ((/* local */local_xx - 16) + YYGML_random((double)32));
__pArgs__[0] = &__Args__[0];
__Args__[1] = ((/* local */local_yy - 16) + YYGML_random((double)32));
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000008);
__pArgs__[2] = &__Args__[2];
gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_system, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_system );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001A), kVARID_self_explosionCenter, (int)ARRAY_INDEX_NO_INDEX, &o0A886A561_explosionCenter );
__Args__[0] = /* First usage */o0A886A561_system;
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local_xx;
__pArgs__[2] = &/* local */local_yy;
__Args__[3] = /* First usage */o0A886A561_explosionCenter;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg0_AE8F346B;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_part_particles_create.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
gml_Script_screenShake(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000000);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_AE8F346B;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_fxExplosion", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_fxExplosion_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fxExplosion); /* set ContextID to 27 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_fxExplosion_4ABE50B2)) = (YYRValue(gml_Script_fxExplosion, pSelf)), PopContextStack();
;
return _result;
}
#endif
