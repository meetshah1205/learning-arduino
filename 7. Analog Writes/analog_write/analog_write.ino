int redLed = 9;

void setup() {
  pinMode(redLed, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++){
    analogWrite(redLed, i);
    delay(25); // trust me, you'll get bored at 100, because after a certain point, the increase in brightness becomes less noticable
    if (i == 255){
      analogWrite(redLed, 0);
      i = 0;
      break;
    }
  }
}