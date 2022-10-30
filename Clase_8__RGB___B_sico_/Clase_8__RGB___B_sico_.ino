/*Clase 8 RGB Basico 

*/
#define VERDE 5
#define AZUL 6
#define ROJO 3
#define espera 1000

void setup() {
  
pinMode (ROJO, OUTPUT);
pinMode (VERDE, OUTPUT);
pinMode (AZUL, OUTPUT);

digitalWrite(VERDE, LOW);
digitalWrite(AZUL, LOW); 
digitalWrite(ROJO, LOW); 
}

void loop() {
digitalWrite(VERDE, HIGH); 
digitalWrite(AZUL, LOW); 
digitalWrite(ROJO, LOW); 
delay (espera); 
digitalWrite(VERDE, LOW); 
digitalWrite(AZUL, HIGH); 
digitalWrite(ROJO, LOW); 
delay (espera); 
digitalWrite(VERDE, LOW); 
digitalWrite(AZUL, LOW); 
digitalWrite(ROJO, HIGH); 
delay(espera); 

}
