/// @description Create the explosion particles

part_particles_create(oParticles.system, x-8+random(16) , y-8+random(16), oParticles.explosionParticle,1);
part_particles_create(oParticles.system, x-8+random(16) , y-8+random(16), oParticles.smokeParticle,1);



//destroy the explosion
if(speed==0){
    instance_destroy();
}

