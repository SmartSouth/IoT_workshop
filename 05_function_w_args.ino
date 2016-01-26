int pin=D1;
int led=D0;
int button_state;

void setup(){
  pinMode(pin, INPUT_PULLDOWN);		
  pinMode(led, OUTPUT);
}

void loop(){
  if(digitalRead(pin)==HIGH){
  blink(500,500);                      //call the function
  } 
}
void blink(int on, int off){
	digitalWrite(led, HIGH);
	delay(on);
	digitalWrite(led, LOW);
	delay(off);
}
