# Binary number system

```
0 -> 0 0 0 0 (all switches off, simple)
1 -> 0 0 0 1 (least significant (the last) bit on)
```

For 2, what is 2? 1 + 1. So `0 0 0 1` + `0 0 0 1` $\noteq$ `0 0 0 2`.

It happens like this:

```
0 0 0 1
0 0 0 1
--------
0 0 1 0
```

Now I'll add another 1.

```
0 0 1 0
0 0 0 1
--------
0 0 1 1
```

And boom, we have 3. So till now, recap.

```
0 = 0 0 0 0
1 = 0 0 0 1
2 = 0 0 1 0
3 = 0 0 1 1
```

Now to get 4, what do we need? 3 + 1.

```
  1 1
0 0 1 1
      1
--------
0 1 0 0 (<- yes, 1 + 1 = 0, welcome to engineering)
```

So, after `0 0 1 1`, the next one will be `0 1 0 0`.

And now it gets easy, we add `1 (0 0 0 1)` to the `0 (0 1 0 0<- this)` and we have 5, `0 1 0 1`.

And again add `1` to that and we have 6, `0 1 1 0`.

Still pretty easy, we add `1` to `6`, we have `0 1 1 1` that's 7.

Now here is where you have you have to be careful.

We have 7 (`0 1 1 1`) and we add `1` to it.

```
1 1 1
0 1 1 1
0 0 0 1
---------
1 0 0 0
```

And now we have 8, `1 0 0 0`.

Now it's easy again, 9 is `1 0 0 1`.

10 is `1 0 1 0`

Add another, it is `1 0 1 1`.

12 is `1 1 0 0`

13 is `1 1 0 1`

14 is `1 1 1 0`

15 is just `1 1 1 1`

So till now we got:

```
0 =  0 0 0 0
1 =  0 0 0 1
2 =  0 0 1 0
3 =  0 0 1 1
4 =  0 1 0 0
5 =  0 1 0 1
6 =  0 1 1 0
7 =  0 1 1 1
8 =  1 0 0 0
9 =  1 0 0 1
10 = 1 0 1 0
11 = 1 0 1 1
12 = 1 1 0 0
13 = 1 1 0 1
14 = 1 1 1 0
15 = 1 1 1 1
```

But now what? If i try to do 16, it'll be `0 0 0 0` and then carry the one, but **_offfff_**, I ran out of digits, meaning I can't go to 16 with 4 switches, 4 bits.

> If I really wanted to go to 16 for some reason, it would have to be `1 0 0 0 0`. This `1 <- this 0 0 0 0` has to be added, we have to have another switch, another bit. But I'll just do the 4 switches.

Now you might see a pattern here.

- The last digits oscillate between `0` and `1`.
- The second to last digits oscillate between `0 0` and `1 1`.
- Then, `0 0 0` and `1 1 1 1`
- Then, `0 0 0 0 0 0 0 0` (8 zeros) and `1 1 1 1 1 1 1 1` (8 ones).

But like, if I give a binary number, and convert it to a decimal number, then how will you do it?

Like in the decimal system, you see the last digit is multiplied by `1` and the digit after that is multiplied by `10`, so each time, the value of the digit increases by **_powers of 10_**.

Well, it's the same in the binary numbers, _just a teeny difference_.

- The last digit is worth `1`
- The next is worth $2$ times the number
- The next is $4$ ($2^2$)
- The next is $8$ ($2^3$)
- $16, 32, 64 ...$ if you went on

---

`0 0 0 0` is a 0 because there is not a `1`, `2`, `4` or `8`.

`0 0 0 1` is a 1 because there _is_ a `1` in the place where it is worth `1`

`0 0 1 0` is a 2 because there is a `2` in the place where it is woth `2`

`1 0 0 1` is a 9, because there is a `1` in the place of $2^3$, so 8 is true, 1 is true, 8 + 1 is 9

> Note that `true` here means the switch is ON.

`1 1 1 1` because the switch worth $1$, $2$, $4$ and $8$ are **_ON_**, so $1 + 2 + 4 + 8 = 15$

**_YOU SEEE_** the ✨ magic ✨, we are able to represent 0 to 15, meaning 16 numbers with just 4 switches, turning them ON or OFF.

> and people say "maTh is tOo coMplEx... aNd uselesS", this is the science behind computers, mobiles, TVs, Arduinos, and everything that runs the modern world.

If we had 5 switches we would represent, 32 numbers, 6 switches? 64 numbers.

So we can represent $2^\text{number of switches}$, $2$ because there are only 2 possible numbers, if there were 10, it'd be $10^\text{number of switches}$, so if in a base-10 system we would only use 2 digits, we would be able to represent $10^2$ or $100$ numbers, which we indeed can, 0 to 99. (math isn't so confusing if you know what you're doing).

So just stacking switches, we can represent incredibely HUGE numbers.

So if you want to represent $1,23,321$ in binary, you'd just need enough switches (this number is around a million so I think $2^32$ is needed for this, maybe wrong), using this method, you can represent any number in a binary format.

And you can use that number for anything, because at a hardware level, *those numbers are just **switches***, they can be ON or OFF, 0 or 1, Like say 9 for example. It is `ON OFF OFF ON`, 0 is `OFF OFF OFF OFF`, 15 can be `ON ON ON ON`.

This is similar to how diodes work, conducting to non-conducting, 0 to 1. SEE THE GENIUSNESS OVERFLOWING.

That is how computers work fundamentally, any colour, music, word can be mapped to numbers which can be mapped to 0s and 1s which can be mapped to ON or OFF.

Words can be letters mapped to some character table (ASCII is a popular example), music can be if the pitch, frequency and all this is high, low or a number or something, colour is red, green, blue which can be a hexadecimal value (like (255, 255, 255) is white and (0, 0, 0) is black, (255 (<- red), 255 (<- green), 255 (<- blue)) i think).