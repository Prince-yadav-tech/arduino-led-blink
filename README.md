# Arduino LED Blink Project (Onboard + External LED)

## 1. Project Overview
This is a beginner-level Arduino project where I control two LEDs — the onboard LED (connected to pin 13 on most Arduino boards) and an external LED connected through a breadboard — to blink at a set interval. It's one of the first projects I tried while learning how Arduino and basic digital I/O works.

## 2. Objective
- To understand how digital output pins work on an Arduino.
- To learn how to control both the onboard LED and an external LED using code.
- To get hands-on practice with circuit building on a breadboard.
- To understand the use of `digitalWrite()` and `delay()` functions.

## 3. Components
- Arduino Uno (or any compatible board)
- 1 x External LED
- 1 x 220Ω resistor
- Breadboard
- Jumper wires
- USB cable (for uploading code and powering the board)

## 4. Circuit
- The onboard LED is already connected internally to `pin 13`, so no extra wiring is needed for that.
- For the external LED:
  - Connect the `anode (longer leg)` of the LED to a digital pin (e.g., pin 8) through a `220Ω` resistor.
  - Connect the `cathode (shorter leg)` to the `GND` pin on the Arduino.
- Double-check polarity before powering the circuit to avoid damaging the LED.

## 5. Working Principle
The Arduino runs a simple loop where it sets the LED pins HIGH (turns them ON), waits for a short delay, then sets them LOW (turns them OFF), and waits again. This ON-OFF cycle repeats continuously, creating the blinking effect. Both LEDs are controlled using the same logic but on different pins.

## 6. Code
```cpp
// Pin definitions
const int onboardLED = 13;
const int externalLED = 8;

void setup() {
  pinMode(onboardLED, OUTPUT);
  pinMode(externalLED, OUTPUT);
}

void loop() {
  digitalWrite(onboardLED, HIGH);
  digitalWrite(externalLED, HIGH);
  delay(1000);

  digitalWrite(onboardLED, LOW);
  digitalWrite(externalLED, LOW);
  delay(1000);
}
```

## 7. Testing
- Uploaded the code using the Arduino IDE via USB.
- Verified that the onboard LED blinked as expected right after uploading.
- Checked the external LED circuit on the breadboard and confirmed it blinked in sync with the onboard LED.
- Tested with different delay values to see how the blink speed changed.

## 8. Results
Both the onboard and external LEDs blinked successfully at `1-second` intervals, exactly as programmed. The circuit worked as expected with no issues after wiring was double-checked.

## 9. Problems Encountered
- Initially connected the LED with reversed polarity, so it didn't light up — fixed by flipping the LED legs.
- Forgot to add the resistor at first, which could have risked burning out the LED.
- Had a loose jumper wire connection on the breadboard that caused flickering, resolved by reseating the wires properly.

## 10. Future Improvements
- Add more LEDs and create a pattern (like a chase or fade effect) instead of a simple blink.
- Use `millis()` instead of `delay()` for non-blocking blinking, so other tasks can run simultaneously.
- Control the LEDs using a push button or potentiometer to make the blinking interactive.
- Experiment with PWM to fade the LEDs in and out instead of a hard ON/OFF switch.
