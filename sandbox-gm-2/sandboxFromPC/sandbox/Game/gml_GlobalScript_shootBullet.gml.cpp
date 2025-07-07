#include "pch.hpp"
YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_alarm;
extern YYVAR self_xce;
extern YYVAR self_yce;
extern YYVAR g_VAR_image_blend;
extern YYVAR self_da;
extern YYVAR g_VAR_sprite_index;
extern YYVAR sel;
extern YYVAR self_we;
extern YYVAR self_t;
extern YYVAR self_exp;
extern YYVAR self;
extern YYVAR g_Script_gml_Script_shootBullet;
extern YYVAR g_Script_gml_GlobalScript_shootBullet;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_B608CB75 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_B608CB75;
#endif // __YYNODEFS

YYRValue& gml_Script_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_shootBullet", 0 );
YY_STACKTRACE_LINE(4);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_xout;
YYRValue local_yout;
YYRValue local_angleinc;
YYRValue sbuiltin_image_angle;
YYRValue local_angleini;
YYRValue local_j;
YYRValue local_bullet;
YYRValue local_angle;
YYRValue oWbullet196CD8A72_alarm;
YYRValue oWbullet1AD6CA5AA_xcenter;
YYRValue oWbullet1AD6CA5AA_ycenter;
YYRValue oWbullet1AD6CA5AA_image_angle;
YYRValue oWbullet1AD6CA5AA_image_blend;
YYRValue oWbullet1AD6CA5AA_damage;
YYRValue oWbullet1AD6CA5AA_sprite_index;
YYRValue oWbullet1AD6CA5AA_sp;
YYRValue oWbullet1AD6CA5AA_weight;
YYRValue oWbullet1AD6CA5AA_trail;
YYRValue oWbullet1AD6CA5AA_explode;
YYRValue oWbullet1AD6CA5AA_vsp;
YYRValue oWbullet1AD6CA5AA_hsp;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(5);
local_xout=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(6);
local_yout=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_bulletConeAngle = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletConeAngle); /* set ContextID to sself_bulletConeAngle */
YYRValue* sself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletNumber); /* set ContextID to sself_bulletNumber */
local_angleinc=(/* First usage */(*sself_bulletConeAngle) / /* First usage */(*sself_bulletNumber));
;

YY_STACKTRACE_LINE(9);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
local_angleini=(/* First usage */sbuiltin_image_angle - ((*sself_bulletConeAngle) / (double)2));
;

YY_STACKTRACE_LINE(10);
if(((*sself_bulletNumber) == 1)) {

YY_STACKTRACE_LINE(10);
sself_bulletConeAngle = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletConeAngle); /* set ContextID to 862 */
sself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletNumber); /* set ContextID to 862 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
local_angleini=/* volatile */sbuiltin_image_angle;
;
}
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
YYRValue* sself_damage = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_damage); /* set ContextID to sself_damage */
__Args__[0] = /* First usage */(*sself_damage);
__pArgs__[0] = &__Args__[0];
gml_Script_screenShake(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
YYRValue* sself_bulletSound = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSound); /* set ContextID to sself_bulletSound */
__Args__[0] = /* First usage */(*sself_bulletSound);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_B608CB75;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(17);
local_j=0;
;
bool ___f194___ = true;
while( true ) {
if (!___f194___) {

YY_STACKTRACE_LINE(17);
++/* local */local_j;
;
}
___f194___ = false;
sself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletNumber); /* set ContextID to 863 */
bool ___b195___ = ((/* local */local_j < /* context id changed from 862 to 863*/(*sself_bulletNumber)));
if (!___b195___) break;
{

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xout;
__pArgs__[1] = &/* local */local_yout;
__Args__[2] = YYASSET_REF(0x00000002);
__pArgs__[2] = &__Args__[2];
local_bullet=gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(20);
local_angle=(/* local */local_angleini + (/* local */local_j * /* local */local_angleinc));
;

YY_STACKTRACE_LINE(23);
YYRValue* sself_bulletDispersion = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletDispersion); /* set ContextID to sself_bulletDispersion */
if((/* First usage */(*sself_bulletDispersion) > 0)) {

YY_STACKTRACE_LINE(23);
sself_bulletDispersion = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletDispersion); /* set ContextID to 866 */
/* local */local_angle+=YYGML_random_range((double)YYRValue( -/* context id changed from 865 to 866*/(*sself_bulletDispersion).asReal() ).asReal(),(double)(*sself_bulletDispersion).asReal());
;
}
;

