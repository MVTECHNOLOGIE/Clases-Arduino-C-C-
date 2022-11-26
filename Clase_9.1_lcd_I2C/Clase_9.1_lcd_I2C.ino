#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  //  o 0x3F

byte feliz[]={
  0x00,
  0x00,
  0x0A,
  0x00,
  0x11,
  0x0E,
  0x00,
  0x00
};
byte triste[]={
  0x00,
  0x00,
  0x0A,
  0x00,
  0x00,
  0x0E,
  0x11,
  0x00
};
byte serio[]={ 
  0x00,
  0x00,
  0x0A,
  0x00,
  0x00,
  0x1F,
  0x00,
  0x00
  };
byte corazon[]={ 
  0x00,
  0x00,
  0x0A,
  0x1F,
  0x1F,
  0x0E,
  0x04,
  0x00
  };
byte humano []={
  0x0E,
  0x0E,
  0x0E,
  0x04,
  0x1F,
  0x04,
  0x0E,
  0x11
  };
byte bateria []={ 
  0x0E,
  0x11,
  0x11,
  0x13,
  0x17,
  0x1F,
  0x1F,
  0x1F
  };
byte Bocina []={ 
  0x02,
  0x06,
  0x1E,
  0x1E,
  0x1E,
  0x1E,
  0x06,
  0x02
  };
byte pulso []={ 
  0x01,
  0x05,
  0x15,
  0x15,
  0x15,
  0x15,
  0x05,
  0x01
  };

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(0,feliz);
  lcd.createChar(1,triste);
  lcd.createChar(2,serio);
  lcd.createChar(3,corazon);
  lcd.createChar(4,humano);
  lcd.createChar(5,bateria);
  lcd.createChar(6,Bocina);
  lcd.createChar(7,pulso);
}

void loop() {
   
  lcd.setCursor(3, 0);
  lcd.print("Caracteres");
  lcd.setCursor(1, 1);
  lcd.write(byte(0)); //feliz
  lcd.setCursor(3, 1);
  lcd.write(byte(1)); //triste
  lcd.setCursor(5, 1);
  lcd.write(byte(2)); //serio
  lcd.setCursor(7, 1);
  lcd.write(byte(3)); //corazon
  lcd.setCursor(9, 1);
  lcd.write(byte(4)); //humano
  lcd.setCursor(11, 1);
  lcd.write(byte(5)); //bateria
  lcd.setCursor(13, 1);
  lcd.write(byte(6)); //Bocina
  lcd.write(byte(7)); //pulso
  delay(2000);
  lcd.clear();
  
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
