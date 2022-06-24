int trigger = 8;      // Trigger en pin 8
int echo = 9;      // Echo en pin 9

int DURACION;
int DISTANCIA;

void setup(){
  
  Serial.begin(9600);         // inicializacion la comunicacion serial a 9600
  pinMode(trigger, OUTPUT);  // Declaramos Tigger como salida
  pinMode(echo, INPUT);     // Declaramos Echo como entrada
}

void loop()
{
  digitalWrite(trigger, HIGH);   // Generación del pulso alto a enviar
  delay(1);                     // retardo de milisegundo
  digitalWrite(trigger, LOW);  // Generación del pulso najp a enviar
  
  DURACION = pulseIn(echo, HIGH);   // sera igual al pulso de entrada 
                                   // alto en Echo
  DISTANCIA = DURACION / 58.2;    // distancia medida en centimetros
  
  Serial.print("DISTANCIA: "); // Texto Distancia:  
  Serial.print(DISTANCIA);    // envio de valor de distancia por monitor serial
  Serial.println(" cm");     // Texto cm
  
  delay(1000);               // Tiempo de espera 
}
