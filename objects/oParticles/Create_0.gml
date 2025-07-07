/// @description Init particles system
system = part_system_create();

//create 3 particles
explosionCenter = createPartTypeSprite(sExplosionCenter, true, 30,30,.6,.8,-.001);
explosionParticle = createPartTypeSprite(sExplosion,true, 15,20,.5,1,-.01);
smokeParticle = createPartTypeSprite(sDust,true, 15,15,.5,1,-.01);


