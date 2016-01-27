int R;
int G;
int B;


void setup(){
RGB.control(true);
}

void loop(){
R = random(255);
G = random(255);
B = random(255);
RGB.color(R,G,B);
delay(random(100,500));
}
