/// @description  EntityStep();
function EntityStep() {

	jumped = false;
	landed = false;

	if (vy < 1 && vy > -1)
	    PlatformCheck();
	else
	    repeat(abs(vy)) {
	        if (!PlatformCheck())
	            y += sign(vy);
	        else
	            break;
	    }

	if (platformTarget) {
	    if (!onGround)
	        landed = true;
    
	    if (landed)
	        with (platformTarget) other.vy = 0;
	    else
	        with (platformTarget) other.vy = 0;
	}



       
	repeat(abs(vx)) {
	    //rampas de subida
	    for(var i=0;i<canclimb;i++){
	        if(place_meeting(x + sign(vx), y, oParSolid) && !place_meeting(x + sign(vx), y - (i+1), oParSolid)){
	            y -= (i+1);
	            break;
	        }
	    } 
    
    
	    //caidas
	    if(onGround && fearofheights>0){
	        var w= sign(vx)* (bbox_right - bbox_left) ;//sprite_get_width(mask_index);
	        var h=fearofheights;

	        if(!place_meeting(x+w,y+h,oParSolid) && !place_meeting(x+w,y+h,oParJumpThru)){
	            vx=0;
	        }
	    }   

    
	     //baja rampas suavemente
	    if (place_meeting(x + sign(vx), y + 2, oParSolid) && !place_meeting(x + sign(vx), y + 1, oParSolid))
	        y += 1;
    
    

	    //movimiento horizontal        
	    if (!place_meeting(x + sign(vx), y, oParSolid)){
	        //controla el limite lateral de la room
	         if ((vx>0 && bbox_right > room_width) || (vx<0 && bbox_left < 0)){
	            vx = 0;
	        }else{
           
 
            
	            x += sign(vx); 
            
	        }
	    }else{
	        vx = 0;
	    }
	}



}
