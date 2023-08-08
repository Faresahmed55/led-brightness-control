const int ButtonPin1 = 8; 
const int ButtonPin2 = 9; 
const int ledPin = 6; 

int brightness = 128; 

void setup() {
  pinMode(ButtonPin1, INPUT);
  pinMode(ButtonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  analogWrite(ledPin, brightness); 
}

void loop() {
  if (digitalRead(ButtonPin1) == HIGH) { 
    brightness = constrain(brightness + 10, 0, 255);
    analogWrite(ledPin, brightness);
    delay(100); 
  }
  
  if (digitalRead(ButtonPin2) == HIGH) { 
    brightness = constrain(brightness - 10, 0, 255);
    analogWrite(ledPin, brightness);
    delay(100); 
  }
}
