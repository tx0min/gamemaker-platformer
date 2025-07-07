
draw_set_blend_mode( bm_add );

var sw=sprite_get_width(sSpotLight);
var sh=sprite_get_height(sSpotLight);

var w=  sprite_width / sw +0.2;
var h=  sprite_height / sh +0.2;

draw_sprite_ext(sSpotLight,0,x,y,w,h,image_angle,c_white,max(0,image_alpha-0.3));

draw_set_blend_mode( bm_normal );

draw_self();



