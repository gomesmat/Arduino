int leds = 8; // pino de leds

light_mng(String cmd){
	if (cmd == "on"){
		if (!digitalRead(leds)){
			// codigo aqui
		}
	}
	if (cmd == "off"{
		if (digitalRead(leds)){
			// codigo aqui
		}
	}
}
