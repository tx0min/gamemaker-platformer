function __global_object_depths() {
	// Initialise the global array that allows the lookup of the depth of a given object
	// GM2.0 does not have a depth on objects so on import from 1.x a global array is created
	// NOTE: MacroExpansion is used to insert the array initialisation at import time
	gml_pragma( "global", "__global_object_depths()");

	// insert the generated arrays here
	global.__objectDepths[0] = 0; // oParSolid
	global.__objectDepths[1] = 0; // oParJumpThru
	global.__objectDepths[2] = 0; // oParEntity
	global.__objectDepths[3] = 0; // oParRail
	global.__objectDepths[4] = -4; // oParWeapon
	global.__objectDepths[5] = 0; // oParEnemy
	global.__objectDepths[6] = 0; // oPlatform
	global.__objectDepths[7] = 0; // oMovingPlatform
	global.__objectDepths[8] = 0; // oSlope1L
	global.__objectDepths[9] = 0; // oSlope2_1
	global.__objectDepths[10] = 0; // oSlope2_2
	global.__objectDepths[11] = 0; // oBlock
	global.__objectDepths[12] = 1; // oRail
	global.__objectDepths[13] = 1; // oRailStopper
	global.__objectDepths[14] = -2; // oMachinegun
	global.__objectDepths[15] = -2; // oTripleMachinegun
	global.__objectDepths[16] = -2; // oUzi
	global.__objectDepths[17] = -2; // oLaserGun
	global.__objectDepths[18] = -2; // oRevolver
	global.__objectDepths[19] = -2; // oSlingshot
	global.__objectDepths[20] = -2; // oShotgun
	global.__objectDepths[21] = -2; // oBazooka
	global.__objectDepths[22] = -2; // oFlameThrow
	global.__objectDepths[23] = -4; // oBullet
	global.__objectDepths[24] = -5; // oFxSparkle
	global.__objectDepths[25] = -5; // oFxSplatter
	global.__objectDepths[26] = -5; // oFxDust
	global.__objectDepths[27] = -9999999; // oFxSlider
	global.__objectDepths[28] = -10; // oFxFadeInStd
	global.__objectDepths[29] = -2; // oFxPuddle
	global.__objectDepths[30] = 0; // oParticles
	global.__objectDepths[31] = 0; // oFxExplosion
	global.__objectDepths[32] = 0; // oLight
	global.__objectDepths[33] = -10; // oGame
	global.__objectDepths[34] = -1000005; // oLightController
	global.__objectDepths[35] = -5; // oCamera
	global.__objectDepths[36] = 0; // oPlayerSpawn
	global.__objectDepths[37] = -1; // oPlayer
	global.__objectDepths[38] = 0; // oEnemy
	global.__objectDepths[39] = 0; // oEnemyMoving
	global.__objectDepths[40] = 0; // oPortal
	global.__objectDepths[41] = 0; // oHealth


	global.__objectNames[0] = "oParSolid";
	global.__objectNames[1] = "oParJumpThru";
	global.__objectNames[2] = "oParEntity";
	global.__objectNames[3] = "oParRail";
	global.__objectNames[4] = "oParWeapon";
	global.__objectNames[5] = "oParEnemy";
	global.__objectNames[6] = "oPlatform";
	global.__objectNames[7] = "oMovingPlatform";
	global.__objectNames[8] = "oSlope1L";
	global.__objectNames[9] = "oSlope2_1";
	global.__objectNames[10] = "oSlope2_2";
	global.__objectNames[11] = "oBlock";
	global.__objectNames[12] = "oRail";
	global.__objectNames[13] = "oRailStopper";
	global.__objectNames[14] = "oMachinegun";
	global.__objectNames[15] = "oTripleMachinegun";
	global.__objectNames[16] = "oUzi";
	global.__objectNames[17] = "oLaserGun";
	global.__objectNames[18] = "oRevolver";
	global.__objectNames[19] = "oSlingshot";
	global.__objectNames[20] = "oShotgun";
	global.__objectNames[21] = "oBazooka";
	global.__objectNames[22] = "oFlameThrow";
	global.__objectNames[23] = "oBullet";
	global.__objectNames[24] = "oFxSparkle";
	global.__objectNames[25] = "oFxSplatter";
	global.__objectNames[26] = "oFxDust";
	global.__objectNames[27] = "oFxSlider";
	global.__objectNames[28] = "oFxFadeInStd";
	global.__objectNames[29] = "oFxPuddle";
	global.__objectNames[30] = "oParticles";
	global.__objectNames[31] = "oFxExplosion";
	global.__objectNames[32] = "oLight";
	global.__objectNames[33] = "oGame";
	global.__objectNames[34] = "oLightController";
	global.__objectNames[35] = "oCamera";
	global.__objectNames[36] = "oPlayerSpawn";
	global.__objectNames[37] = "oPlayer";
	global.__objectNames[38] = "oEnemy";
	global.__objectNames[39] = "oEnemyMoving";
	global.__objectNames[40] = "oPortal";
	global.__objectNames[41] = "oHealth";


	// create another array that has the correct entries
	var len = array_length_1d(global.__objectDepths);
	global.__objectID2Depth = [];
	for( var i=0; i<len; ++i ) {
		var objID = asset_get_index( global.__objectNames[i] );
		if (objID >= 0) {
			global.__objectID2Depth[ objID ] = global.__objectDepths[i];
		} // end if
	} // end for


}
