int leds = 8; // pino de leds

light_mng(String cmd){
	switch (cmd){
		case "on":
			if (!digitalRead(leds)){
				//
			}
			break;
		case "off":
			if (digitalRead(leds)){
				//
			}
			break;
		default
			return;
	}
}
