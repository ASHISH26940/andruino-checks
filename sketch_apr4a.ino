void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // Set pin 13 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // Turn on the LED connected to pin 13
  delay(3000); // Wait for 1 second (1000 milliseconds)
  digitalWrite(13, LOW); // Turn off the LED connected to pin 13
  delay(1000); // Wait for 0.1 second (100 milliseconds)
}
