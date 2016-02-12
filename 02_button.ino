int button = D1;  
int led = D7;

 void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
    int button_state=digitalRead(button); // works with ‘bool button_state=...’ as well
    digitalWrite(led, button_state);
}
