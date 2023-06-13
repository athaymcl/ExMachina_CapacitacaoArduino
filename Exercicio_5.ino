#include <LiquidCrystal.h>
#define IR 9
#define LED 10


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
  
void setup()
{ 
  Serial.begin(9600);
  lcd.begin(16, 2); //inicia lcd
  pinMode(IR,INPUT);
  pinMode(LED, OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Objeto");
}

void loop()
{ 
 
 bool valor_sensor = digitalRead(IR); 
  if(valor_sensor){
    digitalWrite(LED,HIGH);
    lcd.setCursor(0,1);
    lcd.print("detectado    ");
    
 }else{
   digitalWrite(LED,LOW);
    lcd.setCursor(0,1);
    lcd.print("nao detectado");
    
              }
}