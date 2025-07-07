/// @description death()
function death() {
	if(instance_exists(oPlayer) && instance_exists(oGame)  ){
   
	        oGame.currenthp=0;
	        oGame.gameover=true;  
	        oGame.gamestarted=false;  
        
	        dropWeapon();
	        audio_play_sound(sndSplatter,1,false);
	        fxSplatter(x,y,25,4,4,4,2,oPlayer.color,false);
	        screenShake();
        
	        with(oPlayer) instance_destroy();  
        
    
	}




}
