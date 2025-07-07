#include "pch.hpp"
YYRValue& gml_Script_drawBulletPath( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_Script_gml_Object_oParWeapon_Draw_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParWeapon_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParWeapon_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParWeapon_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue local_alpha;
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_image_xscale;
YYRValue sbuiltin_image_yscale;
YYRValue sbuiltin_image_angle;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
local_alpha=1;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_disabled = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_disabled); /* set ContextID to sself_disabled */
if(BOOL_RValue( /* First usage */(*sself_disabled) )) {

YY_STACKTRACE_LINE(3);
local_alpha=0.5;
;
}
;

YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_sprite_index.asReal()),(float)0,(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()),(float)(float)(/* First usage */sbuiltin_image_xscale.asReal()),(float)(float)(/* First usage */sbuiltin_image_yscale.asReal()),(float)(float)(/* First usage */sbuiltin_image_angle.asReal()),(int)(int64)16777215,(float)(float)(/* local */local_alpha.asReal()));
;

YY_STACKTRACE_LINE(6);
bool sc364 = false;
YYRValue* sself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_inuse); /* set ContextID to sself_inuse */
if (/* First usage */(*sself_inuse).asBool()){
YYRValue* sself_drawPath = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drawPath); /* set ContextID to sself_drawPath */
sc364 = (/* First usage */(*sself_drawPath).asBool());
 };
;
if(sc364) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sself_xout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xout); /* set ContextID to sself_xout */
YYRValue* sself_yout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yout); /* set ContextID to sself_yout */
YYRValue* sself_bulletSpeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletSpeed); /* set ContextID to sself_bulletSpeed */
YYRValue* sself_bulletWeight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletWeight); /* set ContextID to sself_bulletWeight */
YYRValue* sself_pathColor = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_pathColor); /* set ContextID to sself_pathColor */
YYRValue* sself_pathSize = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_pathSize); /* set ContextID to sself_pathSize */
YYRValue* sself_pathGap = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_pathGap); /* set ContextID to sself_pathGap */
YYRValue* sself_pathDotsize = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_pathDotsize); /* set ContextID to sself_pathDotsize */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
__Args__[0] = /* First usage */(*sself_xout);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_yout);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* volatile */sbuiltin_image_angle;
__pArgs__[2] = &__Args__[2];
__Args__[3] = /* First usage */(*sself_bulletSpeed);
__pArgs__[3] = &__Args__[3];
__Args__[4] = /* First usage */(*sself_bulletWeight);
__pArgs__[4] = &__Args__[4];
__Args__[5] = /* First usage */(*sself_pathColor);
__pArgs__[5] = &__Args__[5];
__Args__[6] = /* First usage */(*sself_pathSize);
__pArgs__[6] = &__Args__[6];
__Args__[7] = /* First usage */(*sself_pathGap);
__pArgs__[7] = &__Args__[7];
__Args__[8] = /* First usage */(*sself_pathDotsize);
__pArgs__[8] = &__Args__[8];
gml_Script_drawBulletPath(pSelf,pOther,__ret1__,9,&__pArgs__[0]);
;
;
}
;
}
#endif
