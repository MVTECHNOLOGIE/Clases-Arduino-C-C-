#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  //  o 0x3F

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
   
   // Ubicamos el cursor en la primera posición(columna:2) de la segunda línea(fila:0)
  lcd.blink();
  lcd.setCursor(2, 0);
  lcd.print("Suscribete a");
  lcd.setCursor(0, 1);// Ubicamos el cursor en la primera posición(columna:2) de la segunda línea(fila:0)
  lcd.print("M&V TECHNOLOGIE");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Activa: Campana");
  lcd.setCursor(0, 1);// Ubicamos el cursor en la primera posición(columna:2) de la segunda línea(fila:0)
  lcd.print("M&V TECHNOLOGIE");
  delay(2000);
  lcd.noBlink();
  lcd.clear();
}
