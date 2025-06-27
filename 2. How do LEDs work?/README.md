Most people when they hear "Arduinos" and "microcontrollers" get scared because they don't how it works, but I AIN'T "*MOST PEOPLE*", ICH BIN EINE LEGUNDO, so here is a detailed explanation of how LEDs work.


Now there are LEDs in a starter kit, they look like this:
![LED Image](https://www.ledsupply.com/blog/wp-content/uploads/2016/06/17-300x250.jpg)

And there is an LED on the Arduino board it self:
![LED_BUILTIN](https://roboticsbackend.com/wp-content/uploads/2021/09/arduino_builtin_led.png)

# How do Light Emitting Diodes (LEDs) work?
So I know a light bulb right, invented by Thomas Edison.

We have a socket, that socket has a wire, the wire goes up and comes down, and this whole thing is wrapped in glass.

BOOM, you've just made a bulb.

Now if I supply a voltage to that socket (voltage = current, denoted by *`i`*), if we supply more current, there is more voltage, and as I supply more current, the wire starts to get hot, more current = more heat.

As we turn up the current, the wire gets so hot that it begins to get **RED HOT**, as it gets red hot, we start to see light coming from it, red light.

You turn the voltage up even more, it becomes **WHITE HOT**, and as it becomes white hot, we see a lot of light coming off of it. 

That is how a light bulb works, taking a wire and heating it to the point that it becomes WHITE HOT.

## Problem with Light Bulbs
But the problem with it is that, it is not a *light generating device*, it is a *heat generating device*.

You put energy in (REMEMBER: energy is money, current isn't free) about 95% of it goes into generating heat, and only about 5% of it goes into generating light. 

So you're paying a lot of money to heat your room.

Another problem is, that this heat accumulates, if the bulb is left on for a long time, it will heat up the room, to cool it down, you have to turn on the AC, which is another energy consuming device, so you end up paying more money because the AC is working harder to cool down the room.

Light bulbs were used for the last 140 years, wasted an incredible amount of energy in generating heat, and even more energy in cooling down the room.

We need a better system to generate light, and that is where LEDs come in.

before we get into how LEDs work, let's talk about the **semiconductors**.

## Semiconductors
Before we get into semiconductors, first we need ***conductors***.

What's the simplest conductor? ✨ A wire ✨

What's on the outside of a wire? ✨ Rubber, an insulator ✨

A semiconductor is a material that is neither a good conductor nor a good insulator, good for none but good for both. But the magic of semiconductors goes beyond that of conductors and insulators.

The special thing is, they can be manufactured to be a good conductor and/or a good insulator.

And we can make it that, depending on the current that is flowing through it, it can behave like a good conductor or a good insulator.

And then if you think about 0s and 1s, conduncting as 1 and insulating as 0, you can now see the magic behind switches, you do math and now have a **microcontroller**.

Most digital electronics are built from ***Silicon (Si)*** which is a semiconductor, there are *silicon wafers*, they have hundreds of tiny *things* on them, and maybe a machine comes and slices them into tiny pieces, and those tiny pieces are the microcontrollers.

Now if you come to an Arduino, you can see a big black box like thingy, if we pop the lid off, we can see a silicon microcontroller inside, and that is what makes the Arduino work.

This image is of the chip (ATMEGA328p) on the Arduino Uno:
![ATMEGA328p](https://ampflick.com/wp-content/uploads/2024/09/ATMEGA328P.png)

Now we know that, everything in electronics works on semiconductors, now let's see how a semiconductor works.

## How do Semiconductors work?
We know that an atom (where is this goin, this was supposed to be about LEDs, but ehh physics is fun if you know what you're getting into) can have different energy levels.

The electron can be at different energy levels (not any energy levels, specific energy levels).

A semiconductor is a crystal material, basically the atoms are in a proper lattice structure, not in a random orientation. The atoms line up perfectly in a unit cell and that is repeated over-and-over again, as we have these different atoms and we bring them closer to form a crystal, the adjacent atoms' energy levels smear and instead of discrete energy levels, we have a band of energy levels. This is called the ***"Pauli Exclusion Principle"***.

Certain energy levels are allowed, and certain energy levels are not allowed, and this is what gives us the ***"Band Gap"***.

You can have an electron anywhere other than the band gap. And these are the allowed bands in a crystalline material.

### Conduction
If we think of electrons as a marble, where would that marble want to go? The lowest energy level right? When you have an electron in a semiconductor material, it'll want to go to the lowest energy levels, where is that? they are down in the lower band, that region is called the ***"Valence Band"***. So all your electrons end up in the valence band. 

And the upper band, which is the ***Conduction Band***, all empty.

So when we apply a voltage, if you think about marbles it is like tilting the whole thing, are they going to flow? or are they not? that's like asking "will we have a current? or will we not?"

Well, the conduction band can be thought of a tube, a tube is empty, *void* of marbles, empty. If I tilt it, will the marbles flow? No, because there is no marble in the tube, so there is no flow. So there is no conduction, becuase there is no electron in the conduction band.

But "WAIT, there are a bunch of electrons in the valence band right?" well yes, think of another tube. The first tube was completely empty, this one is completely full, if I tilt that tube, wwwwwwwwwwwwill they flow? No, because there is no space for them to flow, so there is no conduction.

So this state of the semiconductor is called ***"Insulator"***, because there is no conduction.

But let's think of some way, we can get the electrons from the valence band to the conduction band, so that we can have conduction.

***HMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM...***

Let's bring some temperature into this. What will happen if I turn up the temperature? I am supplying more energy (`Eₖᵢₙ`) and I'll have a lucky electron that will absorb that energy and jump towards the conduction band, so jump across the band gap.

So if you think about it, when that electrom jumps up, that marble jumps up, what is left in place of it in the valence band? An empty space, a hole.

So now when we apply a voltage, tilting the tube, what is the electron that is in the conduction band going to do? It is going to flow, because it is in the conduction band, so it will flow. 

ok, but what happens in the valence band? the now empty space, the hole, is going to be filled by an electron from the adjacent atom, and that electron will jump up to fill that hole, and now there is a new hole in the adjacent atom, and that will keep going on and on and on. So now we have conduction in the valence band too. HURRAY!!!

We can think of each electron moving, but it's easier to think of the hole moving, because the hole is moving in the opposite direction of the electron, so it is easier to think of the hole moving. That works perfectly mathematically and physically.

The only difference is, electrons move downhill, and holes move uphill.

So now I got 1 charge in the conduction band, and 1 hole in the valence band, so I have 2 charges that can conduct electricity. A negatively charged electron in the conduction band, and a positively charged hole (since it's missing an electron) in the valence band.

That was semiconductors, ***you have an empty conduction band, a full valence band, and the only conduction that happens is through, the lucky electron that jumps up to the conduction band due to thermal energy, and the hole that is left behind in the valence band.***

$$
\text{The more heat you add, the more electrons jump up, the more conduction you have.}
$$

So as you increase the temperature, the *conductivity* of the semiconductor increases, and vice versa. So we can say they are in *direct proportion*.

$$
\text{Conductivity} \propto \text{Temperature}
$$

But that is with a crystal that is pure, with no impurities, so it is a *pure semiconductor*.

But what if we add some *strategically placed impurities*?

So we will have the valence band (VB) and the conduction band (CB) and the band gap.

#### n-type

But instead of just using Si (or whatever I'm using), I will add a very minute amount of *inpurity atoms*, for the first, it'll be an atom that has an extra electron, about at the energy level of the CB, we can place them near the CB in the band gap (this is usually done at the manufacturing facility), and now it is easy to transfer the extra electron that these atoms had to the CB.

So we can say that it *donates* and electron, it is a *donor atom*, the donor donates an electron to the conduction band.

So now my tube is non-empty, it has some electrons, as I tilt it, the electrons flow and I have electricity flowing.

But what happens in the VB, the thing is that it remains full, why? because the electrons didn't come from VB, they came from the donor atoms.

So this *donor type* semiconductor is called an ***N-Type***, `n` represents the electrons, because the electrons are the majority charge carriers, so our conduction happens through the electrons.


#### p-type
This time we will put the impurity atoms near the VB, but this time instead of an extra electron, they have a missing electron. And that missing electron is at the energy level of the VB.

so what will happen is that the impurity will *accept* an electron from the VB, thus it is called an *acceptor atom*, when it steals that electron from the VB, what is left behind? A hole(s), now when we tilt the tube by applying a voltage, the holes roll uphill and the electrons roll downhill.

So we have conduction by holes, thus it is called a ***P-Type***, `p` represents the holes, because the holes are the majority charge carriers, so our conduction happens through the holes.

---
So now we have 3 types of semiconductors:
- Intrinsic (pure) semiconductor
> Have no impurities, VB is full, CB is empty, no current flow except for the lucky electron that jumps up due to thermal energy.

- N-Type semiconductor
> Have donor atoms and we end up with electrons in the CB, VB is full, CB is non-empty, current flows through electrons.

- P-Type semiconductor
> Have acceptor atoms and we end up with holes in the VB, conduction happens through holes.


---
What on earth does this have to do with diodes?

What if I bring an N-Type material next to a P-Type material? It's not that I have 2 things and I glue them together, it's just I have donor atoms here and acceptor atoms there, and they are in contact with each other.

And I can have a wire, and if I look at the energy levels, I can see an offset.

If we see, we have electrons on one side and holes on the other, but if I am just sitting there, there is no current flowing, the electrons cannot go over that hump like thing, remember the electrons want to go downhill and holes want to go uphill, so they cannot cross the junction. So I have holes in the P-Type and electrons in the N-Type, and nothing happens.

Now what if I apply a voltage? Let's say I put a positive voltage on the P side and a negative voltage on the N side, what will happen?

The +ve pulls it down.

So now the slope for the electrons is much less to cross. Picture this, I can jump, but if I have like a 10 foot wall, I can't jump over it (unless I am Eren Yeager, which last time i checked, I am not), but if I have a 1 foot wall, I can jump over it.

So what happens is some of those electrons will jump the gap and some of the holes will jump the gap, and now I have a current flowing.

Now we have a electron over a hole, the electron comes to the hole and fills it, the hole becomes an electron this is called ***Electron Hole Pair recombination***.

The electron was at a HIGH energy level, and now it is at a LOW energy level, and that energy has to go somewhere, remember ***energy can be created ❌ destroyed ❌ converted ✅*** so what happens to that energy? it is released as a **photon** which is light.

So how do you get light out of an LED, you forward bias a diode to reduce that barrier so electrons can cross the junction, and when they do, they recombine with holes and release energy in the form of light. If you want it to be brighter, you lower the barrier even more, so more electrons can cross, and thus more light is produced.

But what if I supply a -ve voltage, instead of lowering the barrier from 10 feet to 1 feet, i jump it to 20 feet, now ain't no way electrons are crossing it so light is created.

That is why a diode has to be hooked up correctly, the +ve has to go to the P type and -ve has to go to the N type, otherwise it won't work.

The longer leg is the +ve (anode) and the shorter leg is the -ve (cathode).

# Voltage vs Current
For a resistor, the voltage and current are directly proportional, so if you increase the voltage, the current increases, and vice versa.

For a diode, you get exponentially more electrons crossing the junction as you increase the voltage, so the current increases exponentially.

That is why never hook up a diode to a power source without a resistor, because the current will increase exponentially and the diode will burn out because it will have electrons flowing through it, and then heating it up and then electrons will keep flowing and it will burn out.


# What colour the lED generate?
Let's look at the electron and the hole, they emit a photon, what is it's energy? exactly the energy difference between the conduction band and the valence band, so the energy of the photon is equal to the band gap. that is how far the electron fell and so that is the energy it lost.

$$
\text{Energy gap} = \text{Energy of the photon} = h \times f
$$
where $h$ is the Planck's constant and $f$ is the frequency of the photon.

And we also know that frequency is $1/\lambda$ where $\lambda$ is the wavelength of the photon.

So as frequency goes up, you start going towards purple and violet and ultraviolet, and as frequency goes down, you start going towards red and infrared.