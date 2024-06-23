int citit;
const int LED7 = 7;
const int LED8 = 8;
const int LED9 = 9;
const int LED10 = 10;
const int LED11 = 11;
const int LED12 = 12;


void setup() {
//resets
pinMode(A2,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(A5,OUTPUT);
pinMode(A0,OUTPUT);
//sets
pinMode(2,OUTPUT);
pinMode(13,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

//LEDs
pinMode(LED7,OUTPUT);
pinMode(LED8,OUTPUT);
pinMode(LED9,OUTPUT);
pinMode(LED10,OUTPUT);
pinMode(LED11,OUTPUT);
pinMode(LED12,OUTPUT);

Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    citit = Serial.read(); // Citește un caracter de la portul serial

    // ECU2
    if (citit == '2') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(2, HIGH); delay(10); digitalWrite(2, LOW);
      digitalWrite(LED8, HIGH);
      Serial.println("set Sensor 2");
    }
    // ECU1
    else if (citit == '1') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(13, HIGH); delay(10); digitalWrite(13, LOW);
      digitalWrite(LED7, HIGH);
      Serial.println("set Sensor 1");
    }
    // ECU3
    else if (citit == '3') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(3, HIGH); delay(10); digitalWrite(3, LOW);
      digitalWrite(LED9, HIGH);
      Serial.println("set Sensor 3");
    }
    // ECU4
    else if (citit == '4') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(4, HIGH); delay(10); digitalWrite(4, LOW);
      digitalWrite(LED10, HIGH);
      Serial.println("set Sensor 4");
    }
    // ECU5
    else if (citit == '5') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(5, HIGH); delay(10); digitalWrite(5, LOW);
      digitalWrite(LED11, HIGH);
      Serial.println("set Sensor 5");
    }
    // ECU6
    else if (citit == '6') {
      resetAllPins();
      turnOffAllLEDs();
      digitalWrite(6, HIGH); delay(10); digitalWrite(6, LOW);
      digitalWrite(LED12, HIGH);
      Serial.println("set Sensor 6");
    }
    // Deconectare ECU
    else if (citit == 'd') {
      resetAllPins();
      turnOffAllLEDs();
      Serial.println("disconect ECU");
    }
  }
}

void resetAllPins() {
  delay(10);
  digitalWrite(A2, HIGH); delay(10); digitalWrite(A2, LOW);
  digitalWrite(A1, HIGH); delay(10); digitalWrite(A1, LOW);
  digitalWrite(A3, HIGH); delay(10); digitalWrite(A3, LOW);
  digitalWrite(A4, HIGH); delay(10); digitalWrite(A4, LOW);
  digitalWrite(A5, HIGH); delay(10); digitalWrite(A5, LOW);
  digitalWrite(A0, HIGH); delay(10); digitalWrite(A0, LOW);
}

void turnOffAllLEDs() {
  delay(10);
  digitalWrite(LED7, LOW); delay(10);
  digitalWrite(LED8, LOW); delay(10);
  digitalWrite(LED9, LOW); delay(10);
  digitalWrite(LED10, LOW); delay(10);
  digitalWrite(LED11, LOW); delay(10);
  digitalWrite(LED12, LOW); delay(10);
}

