#include "pch.hpp"
YYRValue& gml_Script_fxExplosion( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oBullet_Destroy_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oBullet_Destroy_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBullet_Destroy_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBullet_Destroy_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYRValue* sself_explode = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_explode); /* set ContextID to sself_explode */
if(BOOL_RValue( /* First usage */(*sself_explode) )) {

YY_STACKTRACE_LINE(2);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
gml_Script_fxExplosion(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;
}
;
}
#endif
