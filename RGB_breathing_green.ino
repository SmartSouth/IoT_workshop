void setup() {
    RGB.control(true);
    RGB.color(0,255,0);
    RGB.brightness(0);
}

void loop() {
    int x = 1;
    for(int i=0; i<=255; i=i+x){
        RGB.brightness(i);
        if(i==254){
         x=-1;       
         } else if(i==0){
         x=1;     
         }
        delay(10);
    }

}
