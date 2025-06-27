# 1. Blinking LED
This is just the `"Hello, World!'` app for Arduinos.

## Program explanation (`1.blinkingLED.ino`)
- `void setup()` is the code that runs once, it is used for initializing variables and pins

- `void loop()` runs again and again till the Arduino is ON, this is where the real fun happens

The `pinMode()` in `void setup()` is to declare which pin to use as OUTPUT or INPUT.

Here, I've assigned pin 13 as an OUTPUT, as on most Arduinos there is an LED attached to it.

---
The `digitalWrite()` in the `void loop()` supplies a voltage (or current) to the said pin.

For example:
```cpp
digitalWrite(13, HIGH); // sends 5V to pin 13
```

Rest of the code is well documented in the file 