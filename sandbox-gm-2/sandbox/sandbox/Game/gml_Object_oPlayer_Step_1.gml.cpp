#include "pch.hpp"
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_bbox_bottom;
extern YYVAR g_VAR_sprite_width;
extern YYVAR g_Script_gml_Object_oPlayer_Step_1;
extern YYVAR g_FUNC_round;
#ifndef __YYNODEFS
DValue gs_constArg0_988EAC05 = { 3, 0, VALUE_REAL };
DValue gs_constArg1_988EAC05 = { 20, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_988EAC05;
extern DValue gs_constArg1_988EAC05;
#endif // __YYNODEFS

void gml_Object_oPlayer_Step_1( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oPlayer_Step_1( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oPlayer_Step_1", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue local_onGroundPrev;
YYRValue sbuiltin_x;
YYRValue sbuiltin_bbox_bottom;
YYRValue sbuiltin_sprite_width;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
local_onGroundPrev=/* First usage */(*sself_onGround);
;

YY_STACKTRACE_LINE(4);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(6);
bool sc369 = false;
if ((*sself_onGround).asBool()){
sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to 1135 */
sc369 = (!((BOOL_RValue( /* local */local_onGroundPrev ))));
 };
;
if(sc369) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_bottom.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_bottom );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_width.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_width );
__Args__[0] = (/* First usage */sbuiltin_sprite_width / (double)2);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_x;
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */sbuiltin_bbox_bottom;
__pArgs__[2] = &__Args__[2];
__Args__[3] = YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_round.val,&__pArgs__[0]);
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg0_988EAC05;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_988EAC05;
__pArgs__[5] = &__Args__[5];
gml_Script_fxDust(pSelf,pOther,__ret1__,5,&__pArgs__[1]);
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_stretch = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_stretch); /* set ContextID to sself_stretch */
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 1136 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xscale))=/* First usage */(*sself_stretch);
PopContextStack(1);
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_squash = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_squash); /* set ContextID to sself_squash */
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 1136 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yscale))=/* First usage */(*sself_squash);
PopContextStack(1);
;
;
}
;
}
#endif
