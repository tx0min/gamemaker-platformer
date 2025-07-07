function restartRoom() {
	//restartRoom()
	if(instance_exists(oGame)){
	    if(oGame.gameover) oGame.currenthp=oGame.maxhp;
	    oGame.gameover=false;
	    oGame.gamestarted=false;
	}
	room_restart();



}
