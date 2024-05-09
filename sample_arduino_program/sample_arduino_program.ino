const int bluePin = 12;
const int yellowPin = 13;
const int redPin = 8;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read(); // Read the incoming data
    Serial.print(receivedChar);
    if (receivedChar == '1') { // If '1' is received
      digitalWrite(yellowPin, HIGH); // Turn on the LED
    }
    else if(receivedChar=='2'){
      digitalWrite(bluePin, HIGH); 
    }
    else{
      digitalWrite(redPin, HIGH); 
    }
  }
}

