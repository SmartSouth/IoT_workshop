int led = D7;

void setup()
{
   pinMode(led, OUTPUT);
   Spark.function("led",ledToggle);
   digitalWrite(led, LOW);

}

void loop()
{
   // Nothing to do here
}

int ledToggle(String command) {

	if (command=="on") {
			digitalWrite(led, HIGH);
		} else if (command=="off") {
			digitalWrite(led, LOW);
			}
		}
