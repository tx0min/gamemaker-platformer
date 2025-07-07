#include "pch.hpp"
YYRValue& gml_Script_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oPortal_Step_0;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_audio_play_sound;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
DValue gs_constArg0_F122A3C0 = { 1, 0, VALUE_REAL };
DValue gs_constArg1_F122A3C0 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_F122A3C0;
extern DValue gs_constArg1_F122A3C0;
#endif // __YYNODEFS

void gml_Object_oPortal_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oPortal_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oPortal_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(2);
bool sc407 = false;
if ((YYGML_instance_number(pSelf,pOther,(int)YYASSET_REF(0x00000015).asReal()) == 0)){
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0])){
YYRValue* sself_opened = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_opened); /* set ContextID to sself_opened */
sc407 = (!((BOOL_RValue( /* First usage */(*sself_opened) ))));
 }; };
;
if(sc407) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret2__ );
__Args__[1] = YYASSET_REF(0x02000008);
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_F122A3C0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_F122A3C0;
__pArgs__[3] = &__Args__[3];
YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_audio_play_sound.val,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_opened = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_opened); /* set ContextID to 1222 */
(*sWself_opened)=YYRValue(1!=0);
;
;
}
;

YY_STACKTRACE_LINE(7);
YYRValue* sself_opened = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_opened); /* set ContextID to sself_opened */
if(BOOL_RValue( /* context id changed from 1221 to 136*/(*sself_opened) )) {

YY_STACKTRACE_LINE(7);

YY_STACKTRACE_LINE(8);
sWbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x0000001D);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(9);

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret2__ );
gml_Script_nextRoom(pSelf,pOther,__ret2__,0,NULL);
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(13);
sWbuiltin_image_alpha=0.5;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
;
}
;
}
#endif
