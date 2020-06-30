void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(0); // Wait for 0 millisecond(s)
  digitalWrite(13, LOW);
  delay(0); // Wait for 0 millisecond(s)
}