//Chuong trinh an nut sang LED
void setup()
{
  // put your setup code here, to run once:
  //Cau hinh uart
  Serial.begin(9600);
  pinMode(31, INPUT_PULLUP); //Cau hinh chan 31 noi voi nut nhan,tro keo len
  pinMode(40,OUTPUT);  //Cau hinh LED xanh (tren kit) la output
}

void loop()
{
  // put your main code here, to run repeatedly:
  //Chuong trinh chinh
  int buttonVal = digitalRead(31);
  //In gia tri cua nut nhan
  Serial.println(buttonVal);
  //Kiem tra neu nut chua duoc nhan thi tat LED
  if (buttonVal == HIGH)
  {
    digitalWrite(40, LOW);
  }else{
    digitalWrite(40,HIGH); //Nguoc lai thi bat LED
  }   
}
