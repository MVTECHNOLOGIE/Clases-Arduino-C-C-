int rojo = 4;
int ambar = 5;
int verde = 6;
int rojo_peatonal = 7;
int verde_peatonal = 8;
int buzzer = 3;

void setup() {
for(int i=2;i<=9;i++){ //SE INICIALIZAN TODOS LOS PINES COMO SALIDA
pinMode(i, OUTPUT);  
//pinMode(rojo, OUTPUT);
//pinMode(ambar, OUTPUT);
//pinMode(verde, OUTPUT);
//pinMode(rojo_peatonal, OUTPUT);
//pinMode(verde_peatonal, OUTPUT);
//pinMode(buzzer, OUTPUT);
}
}

void loop() {
// Rojo encendido
digitalWrite(rojo, HIGH);
digitalWrite(ambar, LOW);
digitalWrite(buzzer, LOW);
digitalWrite(verde_peatonal, HIGH);
delay(4000);

// buzzer y ámbar encendidos
digitalWrite(ambar, HIGH);
digitalWrite(buzzer, HIGH);
delay(3000);

// Rojo apagado, verde encendido
digitalWrite(rojo, LOW);
digitalWrite(verde_peatonal, LOW);
digitalWrite(verde, HIGH);
digitalWrite(rojo_peatonal, HIGH);
digitalWrite(ambar, LOW);
digitalWrite(buzzer, LOW);
delay(2000);

// Verde y ámbar encendidos
digitalWrite(ambar, HIGH);
digitalWrite(buzzer, HIGH);
delay(2000);

// Verde apagado
digitalWrite(verde, LOW);
digitalWrite(rojo_peatonal, LOW);
}
