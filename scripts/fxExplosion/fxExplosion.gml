/// @description fxExplosion(x,y)
/// @param x
/// @param y
function fxExplosion(argument0, argument1) {

	var xx=argument0;
	var yy=argument1;

	repeat(10){
	    instance_create(xx-16+random(32),yy-16+random(32),oFxExplosion);
	}

	part_particles_create(oParticles.system, xx , yy, oParticles.explosionCenter,2);
	screenShake();
	audio_play_sound(sndExplosion,1,false);



}
