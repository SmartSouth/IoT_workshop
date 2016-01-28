int led1 = D7;
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

	if (command=="on") {
			digitalWrite(led1, HIGH);
		    return 1;
		} else if (command=="off") {
			digitalWrite(led1, LOW);
			state = 0; 
			return 0;
			} else {
			    return -1;
			}
		}
