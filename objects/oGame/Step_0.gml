/// @description  Input variables for debug room traversal
var kRestart, kExit, kPrev, kNext;

kRestart = keyboard_check_pressed(ord("R"));
kExit    = keyboard_check_pressed(vk_escape);
kPrev    = keyboard_check_pressed(ord("Z"));
kNext    = keyboard_check_pressed(ord("X"));
kFS    = keyboard_check_pressed(ord("F"));
kDebug    = keyboard_check_pressed(ord("G"));
kControl   = keyboard_check_pressed(ord("C"));
rClick =    mouse_check_button_pressed(mb_right);



if (kRestart)
    restartRoom();

if (kExit)
    game_end();
    
if (kFS)
    window_set_fullscreen(!window_get_fullscreen());
    
if(kControl){
    if(controltype=="mouse"){
        if(global.padindex!=noone) controltype="gamepad"; 
    }else{
      controltype="mouse";  
    }
}
if(kDebug){
    global.debug=!global.debug;
}

if(global.debug){
    if(rClick){
       // fxSplatter(x,y,quantity,hrangeleft,hrangeright,vrangetop,vrangebottom,color,fadeaway);
        var c=make_colour_rgb(irandom_range(0,255),irandom_range(0,255),irandom_range(0,255));
        fxSplatter(mouse_x,mouse_y,25,5,5,5,5,c,0);
        fxExplosion(mouse_x,mouse_y);
    }
    
    // Iterate through rooms backward
    if (kPrev) 
        prevRoom();
    
    
    // Iterate through rooms forwards
    if (kNext) 
        nextRoom();
}


//show proper cursor
if(instance_exists(oPlayer) && instance_exists(oGame) ){
    window_set_cursor(cr_none);
    if(controltype=="mouse"){
        if(oGame.weapon!=noone){
            cursor_sprite = sCursor;
        }else{
            cursor_sprite = noone;
        }
    }
}

///Parallax

for (var i=0;i<3;i++){
  if(__background_get( e__BG.Visible, i )){
      __background_set( e__BG.X, i, __view_get( e__VW.XView, 0 )/((i+1)*2) ) ;
     // background_y[i]= background_y[i] + ( view_yview /((i+1)*2)) ;
         
  }
}
//log(view_xview);

if(instance_exists(oPlayer)){
    if(__view_get( e__VW.XView, 0 ) > 5){
        tile_layer_shift(-1000001,-oPlayer.vx/10,0);    
    }
}
/*if(instance_exists(oPlayer))
    tile_layer_shift(1000000,-oPlayer.vx/6,-oPlayer.vy/6)
*/

/* */
///Spawn Player 

if(!instance_exists(oPlayerSpawn)){
    nextRoom();
}else{  
    if(!instance_exists(oPlayer)){
        if(!gameover){
            instance_create(oPlayerSpawn.x,oPlayerSpawn.y,oPlayer);
            if(oGame.weapon!=noone){
                oGame.weapon=instance_create(oPlayerSpawn.x,oPlayerSpawn.y,oGame.weapontype);
                oGame.weapon.inuse=true;
               
        
            } 
        }
    }
     if(!instance_exists(oCamera)){
        instance_create(oPlayerSpawn.x,oPlayerSpawn.y,oCamera);
     }
    /*else{
        if(!gamestarted){
            log(oPlayer,oPlayer.currenthp,oPlayer.weapon);
            oPlayer.x=oPlayerSpawn.x;
            oPlayer.y=oPlayerSpawn.y; 
            gamestarted=true;
        }  
    }*/
}

/* */
/*  */
