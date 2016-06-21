//Chuong trinh chop tat 3 LED sang dan, tat dan
const int analogWritePin[] = {35, 36, 37}; //Ket noi LED voi 3 chan 35 36 37
//Tuong ung voi chan PC4 PC5 PC6
void setup()
{
  // put your setup code here, to run once:
  //Cau hinh cac chan PC4=6 la output
  for (int thisPin = 0; thisPin <=3; thisPin++)
  {
    pinMode(analogWritePin[thisPin], OUTPUT);
  }
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  //Chuong trinh chinh
  for (int thisPin = 0; thisPin <=3; thisPin++)
  {
    //Thuc hien sang dan
  for(int brightness = 0; brightness<255; brightness++)
  {
    analogWrite(analogWritePin[thisPin], brightness);
    delay(2);
  }
  //Thuc hien tat dan
  for(int brightness = 255; brightness>=0; brightness--)
  {
    analogWrite(analogWritePin[thisPin], brightness);
    delay(2);
  }
  delay(100);
  }
}
