void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
}

/*
Circuit this program assumes:
A jumper cable connected to Digital Pin 8 on the Arduino and to any hole on the breadboard.
A resistor (preferably 330 ohm but anything close would work) connected to the same column as the cable from pin 8.
The other leg of the resistor on any hole.
The long leg of the LED connected to the same column as the other leg of the resistor.
A jumper cable from GND to the same column as the short leg of the LED

NOTE for future me:
You have to push the LED in properly, don't worry neither the board nor the LED would break 
*/