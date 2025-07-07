/// @description Weapon position
if(instance_exists(oPlayer)){
    if(inuse){
        
        x=oPlayer.x ;
        y=oPlayer.y-(oPlayer.sprite_height/2) ;
        
        //Weapon angle
        var angle=image_angle;
       
        if(oGame.controltype=="mouse"){
             angle=point_direction(x, y, mouse_x, mouse_y);
            
        
        }else{   
            
           angle = point_direction(0, 0, gamepad_axis_value(global.padindex, gp_axisrh), gamepad_axis_value(global.padindex, gp_axisrv));
           if(gamepad_axis_value(global.padindex, gp_axisrh)==0 && gamepad_axis_value(global.padindex, gp_axisrv)==0 && oPlayer.facing==-1) angle=180;
          // log(oPlayer.facing,angle);
           //rad=image_angle*pi/180;
            
        }
       
        image_angle = angle;
        if(angle>90 && angle<270) image_yscale=-1;
        else image_yscale=1;    
    
    }
}

///Weapon Fire
if(instance_exists(oPlayer)){
    if(inuse){
    
        var rad=image_angle*pi/180;
        
        var hipotenusa= sprite_width-sprite_xoffset; 
        var cy=hipotenusa*sin(rad);
        var cx=hipotenusa*cos(rad);
        xout=x +cx;
        yout=y -cy;
        
        shoot=false;
        
        
        //drop weapon
        if(oGame.controltype=="mouse"){
           if(keyboard_check_pressed(ord("E"))){
                dropWeapon();
           }
        }else{
            if(gamepad_button_check_pressed(global.padindex,gp_face4)){
                dropWeapon();
            }
        }
        
        //weapon shooting
        
        if(oGame.controltype=="mouse"){
            
            shoot=mouse_check_button_pressed(mb_left);
            if(holdfire) shoot=mouse_check_button(mb_left);
                
            
            
    
            
        }else{
            if(global.padindex!=noone){
                //log(gamepad_axis_value(global.padindex, gp_axisrh),gamepad_axis_value(global.padindex, gp_axisrv));
                
                shoot = gamepad_axis_value(global.padindex, gp_axisrh)!=0 || gamepad_axis_value(global.padindex, gp_axisrv)!=0;
                if(!holdfire) shoot=gamepad_button_check_pressed(global.padindex,gp_shoulderr);
                /*shoot=gamepad_button_check_pressed(global.padindex,gp_shoulderrb);
                if(holdfire) shoot=gamepad_button_check(global.padindex,gp_shoulderrb);*/
            }
        }
            
        
        //create bullet at the extreme of the weapon
        if(shoot && !hold){
            //if(!place_meeting(x,y,oParSolid)){  
            
    
                if(bulletStreak>1){
                    alarm[2]=2;
                    
                }else{
                    shootBullet(xout,yout);
                }
                
                //FX salida del arma
                fxDust(xout,yout,damage*4,damage*4,damage*8,c_yellow);
                
                hold=true;
                alarm[1]=bulletFrequency;  //al pasar n frames desactivara el hold
           // }
            
         }
    }
}

/* */
///Player Collision
if(place_meeting(x,y,oPlayer)){
    if(!inuse && !disabled){
        inuse=true;
        disabled=false;
        audio_play_sound(sndReload,1,false);
        
        //si tenía un arma se la quito y la dejo donde está el jugador  
        dropWeapon();
        oGame.weapon=id; 
        oGame.weapontype=object_index;
        
       // log(oPlayer.weapon);
    }
   
    
}

/* */
/*  */
