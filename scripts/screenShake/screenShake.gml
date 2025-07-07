/// @description screenShake([size])
/// @param [size]
function screenShake() {
	var size=5;
	if(argument_count>0) size=argument[0];

	if(instance_exists(oCamera)){
	    with(oCamera){
	        shakepower=size;
	        isshaking=true
	        alarm[0]=30;
	    }
	}



}
