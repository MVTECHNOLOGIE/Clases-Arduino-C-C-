int button1 = 8;     
int button2 = 9;     

int ledPin1 =  5;      
int ledPin2 =  3;      
int ledPin3 =  4;      

int buttonState1;
int buttonState2;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button1, INPUT);
}

void loop() {
  
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);

  if (buttonState1 == HIGH &! buttonState2 == LOW) {
    digitalWrite(ledPin1, HIGH);
    Serial.println("Led Rojo Encendido");
    delay(200);
  } else {
    digitalWrite(ledPin1, LOW);
  }
    if (buttonState2 == LOW &! buttonState1 == HIGH ) {
    digitalWrite(ledPin2, HIGH);
    Serial.println("Led Verde Encendido");
    delay(200);
  } else {
    digitalWrite(ledPin2, LOW);
  }
    if (buttonState1 == HIGH && buttonState2 == LOW) {
    digitalWrite(ledPin3, HIGH);
    Serial.println("Led AZul Encendido");
    delay(200);
  } else {
    digitalWrite(ledPin3, LOW);
  }
}
