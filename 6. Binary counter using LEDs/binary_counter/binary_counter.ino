int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int delayBetnNos = 500;

/*  BINARY VALUES 
0  =  0 0 0 0
1  =  0 0 0 1
2  =  0 0 1 0
3  =  0 0 1 1
4  =  0 1 0 0
5  =  0 1 0 1
6  =  0 1 1 0
7  =  0 1 1 1
8  =  1 0 0 0
9  =  1 0 0 1
10 =  1 0 1 0
11 =  1 0 1 1
12 =  1 1 0 0
13 =  1 1 0 1
14 =  1 1 1 0
15 =  1 1 1 1
*/

void setup() {
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  // 0
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 1
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 2
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 3
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 4
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 5
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 6
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 7
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 8
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 9
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 10
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 11
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 12
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 13
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);

  // 14
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  delay(delayBetnNos);

  // 15
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(delayBetnNos);
}


/*
Circuit this assumes:
Apparatus:
  - 4x LEDs (preferably red)
  - 9x Jumper cables
  - Breadboard
  - 4x Resistors (precferably 200 ohms)

Proceduce:
  - Connect 4x jumper cables to pins 2 to 5 on the arduino
  - Connect them to resistors and then LEDs on a breadboard
  - There are only 3 GND pins on an arduino, so connect a cable to GND and the -ve row on the breadboard
  - Use that row to connect everything to GND

*/
