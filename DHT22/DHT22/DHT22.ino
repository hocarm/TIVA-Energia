#include "Energia.h"
#include "DHT22_430.h"
#include "LiquidCrystal.h"
#define DHTPIN PD_0
DHT22 mySensor(DHTPIN);

boolean flag;

LiquidCrystal lcd(PD_1, PD_2, PD_3, PE_1, PE_2, PE_3);


void setup() {
  Serial.begin(9600);
  Serial.println("\n\n\n*** DHT22 test starts"); 
  Serial.println("PUSH2 to end"); 
  pinMode(PUSH2, INPUT_PULLUP);     
  mySensor.begin();
  lcd.begin(16, 2);
  lcd.print(" DO AN 1 TM4C123");
}
 
void loop() {
    // Turn off the display:
  lcd.noDisplay();
  delay(200);
   // Turn on the display:
  lcd.display();
  delay(200);
  delay(2000);

  flag = mySensor.get();
  int32_t h = mySensor.humidityX10();
  int32_t t = mySensor.temperatureX10();
  
// recheck
  if (!flag) {
    Serial.println("Failed to read from DHT");
  } 
  else {
    Serial.print("RH% \t");
    Serial.print(h/10);
    Serial.print(".");
    Serial.print(h%10);
    Serial.println(" %\t");
    
    Serial.print("oC \t");
    Serial.print(t/10);
    Serial.print(".");
    Serial.print(t%10);
    Serial.println(" *C"); 
 
 //print on LCD   
    lcd.setCursor(0, 1);
    //lcd.setCusor(0, 1);
    lcd.print("HUMID% = ");
    lcd.print(h/10);
    lcd.print(".");
    lcd.print(h%10);
    lcd.println("  %" );
    
    lcd.setCursor(1, 0);
    //lcd.setCusor (1, 0);
    lcd.print("TEMPT = ");
    lcd.print(t/10);
    lcd.print(".");
    lcd.print(t%10);
    lcd.println(" *C");    
  }
  
  if (digitalRead(PUSH2)==LOW) {
    Serial.println("\n\n*** End"); 
    Serial.end();
    while(true); // endless loop
  }
  
}
