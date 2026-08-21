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
