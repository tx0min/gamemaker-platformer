/// @description playerHit(obj)
/// @param obj
function playerHit(argument0) {
	var obj=argument0;

	if(instance_exists(oPlayer) && instance_exists(oGame) ){

	    if(!oPlayer.invincible){
	        //log("TENGO:",currenthp,"QUITO:",obj.damage);
	        if( oGame.currenthp - obj.damage <=0 ){
	            death();
            
	        }else{
            
	            screenShake(1);
	            oGame.currenthp-=obj.damage;
	            oPlayer.invincible=true;
	            oPlayer.alarm[1]=120;
	            audio_play_sound(sndOuch,1,false);
	        }
	    }
    
	}



}
