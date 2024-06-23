//char citit[] = "default";
int readVoltageLeft = 1;
int readVoltageRight = 1;
int readWakeUp = 1;
int readPinPos0Left = 1;
int readPinPos1Left = 1;
int readPinPos2Left = 1;
int readPinPos0Right = 1;
int readPinPos1Right = 1;
int readPinPos2Right = 1;
int readEthernetLinkDownLeft = 1;
int readEthernetLinkDownRight =1;
int readVCANBus = 1;
int readPCANBus = 1;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 
  digitalWrite(A0,LOW);
  digitalWrite(A1,LOW);
  Serial.begin(9600);
}
void loop() {
 
  if(Serial.available()>0)
  {
   String citit = Serial.readString();
   citit.trim();
   if(citit == "esti?")
   {
    Serial.println("sunt");
   }
   else if(citit == "damivalori")
   {
    int variabila = ((readVoltageLeft) | (readVoltageRight << 1) | (readWakeUp << 2) | (readPinPos0Left << 3) | (readPinPos1Left << 4) | (readPinPos2Left << 5)| (readPinPos0Right << 6) | (readPinPos1Right << 7) | (readPinPos2Right << 8) | (readEthernetLinkDownLeft << 9) | (readEthernetLinkDownRight << 10) | (readVCANBus << 11) | (readPCANBus << 12));
    Serial.println(variabila);
   }
   else if(citit == "VoltageLeftOn")
   {
      digitalWrite(A0,LOW);
      delay(10); 
      Serial.println("Comute Voltage Left On");
      readVoltageLeft = 1;
   }
   else if(citit == "VoltageLeftOff")
   {
      digitalWrite(A0,HIGH);
      delay(10);
      Serial.println("Comute Voltage Left Off");
      readVoltageLeft = 0;
   }
   else if(citit == "VoltageRightOn")
   {
      digitalWrite(A1,LOW);
      delay(10); 
      Serial.println("Comute Voltage Right On");
      readVoltageRight = 1;
   }
   else if(citit == "VoltageRightOff")
   {
      digitalWrite(A1,HIGH);
      delay(10);
      Serial.println("Comute Voltage Right Off");
      readVoltageRight = 0;
   }
   else if(citit == "WakeUpOn")
   {
      digitalWrite(A2,LOW);
      delay(10); 
      Serial.println("Comute Wake Up On");
      readWakeUp = 1;
   }
   else if(citit == "WakeUpOff")
   {
      digitalWrite(A2,HIGH);
      delay(10);
      Serial.println("Comute Wake Up Off");
      readWakeUp = 0;
   }
   else if(citit == "PinPos0LeftOn")
   {
      digitalWrite(A3,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 0 Left On");
      readPinPos0Left = 1;
   }
   else if(citit == "PinPos0LeftOff")
   {
      digitalWrite(A3,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 0 Left Off");
      readPinPos0Left = 0;
   }
   else if(citit == "PinPos1LeftOn")
   {
      digitalWrite(A4,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 1 Left On");
      readPinPos1Left = 1;
   }
   else if(citit == "PinPos1LeftOff")
   {
      digitalWrite(A4,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 1 Left Off");
      readPinPos1Left = 0;
   }
   else if(citit == "PinPos2LeftOn")
   {
      digitalWrite(A5,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 2 Left On");
      readPinPos2Left = 1;
   }
   else if(citit == "PinPos2LeftOff")
   {
      digitalWrite(A5,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 2 Left Off");
      readPinPos2Left = 0;
   }
   else if(citit == "PinPos0RightOn")
   {
      digitalWrite(2,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 0 Right On");
      readPinPos0Right = 1;
   }
   else if(citit == "PinPos0RightOff")
   {
      digitalWrite(2,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 0 Right Off");
      readPinPos0Right = 0;
   }
   else if(citit == "PinPos1RightOn")
   {
      digitalWrite(3,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 1 Right On");
      readPinPos1Right = 1;
   }
   else if(citit == "PinPos1RightOff")
   {
      digitalWrite(3,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 1 Right Off");
      readPinPos1Right = 0;
   }
   else if(citit == "PinPos2RightOn")
   {
      digitalWrite(4,LOW);
      delay(10); 
      Serial.println("Comute Pin Pos 2 Right On");
      readPinPos2Right = 1;
   }
   else if(citit == "PinPos2RightOff")
   {
      digitalWrite(4,HIGH);
      delay(10);
      Serial.println("Comute Pin Pos 2 Right Off");
      readPinPos2Right = 0;
   }
   else if(citit == "EthernetLinkDownLeftOn")
   {
      digitalWrite(5,LOW);
      digitalWrite(9,LOW);
      delay(10);
      Serial.println("Disconnect ETH High on Left");
      readEthernetLinkDownLeft = 1;
   }
   else if(citit == "EthernetLinkDownLeftOff")
   {
      digitalWrite(5,HIGH);
      digitalWrite(9,HIGH);
      delay(10);
      Serial.println("Connect ETH High on Left");
      readEthernetLinkDownLeft = 0;
   }
   else if(citit == "EthernetLinkDownRightOn")
   {
      digitalWrite(6,LOW);
      digitalWrite(10,LOW);
      delay(10);
      Serial.println("Disconnect ETH High on Right");
      readEthernetLinkDownRight = 1;
   }
   else if(citit == "EthernetLinkDownRightOff")
   {
      digitalWrite(6,HIGH);
      digitalWrite(10,HIGH);
      delay(10);
      Serial.println("Connect ETH High on Right");
      readEthernetLinkDownRight = 0;
   }
   else if(citit == "VCANBussOff")
   {
      digitalWrite(7,LOW);
      delay(10);
      Serial.println("VCAN Buss Off");
      readVCANBus = 1;
   }
   else if(citit == "VCANBussOn")
   {
      digitalWrite(7,HIGH);
      delay(10);
      Serial.println("VCAN Buss On");
      readVCANBus = 0;
   }
   else if(citit == "PCANBussOff")
   {
      digitalWrite(8,LOW);
      delay(10);
      Serial.println("PCAN Buss Off");
      readPCANBus = 1;
   }
   else if(citit == "PCANBussOn")
   {
      digitalWrite(8,HIGH);
      delay(10);
      Serial.println("PCAN Buss On");
      readPCANBus = 0;
   }
   else
   {
      Serial.println("Do nothing");
   }
  }
  } 
