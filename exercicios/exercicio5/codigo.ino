//ex5 - AC
void setup()
{
  pinMode(2, INPUT);//botão para apagar o led
  pinMode(3, OUTPUT);//led azul limdo dimaiz
}

void loop()
{
  if(digitalRead(2) == HIGH){
    digitalWrite(3, LOW);
  }
  
  else{
    digitalWrite(3, HIGH);
  }
}
