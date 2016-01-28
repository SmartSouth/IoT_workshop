int pot = A0; 
int analogvalue; 

void setup() {
    
    pinMode(pot,INPUT);      
    Spark.variable("analogvalue", &analogvalue, INT);
}

void loop() {
    analogvalue = analogRead(pot);
}

