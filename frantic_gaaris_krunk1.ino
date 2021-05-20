// C++ code
//
byte pins[8]={2, 3, 4, 5,6,7,8,9};

void setup()
{
  for (byte i = 0; i < 8; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}

void loop()
{
  for(byte i = 0; i < sizeof(pins); i++){
  	digitalWrite(pins[i], HIGH);
	delay(1000);
    digitalWrite(pins[i], LOW);
  }
}
