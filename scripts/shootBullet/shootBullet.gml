/// @description shootBullet(x,y)
/// @param x
/// @param y
function shootBullet(argument0, argument1) {
	var xout=argument0;
	var yout=argument1;

	var angleinc=bulletConeAngle/bulletNumber;
	var angleini=image_angle - bulletConeAngle/2;
	if(bulletNumber==1) angleini=image_angle;


	screenShake(damage);
	audio_play_sound(bulletSound,1,false);


	for(var j=0;j<bulletNumber;j++){
    
	    var bullet=instance_create(xout,yout,oBullet);
	    var angle= angleini + j*angleinc;
    
    
	    if(bulletDispersion>0) angle+=random_range(-bulletDispersion,bulletDispersion);
	    if(bulletLifetime > 0) bullet.alarm[0]=bulletLifetime;
    
	    //bullet.direction=angle;
	    bullet.xcenter=xout;
	    bullet.ycenter=yout;
    
	    bullet.image_angle=angle;
	    bullet.image_blend=bulletColor;
	    bullet.damage=damage;
	    bullet.sprite_index=bulletSprite;
	    bullet.sp=bulletSpeed;
	    bullet.weight=bulletWeight;
	    bullet.trail=bulletTrail;
	    bullet.explode=bulletExplode;
    
	    bullet.vsp =  lengthdir_y(bulletSpeed,angle);//-sin(anglerad)*bulletSpeed;
	    bullet.hsp =  lengthdir_x(bulletSpeed,angle);//cos(anglerad)*bulletSpeed;
    
   
    
    
    
	}




}
