void setup()
{
  pinMode(2, OUTPUT);//vermelho
  pinMode(3, OUTPUT);//laranja
  pinMode(4, OUTPUT);//amarelo
  pinMode(5, OUTPUT);//verde
  pinMode(6, OUTPUT);//azul
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(6, HIGH);
  delay(2000);
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}
