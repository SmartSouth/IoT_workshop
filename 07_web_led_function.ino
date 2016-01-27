int led1 = D0; //create variable for the LED pin
int state = 0;

void setup()
{
   pinMode(led1, OUTPUT);
   Spark.function("led",ledToggle);
   digitalWrite(led1, LOW);
}

void loop()
{
   // Nothing to do here
}

int ledToggle(String command) {
	if (command=="toggle") {
   		if (state == 0){
			state = 1;
			digitalWrite(led1, HIGH);
			return 1;
		} else {
			state = 0;
			digitalWrite(led1, LOW);
			return 0;
			}
    }
}
