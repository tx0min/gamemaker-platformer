draw_sprite_ext(sprite_index, image_index, x, y ,image_xscale, image_yscale, image_angle, image_blend,image_alpha);

if(global.debug){
   var c=draw_get_color();
    draw_set_color(c_red);
   draw_rectangle(bbox_left,bbox_top,bbox_right,bbox_bottom,true);

    
    var w= sign(vx)* (bbox_right - bbox_left) ;//sprite_get_width(mask_index);
    var h=fearofheights;//sprite_get_height(mask_index);
    
    draw_rectangle(bbox_left+w,bbox_top+h,bbox_right+w,bbox_bottom+h,true);
    draw_sprite_ext(sprite_index, 0, x+w, y+h ,image_xscale, image_yscale, 0, c_white,0.5);
    
     draw_set_color(c);
}            

