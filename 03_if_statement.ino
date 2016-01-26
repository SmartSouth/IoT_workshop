int pin=D0;
int led=D1;
int button_state;

void setup(){
pinMode(pin, INPUT_PULLDOWN);		
pinMode(led, OUTPUT);
}

void loop(){
button_state=digitalRead(pin);
if(button_state==HIGH){
	digitalWrite(led, HIGH)
} else {
	digitalWrite(led, LOW)
}
}
