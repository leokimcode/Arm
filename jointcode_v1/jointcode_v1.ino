const int dirPin = 4;  // Direction pin
const int stepPin = 5; // Step pin

const int stepsPerRevolution = 2000;

void setup() 
{
  // Set the direction and step pins as outputs
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  
  digitalWrite(dirPin, HIGH); //clockwise
}

void loop() 
{
  for (int i = 0; i < stepsPerRevolution; i++) 
  {
    digitalWrite(stepPin, HIGH); // Step the motor
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  
  // Wait for a moment
  delay(1000);
  
  // Change direction
  digitalWrite(dirPin, !digitalRead(dirPin));
}
