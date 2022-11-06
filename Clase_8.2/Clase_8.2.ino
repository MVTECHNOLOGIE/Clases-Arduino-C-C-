/*Clase 8.2 RGB Basico 
Hay que destacar en este código la función void Color() que nos servirá
para definir las mezclas de luces coloreadas (G, B, R).
 
 */


//Pines

#define VERDE 5
#define AZUL 6
#define ROJO 3


void setup() {
  
pinMode (ROJO, OUTPUT);
pinMode (VERDE, OUTPUT);
pinMode (AZUL, OUTPUT);

digitalWrite(VERDE, LOW);
digitalWrite(AZUL, LOW); 
digitalWrite(ROJO, LOW); 
}

void Color(int G, int B, int R){   
    
  analogWrite(VERDE, G) ;  // Green - Verde 
  analogWrite(AZUL, B) ;   // Blue - Azul
  analogWrite(ROJO, R) ;   // Red - Rojo
  
}

void loop() {    
  Color(random(255), random(255), random(255)) ;
  delay(400);
   }
