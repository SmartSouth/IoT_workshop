int button_pin=D2;

void setup(){
  pinMode(button_pin, INPUT_PULLDOWN);
}
void loop(){
  int button_state = digitalRead(button_pin);
  if(button_state == HIGH){
      Spark.publish("switch");
    }
}
