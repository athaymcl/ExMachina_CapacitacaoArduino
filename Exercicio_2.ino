#include <Servo.h>
#define PINO_SERVO 5
#define PINO_POT A5

Servo servo1;

void setup()
{
  Serial.begin(9600);
  servo1.attach(PINO_SERVO);
  
}

void loop()
{
  int angulo = analogRead(PINO_POT);
  angulo = map(angulo, 0, 1023, 0, 180);
  servo1.write(angulo);
  Serial.print("Angulo em graus:");
  Serial.println(angulo);
  delay(500); //para haver variação temporal
}