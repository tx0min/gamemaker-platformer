//event_inherited();

// Draw sprite depending on player state
switch (state) {
    case IDLE: 
        image_speed = 1;
        sprite_index = Idle_3;
        break;
    
    case RUN: 
        image_speed = 1; 
        sprite_index = Run_3;
        break;
    
    case JUMP:
        // Rise + fall
        if(vy>0) sprite_index = InAir_3;  //fall
        else sprite_index = InAir_3;   //jump
        // When against a wall   
        if (cRight || cLeft)
            sprite_index = InAir_3;   //fall
        break;
}




image_speed = 1;
//sprite_index = spr_player_idle;

var color=c_white;
if(invincible){
    color=c_red;
   
   
    if(image_alpha>1) blinkmultiplier=-1;
    else if(image_alpha<0.5) blinkmultiplier=1;
    
    
    image_alpha+= blinkmultiplier*0.05;
    
}else{
   image_alpha=1;
}

// Draw player
if (onGround)
    draw_sprite_ext(sprite_index, image_index, x, y , facing * xscale, yscale, 0, color, image_alpha);    
else
    draw_sprite_ext(sprite_index, image_index, x, y, facing * xscale, yscale, 0, color, image_alpha);

