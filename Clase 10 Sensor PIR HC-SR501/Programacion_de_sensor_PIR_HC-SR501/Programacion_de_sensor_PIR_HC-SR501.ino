int pirPin = 2; // Pin digital al que está conectado el sensor PIR
int ledPin = 5; // Pin digital al que está conectado el LED

void setup() {
  pinMode(pirPin, INPUT); // Configurar el pin del PIR como entrada
  pinMode(ledPin, OUTPUT); // Configurar el pin del LED como salida
}

void loop() {
  if (digitalRead(pirPin) == HIGH) { // Si se detecta movimiento
    digitalWrite(ledPin, HIGH); // Encender el LED
    delay(1000); // Esperar un segundo
  }
  digitalWrite(ledPin, LOW); // Apagar el LED
}
