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

  HDLCD test(16, 2);
  lcd.print(test.getHeight());
  lcd.print("x");
  lcd.print(test.getWidth());
  lcd.print(" LCD screen");
}

void loop() {

}

