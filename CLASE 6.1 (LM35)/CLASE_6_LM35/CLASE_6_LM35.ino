float TEMP;
int LM35 = A0;
 
void setup() {
  
  Serial.begin(9600);
  pinMode(LM35,INPUT); 
  
} 
void loop() {
  
  TEMP = analogRead(LM35); 
  TEMP = (5.0 * TEMP * 100.0)/1024.0; 
  
  Serial.print("Temperatura: ");
  Serial.print(TEMP);
  Serial.println("°C");
  delay(2000);
  
}
