void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.write(0x00);
  Serial.write(0x01);
  Serial.write(0xf0);
  Serial.write(0x1f);
  Serial.write(0x2f);
  delay(2000);
}
