void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String pot_val = String(analogRead(A0));
  Serial.print(pot_val);
  delay(500);
}



