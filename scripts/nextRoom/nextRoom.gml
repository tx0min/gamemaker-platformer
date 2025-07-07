/// @description nextRoom()
function nextRoom() {
	if(instance_exists(oGame)){
	    oGame.gameover=false;
	    oGame.gamestarted=false;
	}
	if (room == room_last)
	    room_goto(room_first);
	else
	    room_goto_next();



}
