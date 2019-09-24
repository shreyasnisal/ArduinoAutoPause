
int lightSensorPin = A0;
int analogValue = 0;
bool paused = false;

void setup() {
  Serial.begin(9600);
}

void loop() {

  analogValue = analogRead(lightSensorPin);

    if (analogValue < 20 && !paused) {
      Serial.println("Play/Pause");
      paused = !paused;
    }

    if (analogValue > 20 && paused) {
      Serial.println("Play/Pause");
      paused = false;
    }

    delay(500);
}