YY_STACKTRACE_LINE(24);
YYRValue* sself_bulletLifetime = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletLifetime); /* set ContextID to sself_bulletLifetime */
if((/* First usage */(*sself_bulletLifetime) > 0)) {

YY_STACKTRACE_LINE(24);
sself_bulletLifetime = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletLifetime); /* set ContextID to 867 */
oWbullet196CD8A72_alarm=/* context id changed from 865 to 867*/(*sself_bulletLifetime);
Variable_SetValue( /* local */local_bullet, g_VAR_alarm.val, (int)0, &oWbullet196CD8A72_alarm );
;
}
;

YY_STACKTRACE_LINE(27);
oWbullet1AD6CA5AA_xcenter=/* local */local_xout;
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_xcenter, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_xcenter );
;

YY_STACKTRACE_LINE(28);
oWbullet1AD6CA5AA_ycenter=/* local */local_yout;
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_ycenter, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_ycenter );
;

YY_STACKTRACE_LINE(30);
oWbullet1AD6CA5AA_image_angle=/* local */local_angle;
Variable_SetValue( /* local */local_bullet, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_image_angle );
;

YY_STACKTRACE_LINE(31);
YYRValue* sself_bulletColor = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletColor); /* set ContextID to sself_bulletColor */
oWbullet1AD6CA5AA_image_blend=/* First usage */(*sself_bulletColor);
Variable_SetValue( /* local */local_bullet, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_image_blend );
;

YY_STACKTRACE_LINE(32);
sself_damage = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_damage); /* set ContextID to 865 */
oWbullet1AD6CA5AA_damage=/* context id changed from 861 to 865*/(*sself_damage);
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_damage, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_damage );
;

YY_STACKTRACE_LINE(33);
YYRValue* sself_bulletSprite = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSprite); /* set ContextID to sself_bulletSprite */
oWbullet1AD6CA5AA_sprite_index=/* First usage */(*sself_bulletSprite);
Variable_SetValue( /* local */local_bullet, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_sprite_index );
;

YY_STACKTRACE_LINE(34);
YYRValue* sself_bulletSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSpeed); /* set ContextID to sself_bulletSpeed */
oWbullet1AD6CA5AA_sp=/* First usage */(*sself_bulletSpeed);
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_sp, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_sp );
;

YY_STACKTRACE_LINE(35);
YYRValue* sself_bulletWeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletWeight); /* set ContextID to sself_bulletWeight */
oWbullet1AD6CA5AA_weight=/* First usage */(*sself_bulletWeight);
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_weight, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_weight );
;

YY_STACKTRACE_LINE(36);
YYRValue* sself_bulletTrail = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletTrail); /* set ContextID to sself_bulletTrail */
oWbullet1AD6CA5AA_trail=/* First usage */(*sself_bulletTrail);
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_trail, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_trail );
;

YY_STACKTRACE_LINE(37);
YYRValue* sself_bulletExplode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletExplode); /* set ContextID to sself_bulletExplode */
oWbullet1AD6CA5AA_explode=/* First usage */(*sself_bulletExplode);
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_explode, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_explode );
;

YY_STACKTRACE_LINE(39);
oWbullet1AD6CA5AA_vsp=YYGML_lengthdir_y((float)(float)((*sself_bulletSpeed).asReal()),(float)(float)(/* local */local_angle.asReal()));
sself_bulletSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSpeed); /* set ContextID to 879 */
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_vsp, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_vsp );
;

YY_STACKTRACE_LINE(40);
oWbullet1AD6CA5AA_hsp=YYGML_lengthdir_x((float)(float)(/* context id changed from 879 to 865*/(*sself_bulletSpeed).asReal()),(float)(float)(/* local */local_angle.asReal()));
sself_bulletSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSpeed); /* set ContextID to 880 */
YYGML_Variable_SetValue( /* local */local_bullet, kVARID_self_hsp, (int)ARRAY_INDEX_NO_INDEX, &oWbullet1AD6CA5AA_hsp );
;
;
}
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_shootBullet", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_shootBullet_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_shootBullet); /* set ContextID to 42 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_shootBullet_4ABE50B2)) = (YYRValue(gml_Script_shootBullet, pSelf)), PopContextStack();
;
return _result;
}
#endif
