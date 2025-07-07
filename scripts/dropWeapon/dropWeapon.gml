/// @description dropWeapon()
function dropWeapon() {
	if(oGame.weapon!=noone){
	    with(oGame){
	        weapon.inuse=false;
	        weapon.disabled=true;
	        weapon.x=oPlayer.x;
	        weapon.y=oPlayer.y;
	        weapon.image_angle=0;
	        weapon.image_yscale=1;
	        weapon.alarm[0] = 120;
	        weapon=noone;
	    }  
	}



}
