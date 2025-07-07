gamestarted=false;
gameover=false;
controltype="mouse";



global.padindex=noone;
global.debug=false;
global.grav=0.4;

//player 
//weapons
weapon=noone;

//vida
maxhp=5;
currenthp=maxhp;

view_xini=__view_get( e__VW.XView, 0 );
view_yini=__view_get( e__VW.YView, 0 );


var gp_num = gamepad_get_device_count();

//set active gamepads
for (var i = 0; i < gp_num; i++;)
{
   if (gamepad_is_connected(i)){
        global.padindex=i;
        log("PAD CONNECTED:",i);
        gamepad_set_axis_deadzone(i, 0.3);
        break;   
   }
}



