void setup() {
  // put your setup code here, to run once:
  pinMode(13 /*Which pin are we working with, here 13*/, OUTPUT /*Whether we are using the said pin as an input or output*/);
  // the above line is basically telling the Arduino:
  // "Hey, I want the pin 13 to be an output, so you send signal to that pin and stuff goes beep boop"
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13 /*What pin are we writing to*/, HIGH /*Set pin 13 to HIGH, means 5V*/);
  // "Hey, I want to supply a 5V (HIGH) to pin 13"
  // Now, I want to turn it off, delay and then on, then off again, and again on
  delay(900); // delay is given in milliseconds, 1 second = 1000 ms
  digitalWrite(13, LOW /*if HIGH turned it on, it's obvious LOW would turn it ✨ off ✨*/);
  delay(100); 
}
