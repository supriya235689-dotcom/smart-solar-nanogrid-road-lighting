#define LDR_PIN 34
#define PIR_PIN 27
#define LED_PIN 25

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Smart Solar Street Light Started");
}

void loop() {
  int lightValue = analogRead(LDR_PIN);
  int motion = digitalRead(PIR_PIN);

  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print(" | Motion: ");
  Serial.println(motion);

  if (lightValue < 2000) {

    if (motion == HIGH) {
      analogWrite(LED_PIN, 255);
    } else {
      analogWrite(LED_PIN, 60);
    }

  } else {
    analogWrite(LED_PIN, 0);
  }

  delay(500);
}