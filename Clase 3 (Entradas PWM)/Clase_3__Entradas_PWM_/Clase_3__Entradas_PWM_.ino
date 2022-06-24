int LED = 9;        
int INT;
int POT = A0;     
int INT2;
  
void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT); 
}
void loop(){
  Serial.print("Valor:");
  Serial.println(INT2);
  INT2= map(INT,0,255,0,100);
  INT = analogRead(POT) / 4; // 255
  analogWrite(LED, INT);
}
