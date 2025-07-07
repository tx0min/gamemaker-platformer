/// @description drawWallPuddle(obj,position,color)
/// @param obj
/// @param position
/// @param color
function drawWallPuddle(argument0, argument1, argument2) {
	var obj=argument0;
	var position=argument1;
	var color=argument2;



	if(obj.object_index==oBlock){
    
	    var xpos;
	    var ypos;
	    var angle=0;
	    if(position=="top"){
	        xpos=obj.x;
	        ypos=obj.bbox_top;
	        angle=-90;
	    }else if(position=="bottom"){
	        xpos=obj.x;
	        ypos=obj.bbox_bottom;
	        angle=90;
	    }else if(position=="right"){
	        xpos=obj.bbox_right;
	        ypos=obj.y;
	        angle=180;
	    }else{
	        xpos=obj.bbox_left;
	        ypos=obj.y;
    
	    }
    
	    /*log(obj);
	    log(position,angle,xpos,ypos);*/
    
    
    
	    fxDust(xpos,ypos,4,4,8,color);
    
	    var puddle=instance_create(xpos,ypos,oFxPuddle); 
	    with(oFxPuddle){
	        puddle.depth = min(depth,puddle.depth);
	    }
	    puddle.depth--;
	    if(oGame.weapon!=noone) oGame.weapon.depth=puddle.depth-1;
    
	    puddle.image_angle=angle;   
	    puddle.image_blend=color;
	    puddle.position=position;
	    puddle.alarm[0]=10;    
    
   
    
    
	}



}
