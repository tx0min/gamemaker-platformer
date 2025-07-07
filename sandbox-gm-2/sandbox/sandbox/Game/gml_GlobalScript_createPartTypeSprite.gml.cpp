#include "pch.hpp"
extern YYVAR g_Script_gml_Script_createPartTypeSprite;
extern YYVAR g_Script_gml_GlobalScript_createPartTypeSprite;
extern YYVAR g_FUNC_part_type_create;
extern YYVAR g_FUNC_part_type_alpha2;
extern YYVAR g_FUNC_part_type_sprite;
extern YYVAR g_FUNC_part_type_blend;
extern YYVAR g_FUNC_part_type_size;
extern YYVAR g_FUNC_part_type_life;
extern YYVAR g_FUNC_part_type_orientation;
#ifndef __YYNODEFS
DValue gs_constArg0_750ACE31 = { 0.75, 0, VALUE_REAL };
DValue gs_constArg1_750ACE31 = { 0, 0, VALUE_REAL };
DValue gs_constArg2_750ACE31 = { 360, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_750ACE31;
extern DValue gs_constArg1_750ACE31;
extern DValue gs_constArg2_750ACE31;
#endif // __YYNODEFS

YYRValue& gml_Script_createPartTypeSprite( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_createPartTypeSprite( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_createPartTypeSprite", 0 );
YY_STACKTRACE_LINE(9);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue local_sprite;
YYRValue local_blend;
YYRValue local_min_life;
YYRValue local_max_life;
YYRValue local_min_scale;
YYRValue local_max_scale;
YYRValue local_scaling;
YYRValue local_type;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(11);
local_sprite=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(12);
local_blend=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(13);
local_min_life=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(14);
local_max_life=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(15);
local_min_scale=(*YY_GET_ARG(_args, (int)(4), _count));
;

YY_STACKTRACE_LINE(16);
local_max_scale=(*YY_GET_ARG(_args, (int)(5), _count));
;

YY_STACKTRACE_LINE(17);
local_scaling=(*YY_GET_ARG(_args, (int)(6), _count));
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
local_type=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_part_type_create.val,NULL);
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__Args__[1] = (YYRValue*)&gs_constArg0_750ACE31;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_part_type_alpha2.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(22);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__pArgs__[1] = &/* local */local_sprite;
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constTrue;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constFalse;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_part_type_sprite.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__pArgs__[1] = &/* local */local_blend;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_part_type_blend.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__pArgs__[1] = &/* local */local_min_scale;
__pArgs__[2] = &/* local */local_max_scale;
__pArgs__[3] = &/* local */local_scaling;
__Args__[4] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[4] = &__Args__[4];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,5,g_FUNC_part_type_size.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__pArgs__[1] = &/* local */local_min_life;
__pArgs__[2] = &/* local */local_max_life;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_part_type_life.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_type;
__Args__[1] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_750ACE31;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_750ACE31;
__pArgs__[5] = &__Args__[5];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,6,g_FUNC_part_type_orientation.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(28);
_result = /* local */local_type;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_createPartTypeSprite( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_createPartTypeSprite( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_createPartTypeSprite", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_createPartTypeSprite_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_createPartTypeSprite); /* set ContextID to 17 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_createPartTypeSprite_4ABE50B2)) = (YYRValue(gml_Script_createPartTypeSprite, pSelf)), PopContextStack();
;
return _result;
}
#endif
