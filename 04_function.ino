int pin=D1;
int led=D0;
int button_state;

void setup(){
  pinMode(pin, INPUT_PULLDOWN);		
  pinMode(led, OUTPUT);
}

void loop(){
  if(digitalRead(pin)==HIGH){
  blink(); //call the function
  } 
}
void blink(){   //construct function
	digitalWrite(led, HIGH);
	delay(100);
	digitalWrite(led, LOW);
	delay(100);
}
