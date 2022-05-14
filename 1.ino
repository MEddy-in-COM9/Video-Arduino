void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  if(digitalRead(7) == HIGH) {
    digitalWrite(8, LOW);
  }
  else {
    digitalWrite(8, HIGH);
  }

}
