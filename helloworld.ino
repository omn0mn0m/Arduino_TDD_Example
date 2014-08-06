#include <Serial>
#include "Localization.h"

Localization localization;

void setup() {
	Serial.begin(9600);
	while (!Serial) { 
		/* wait for serial  port to initialize on Leonardo */ 
	}
  Serial.println(localization.GetGreeting(ENGLISH));
}

void loop() {
}