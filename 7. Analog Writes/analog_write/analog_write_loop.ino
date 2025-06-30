int redLed = 9;
int bright = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
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
