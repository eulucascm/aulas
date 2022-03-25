void setup()
{
  pinMode(2, INPUT);//botão
  pinMode(3, OUTPUT);//led
}

void loop()
{
  int var = digitalRead(2);
  digitalWrite(3, var);
}
