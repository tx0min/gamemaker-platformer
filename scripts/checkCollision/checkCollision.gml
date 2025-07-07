/// @description checkCollision(x1,y1,x2,y2,[drawline,size,color,gap,alpha])
/// @param x1
/// @param y1
/// @param x2
/// @param y2
/// @param [drawline
/// @param size
/// @param color
/// @param gap
/// @param alpha]
function checkCollision() {
	 //Checks if there is collision between two points (and draws a line between them)
	 var x1=argument[0];
	 var y1=argument[1];
	 var x2=argument[2];
	 var y2=argument[3];  
 
	 var drawline=false; 
	 if(argument_count>4) drawline=argument[4];
 
 
	 var size=1;
	 if(argument_count>5) size=argument[5];
 
 
	 var color=c_red;
	 if(argument_count>6) color=argument[6];
 
 
	 var gap=1;
	 if(argument_count>7) gap=argument[7];
	 if(gap<=0) gap=1;

 
	  var alpha=1;
	 if(argument_count>8) alpha=argument[8];
 
	var c=draw_get_colour();
	draw_set_colour(color);



	var angle=point_direction(x1,y1,x2,y2);
	var distance=point_distance(x1,y1,x2,y2);

	for(var i=1;i < distance; i+=gap){
	   var xx= x1+lengthdir_x(i,angle);
	   var yy= y1+lengthdir_y(i,angle);
   
	   if(position_meeting(xx,yy,oParSolid)){
	        if(drawline) draw_circle( xx, yy , size*3, false);
	        return false;
	   }else{
	        if(drawline) draw_circle( xx, yy , size, false);
	   }
	}

	draw_set_colour(c);

	return true;

 



}
