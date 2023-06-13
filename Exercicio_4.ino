#include <Servo.h>
#define MINDINHO 5
#define ANELAR 6
#define MEDIO 9
#define INDICADOR 10
#define POLEGAR 11
#define POS 90

Servo servo1, servo2, servo3, servo4, servo5;

void dedosMao(int d1, int d2, int d3, int d4, int d5){
servo1.write(d1);
servo2.write(d2);
servo3.write(d3);
servo4.write(d4);
servo5.write(d5);
  
}

void setup()
{   
 servo1.attach(MINDINHO);
 servo2.attach(ANELAR);
 servo3.attach(MEDIO);
 servo4.attach(INDICADOR);
 servo5.attach(POLEGAR);
 dedosMao(POS,POS,POS,POS,POS);
   
}
void loop()
{ //Mão aberta 
  dedosMao(0,0,0,0,0);
  delay(2000);
  //Mão fechada
  dedosMao(180,180,180,180,180);
  delay(2000);
  //Thumbs Up
   dedosMao(180,180,180,180,0); 
   delay(2000);
  //Hang loose 
   dedosMao(0,180,180,180,0);
   delay(2000);  
  //Rock and roll
    dedosMao(0,180,180,0,180);
    delay(2000);
  //Fuck u
    dedosMao(180,180,0,180,180);
    delay(2000);
  //Peace and Love
    dedosMao(180,180,0,0,180);
  	delay(2500);

}