//Chuong trinh doc trang thai nut nhan
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(31, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(31);
  Serial.println(sensorValue);
}
