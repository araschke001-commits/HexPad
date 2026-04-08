#include <Keyboard.h>
#include <Encoder.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//OLED I2C pins
#define SDA_PIN 4
#define SCL_PIN 5

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

//Keys
const int keyPins[6] = {3, 6, 7, 8, 9, 10};
bool lastKeyState[6];

//encoder
const int encA = 0;
const int encB = 1;
const int encBtn = 2;
Encoder knob(encA, encB);

long lastEncPos = 0;
bool lastBtnState = HIGH;

String lastAction = "Ready";

void updateDisplay() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.print(lastAction);
  display.display();
}

void setup() {
  Keyboard.begin();

  //Setup for the keys
  for (int i = 0; i < 6; i++) {
    pinMode(keyPins[i], INPUT_PULLUP);
    lastKeyState[i] = HIGH;
  }

  //encoder button setup
  pinMode(encBtn, INPUT_PULLUP);

  //I2C setup
  Wire.setSDA(SDA_PIN);
  Wire.setSCL(SCL_PIN);
  Wire.begin(SDA_PIN, SCL_PIN);

  //OLED init, change to 0x3D if not working
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true); //stop if OLED fails
  }

  updateDisplay();
}

void loop() {
  //Reads if a key has been pressed
  for (int i = 0; i < 6; i++) {
  bool currentState = digitalRead(keyPins[i]);

  if (currentState == LOW && lastKeyState[i] == HIGH) {
    //Registers if a key was pressed on the computer and oled
    Keyboard.print("K" + String(i + 1));
    lastAction = "Key " + String(i + 1);
    updateDisplay();
  }

  lastKeyState[i] = currentState;
  }

  //Reads encoder rotation changes
  long newPos = knob.read() / 4;

  if (newPos != lastEncPos) {
    if (newPos > lastEncPos) {
      Keyboard.write(KEY_MEDIA_VOLUME_UP);
      lastAction = "Volume Up";
    } else {
      Keyboard.write(KEY_MEDIA_VOLUME_DOWN);
      lastAction = "Volume Down";
    }

    updateDisplay();
    lastEncPos = newPos;
  }

  //Handle encoder button (performs muting/unmuting voulme)
  bool btnState = digitalRead(encBtn);

  if (btnState == LOW && lastBtnState == HIGH) {
    Keyboard.write(KEY_MEDIA_MUTE);
    lastAction = "Mute/Unmute";
    updateDisplay();
    delay(50); //debounce
  }

  lastBtnState = btnState;
}
