/// @description draw sprite

var color=c_white;
if(invincible){
    color=c_red;
    if(image_alpha>1) blinkmultiplier=-1;
    else if(image_alpha<0.5) blinkmultiplier=1;
    image_alpha+= blinkmultiplier*0.05;
    
}else{
   image_alpha=1;
}


draw_sprite_ext(sprite_index, image_index, x, y , facing*xscale, yscale, 0, color, image_alpha);   

