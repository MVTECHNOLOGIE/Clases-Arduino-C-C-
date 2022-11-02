/*Clase 8.1 RGB Basico 
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
  Color(255,0,0);     //Green
  delay(1000);      
  Color(0,255 ,0);    //Blue
  delay(1000);
  Color(0,0,255);     //Red
  delay(1000);
  Color(0,0,0);       //Sin color o apagado 
  delay(3000);
  Color(0,255,148);   //Purple, NUESTRA PRIMERA MEZCLA
  delay(4000);
   }
