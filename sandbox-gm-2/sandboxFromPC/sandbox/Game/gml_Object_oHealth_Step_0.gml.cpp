#include "pch.hpp"
extern YYVAR self_curre;
extern YYVAR self_m;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oHealth_Step_0;
extern YYVAR g_FUNC_instance_exists;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oHealth_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oHealth_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oHealth_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue o0ECB8E193_currenthp;
YYRValue o0ECB8E193_maxhp;
YYRValue sWbuiltin_image_alpha;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
__Args__[0] = YYASSET_REF(0x0000000E);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(1);

YY_STACKTRACE_LINE(2);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_currenthp );
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_maxhp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_maxhp );
if((/* First usage */o0ECB8E193_currenthp < /* First usage */o0ECB8E193_maxhp)) {

YY_STACKTRACE_LINE(2);
sWbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
}
else {

YY_STACKTRACE_LINE(3);
sWbuiltin_image_alpha=0.5;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
}
;
;
}
;
}
#endif
