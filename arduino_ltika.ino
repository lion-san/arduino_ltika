void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(1000);              // wait for a second
  
}
