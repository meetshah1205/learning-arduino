So, till now I've learnt:
- [The physics begind LEDs in an unhelthy detail](https://github.com/meetshah1205/learning-arduino/tree/c72518e1bf2fa345c07f128e752e08a1a1a32318/2.%20How%20do%20LEDs%20work%3F)
- [Created LED rainbows (somewhat)](https://github.com/meetshah1205/learning-arduino/tree/c72518e1bf2fa345c07f128e752e08a1a1a32318/4.%20LED%20Show)
- [The Binary number system](https://github.com/meetshah1205/learning-arduino/tree/c72518e1bf2fa345c07f128e752e08a1a1a32318/5.%20Binary%20Number%20System)
- [To build a binary counter with LEDs](https://github.com/meetshah1205/learning-arduino/tree/c72518e1bf2fa345c07f128e752e08a1a1a32318/6.%20Binary%20counter%20using%20LEDs)


So I've learnt to do digital writes, we take one pin from 2 to 13 and give it a voltage of `HIGH` or `LOW`.

But what if I want one of the in between voltages, I want something between 0V and 5V, we can somewhat do that with the `analogWrite()` command in Arduino. It's *somewhat* becuase there are few caveats that I don't care enough about right now.


What do I need:
- Arduino (ofc)
- Breadboard
- 2x Jumper cables
- Resistor
- RED LED


Now this is a pretty basic LED circuit, before, when I used `digitalWrite()`, I could use anything from pin 2 to 13, (not 0 and 1, different story).

But now in `analogWrite()` only some of the pins will work, the pins with the `~` next to them (on my Arduino they are pins 3, 5, 6, 9, 10, 11), I will have to use one of those pins with the `~` if I want to do an analog write, i will use pin 9 because why not if I can.

This code ofc always remains the same other than the `analogWrite()` in `void loop()`:
```c
int redLed = 9;

void setup(){
    pinMode(redLed, OUTPUT);
}

void loop(){
    // our analogWrite goes here
}
```


The `analogWrite()` takes 2 parameters, the *`pin number`* which we of course need, and before we set it to just `HIGH` or `LOW`, we have to understand that this is ***ANALOG*** not digital, you can put in between values.


The second parameter is not HIGH or LOW, it is a value between $0 \text{ and } 255$

0 ofc coresponds to 0V, and 255 **DOES NOT** corespond to 255V, it coresponds to 5V. but why 255, why not 355 or 455 or just 5, let's think about binary.


We have place values with powers of 2, $2^0, 2^1, 2^2...2^\text{number of switches or LEDs}$


So, it'd be $1, 2, 4, 8, 16, 32, 64, 128, 256$, this would be 8 bits, $2^8$ is $256$

So 256 is 8 bits or 8 switches.

But why not 0 to 256, why 1 less? because you have 256 bits and 0 even though it is all empty still takes a bit, so it is 0 to 255 numbers. If we started at 1, we could've gone to 256, simple math, if you paid attention in 6th grade math instead of shorts. 

---
So if you write a 0, in the 2nd parameter, ***"thou shalt get 0V"***, if you write 255, ***"thou shalt get 5V, thy LED should glow at it's maximum potential"***. It scales linearly too, so 125 would be ~2.5V.


So a:
```c
analogWrite(redPin, 255); // same as digitalWrite(redPin, HIGH);
```

So the code would be:
```c
int redLed = 9;
int bright = 255; // always use variables, it becomes easy to debug

void setup() {
  pinMode(redLed, OUTPUT);
}

void loop() {
  analogWrite(redLed, bright);
}
```

But what if I want it off, LOW.
```c
int bright = 0;
// OR
analogWrite(/*your pin*/, 0);
```

You can change the value of `bright` to see the LED at different brightnesses.

Or if you're crazy like me, I will write a loop to increase the brightness:
