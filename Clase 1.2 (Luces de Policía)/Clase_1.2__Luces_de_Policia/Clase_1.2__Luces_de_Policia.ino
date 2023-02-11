// Define los pines de los LED
const int leds[] = {4, 5, 6, 7, 8, 9};
int Tiempo = 40;

void setup() {
  // Inicializa los pines de los LED como salidas
  for (int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Enciende los LED en secuencia
  for (int i = 0; i < 6; i++) {
    digitalWrite(leds[i], HIGH);
    delay(Tiempo);
    digitalWrite(leds[i], LOW);
  }
  // Enciende los LED en orden inverso
  for (int i = 5; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(Tiempo);
    digitalWrite(leds[i], LOW);
  }
}
