#define LED_AZUL 3
#define LED_VERDE 4
#define LED_VERM 5
#define SENSOR A5
void setup(){
	pinMode(LED_AZUL, OUTPUT);
  	pinMode(LED_VERDE, OUTPUT);
  	pinMode(LED_VERM, OUTPUT);
  	pinMode(SENSOR, INPUT);
        
}

void loop(){
	int temperatura = analogRead(SENSOR);
  	temperatura = map(temperatura,20,358,-40,125);
  
 if (temperatura<10){digitalWrite(LED_AZUL, HIGH);}
  else{digitalWrite(LED_AZUL, LOW);}
 if (temperatura >= 10 && temperatura < 30){digitalWrite(LED_VERDE, HIGH);}
  else{digitalWrite(LED_VERDE, LOW);}
 if (temperatura >= 30){digitalWrite(LED_VERM, HIGH);}
  else{digitalWrite(LED_VERM, LOW);}
    
}
  
