#include "pch.hpp"
YYRValue& gml_Script_enemyHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_id;
extern YYVAR g_Script_gml_Object_oParEnemy_Collision_oBullet;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEnemy_Collision_oBullet( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEnemy_Collision_oBullet( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEnemy_Collision_oBullet", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue obuiltin_id;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYGML_Variable_GetValue( (YYObjectBase*)pOther, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &obuiltin_id );
__Args__[0] = /* First usage */obuiltin_id;
__pArgs__[0] = &__Args__[0];
gml_Script_enemyHit(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;
}
#endif
