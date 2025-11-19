# Arduino-WaveBlink

A simple Arduino project that creates
a sequential blinking pattern across 4 LEDs, producing a "running light" or "Knight Rider" effect.

## Components Required

- Arduino board (Uno, Nano, or compatible)
- 4 LEDs
- 4 resistors (220Ω - 330Ω recommended)
- Breadboard
- Jumper wires
## Circuit diagram
[]
## Simulation
[https://www.tinkercad.com/things/gE5WcMScjr9-blinkusingcustomfunction?sharecode=mEpkIG7NEmsZDDjdoEToJrfC3zPlrf3Z0r0NAvvFIx8]
## How It Works

The program cycles through each LED in sequence:
1. Turns LED on for 100ms
2. Turns LED off for 100ms
3. Moves to the next LED
4. Repeats continuously

## Code
[WaveLedPtrn.ino]

## Usage

1. Upload the code to your Arduino board
2. Connect the circuit as described above
3. Power on the Arduino
4. Watch the LEDs create a sequential pattern
