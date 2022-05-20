#include <LiquidCrystal.h>
#include "HDLCD.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

byte myChar[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

  HDLCD test(77);
  lcd.print(test.getX());

  /* lcd.createChar(0, myChar); */
  /* lcd.setCursor(0, 0); */
  
  /* lcd.write(byte(0)); */
  /* delay(1000); */
  
  /* myChar[0] = 0b11111; */
  /* lcd.createChar(0, myChar); */
  /* lcd.setCursor(3, 0); */
  /* lcd.write(byte(0)); */
}

void loop() {

}

