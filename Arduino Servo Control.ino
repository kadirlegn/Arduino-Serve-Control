//kadirbeyz
//https://github.com/kadirbeyz
#include<Servo.h>
Servo servo1;
int aci;
 
void setup() {
 servo1.attach(5);
}
 
void loop() {
 
for(aci=0;aci<=180;aci+=1){
servo1.write(aci);
delay(100);
}
for(aci=180;aci>=0;aci-=1){
servo1.write(aci);
delay(100);
}
 
}