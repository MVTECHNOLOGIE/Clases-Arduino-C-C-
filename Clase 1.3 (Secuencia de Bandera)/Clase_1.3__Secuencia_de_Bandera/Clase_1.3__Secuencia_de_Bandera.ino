const int pines[] = {4, 5, 6, 7, 8, 9}; // Definir los pines de los LED
const int intervalo = 40; // Intervalo de tiempo en milisegundos

void setup() {
  // Inicializar los pines de los LED como salidas
  for (int i = 0; i < 6; i++) {
    pinMode(pines[i], OUTPUT);
  }
}

void loop() {
  // Recorrer la lista de pines y encender cada LED
  for (int i = 0; i < 6; i++) {
    digitalWrite(pines[i], HIGH);
    delay(intervalo);
  }
  // Recorrer la lista de pines en orden inverso y apagar cada LED
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pines[i], LOW);
    delay(intervalo);
  }
}
