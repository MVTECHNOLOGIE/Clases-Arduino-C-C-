int lectura = A0;
int por ;
void setup() {
  Serial.begin(9600); //Iniciamos la comunicación serial
  pinMode(lectura, INPUT);
}

void loop() {
  
  lectura = analogRead(A0); //La lectura del voltaje sera de 0V a 5V el cual es leido en 10bits
  Serial.print("El Valor LDR es: ");//Imprimimos por monitor serie el valor
  Serial.println(lectura);//Imprimimos LECTURA
  
  por =map (lectura,0,1023,0,100); //redondeamos de 0 a 100
  Serial.print("LUZ SOLAR: ");//Imprimimos por monitor serie el valor
  Serial.print(por);//Imprimimos LECTURA
  Serial.println("%");//Imprimimos por monitor serie el valor
  
  delay(1000);
}
