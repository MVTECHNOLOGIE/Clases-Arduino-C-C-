// Incluimos librería
#include <DHT.h>

#define LED 13
#define DHTPIN 5
#define DHTTYPE DHT11

float hum; 
float temp;
float fahr; 
float Icf;
float Icc;

DHT dht(DHTPIN, DHTTYPE); //  DHT11
void setup() { 
  Serial.begin(9600);   // Inicializamos comunicación serie
  dht.begin();// Inicializa el sensor DHT
  pinMode(LED,OUTPUT);
 
}
 
void loop() {
    
  delay(1000); // Esperamos 5 segundos entre medidas
  
  hum = dht.readHumidity();  //Humedad relativa
  temp = dht.readTemperature(); // Temperatura en grados centígrados (por defecto)
  fahr = dht.readTemperature(true); // Temperatura en grados Fahreheit
  
  Icf = dht.computeHeatIndex(fahr, hum); //Índice de calor en Fahreheit 
  Icc = dht.computeHeatIndex(temp, hum, false); //Índice de calor en grados centígrados
 
  // Comprobamos si ha habido algún error en la lectura
  if (isnan(hum) || isnan(temp) || isnan(fahr)) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }
  
  Serial.print("Humedad: ");
  Serial.print(hum);
  Serial.println("%");
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.print("°C - ");
  Serial.print(fahr);
  Serial.println("°F");
  Serial.print("Sensación térmica: ");
  Serial.print(Icc);
  Serial.print("°C - ");
  Serial.print(Icf);
  Serial.println("°F");
  
   if (temp >= 30){
    digitalWrite(LED,HIGH);
    }
    else{
      digitalWrite(LED,LOW);
      }
}
