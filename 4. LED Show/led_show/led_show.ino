// LED Pins
const int redLed = 8;
const int greenLed = 7;
const int blueLed = 6;

// Durations
const int dot = 50;
const int dah = 50;
const int dat = 50;

// I will use functions, because I don't wanna lose my sanity over this simple of a project
void blinkRed(int delayInMs) {
  digitalWrite(redLed, HIGH);
  delay(delayInMs);
  digitalWrite(redLed, LOW);
  delay(delayInMs);
}

void blinkGreen(int delayInMs) {
  digitalWrite(greenLed, HIGH);
  delay(delayInMs);
  digitalWrite(greenLed, LOW);
  delay(delayInMs);
}

void blinkBlue(int delayInMs) {
  digitalWrite(blueLed, HIGH);
  delay(delayInMs);
  digitalWrite(blueLed, LOW);
  delay(delayInMs);
}
void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // I will use for loops in loop(), classic C yk
  for (int i = 0; i <= 15; i++) {
    blinkRed(dot);
  }

  for (int i = 0; i <= 15; i++) {
    blinkGreen(dah);
  }

  for (int i = 0; i <= 15; i++) {
    blinkBlue(dat);
  }

  delay(10);
}
