// Chuong trinh sang dan tat dan LED
// Khai bao bien
int brightness = 0;  //Bien do sang LED
int fadeAmount = 5;  //So diem LED sang dan tat dan
void setup()
{
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);   //Cau hinh LED xanh la output
}

void loop()
{
  // put your main code here, to run repeatedly:
  //Dieu chinh do sang cua LED xanh
  analogWrite(GREEN_LED, brightness);
  //Thay doi do sang trong vong lap tiep theo
  brightness = brightness + fadeAmount;
  //Dao chieu,thay doi tu sang dan sang tat dan
  if(brightness == 0 || brightness == 255)
  {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
