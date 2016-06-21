//Chuong trinh chop tat led
void setup()
{
  // put your setup code here, to run once:
  //Cau hinh chan output
  pinMode(RED_LED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);  //Bat LED
  delay(1000);
  digitalWrite(RED_LED, LOW);  //Tat LED
  delay(1000); //Doi 1 s
}
