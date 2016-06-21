//Chuong trinh doc gia tri dien ap cua bien tro
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A3);
  //Chuyen gia tri tuong tu(0-4096 tuong ung voi dien ap la 0-3.3V)
  float voltage = sensorValue * (3.3/4096.0);
  //Xuat gia tri doc duoc len man hinh
  Serial.println(voltage);
}

