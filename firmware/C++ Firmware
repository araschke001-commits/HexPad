#include <Keyboard.h>

// Pins D0, D1, D2, D3, D4, D5 on the XIAO RP2040
const int pins[] = {26, 27, 28, 29, 6, 7}; 
const int numPins = 6;
char keys[] = {'1', '2', '3', '4', '5', '6'};
bool lastState[6];

void setup() {
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], INPUT_PULLUP);
    lastState[i] = HIGH; // Start HIGH due to internal pullup
  }
  Keyboard.begin();
}

void loop() {
  for (int i = 0; i < numPins; i++) {
    bool currentState = digitalRead(pins[i]);
    
    // Detect Press (High to Low)
    if (currentState == LOW && lastState[i] == HIGH) {
      Keyboard.press(keys[i]);
      delay(30); // Prevent duplicate "ghost" presses
    } 
    // Detect Release (Low to High)
    else if (currentState == HIGH && lastState[i] == LOW) {
      Keyboard.release(keys[i]);
      delay(30);
    }
    lastState[i] = currentState;
  }
}
