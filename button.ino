int button = D1;  
int led = D7;

 void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
    bool button_state=digitalRead(button); // works with ‘int button_state=...’ as well
    digitalWrite(led, button_state);
}
