#include <Servo.h>
#define PINO_SERVO 5
#define POS 180

Servo servo1;
  
void setup()
{
 Serial.begin(9600);
 while (!Serial);
 servo1.attach(PINO_SERVO);
 servo1.write(POS);
 
   
}

void loop()
{
  if(Serial.available()){
    String entrada = Serial.readString();
    Serial.println(entrada);
    int valor_atual = servo1.read();
  
    if(entrada == "hor"){
      for(int i=0; i<= 180; i++){
        while(valor_atual-1 >=0){
        valor_atual = valor_atual - 1;
        servo1.write(valor_atual);
        delay(50);
        }
      }
      }
    else if(entrada == "ant"){
      for(int i=0; i<=180; i++){
        while(valor_atual+1 <=180){
      valor_atual = valor_atual + 1;
      servo1.write(valor_atual);
      delay(50);
        }
      }
    } 
    else
      servo1.write(45);
    
    }	
}