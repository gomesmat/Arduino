int leds = 8; // pino de leds

light_mng(String cmd){
	switch (cmd){
		case "on":
			if (!digitalRead(leds)){
			// codigo aqui
			}
			break;
		case "off":
			if (digitalRead(leds)){
			// codigo aqui
			}
			break;
		default
			return;
	}
}
