/// @description  drawBulletPath(x,y,angle,speed,weight,[color,linesize,gap,dotsize])
/// @param x
/// @param y
/// @param angle
/// @param speed
/// @param weight
/// @param [color
/// @param linesize
/// @param gap
/// @param dotsize]
function drawBulletPath() {
 
	 var x1=argument[0];
	 var y1=argument[1];
	 var angle=argument[2];
	 var bspeed=argument[3];
	 var weight=argument[4];
 
	 //log(x1,y1,angle,bspeed,weight);
 
	  var color=c_red;
	 if(argument_count>5) color=argument[5];
 
 
	 var linesize=1;
	 if(argument_count>6) linesize=argument[6];
 
 
	 var gap=0;
	 if(argument_count>7) gap=max(0,argument[7]);


	 var dotsize=3;
	 if(argument_count>8) dotsize=max(3,argument[8]);

 

 
	var c=draw_get_colour();
	draw_set_colour(color);

	var endpath=false;

	var i=1;

	var hsp= lengthdir_x(bspeed,angle);
	var vsp= lengthdir_y(bspeed,angle);
	var xx=x1;
	var yy=y1;
	var xold=xx;
	var yold=yy;

	while(!endpath){
	    if(position_meeting(xx,yy,oParSolid) or !inView(xx,yy)){
	        draw_circle( xx, yy , dotsize*3, false);
	        endpath =true;
	    }else{
	        if(gap>0 && (i mod gap==0)){
	            if(dotsize>1){
	               draw_circle( xx, yy , dotsize, false);
	            } else{
	                draw_point(xx,yy);
	            }
	         }
	        if(weight!=0){
	            if(vsp<10) vsp+= weight * global.grav ;
            
	        }
        
	        xx += hsp;
	        yy += vsp;
        
	        if(linesize>0) draw_line(xold,yold,xx,yy);
	        xold=xx;
	        yold=yy;
	    }
	    i++;
        
	}
 


	draw_set_colour(c);

	return true;

 



}
