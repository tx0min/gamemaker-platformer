/// @description enemyHit(obj)
/// @param obj
function enemyHit(argument0) {


	var bullet=argument0;


	//if(!invincible){
	   // log("TIENE:",currenthp,"QUITO:",bullet.damage);
	    if( currenthp - bullet.damage <=0 ){
	        //enemy death
	        audio_play_sound(sndSplatter,1,false);
	        fxSplatter(x,y,20,4,4,4,2,color,false);
	        instance_destroy();
        
	    }else{
	        fxSplatter(bullet.x,bullet.y,5,2,2,2,2,color,true);
	        currenthp-=bullet.damage;
	        invincible=true;
	        alarm[0]=10;
	    }
	    with(bullet) instance_destroy();
	//}
    






}
