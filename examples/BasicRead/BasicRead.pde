/*
Example how to read selected key from Nettigo Keypad.

Uses:
 - Arduino
 - LCD Kit from Nettigo (but could be any LCD display compatible with LiquidCrystal library)
 - Nettigo Keypad

 Connect:
 LCD:
 1 - GND
 2 - +5V
 3 - 10k pot output
 4 - D2 on Arduino
 5 - GND
 6 - D3 on Arduino
 7 - 10 - not connected
 11 - 14 - D4-D7 on Arduino
 15 - +5V (backlight)
 16 - GND

 Nettigo Keypad:
 AD1:
  1 (marked with square pad) - +5V
  2 - A0 on Arduino
  3 - GND
*/
#include <NettigoKeypad.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

char* keys[] = { "NONE", "UP", "DOWN", "LEFT", "RIGHT", "SELECT" };

void setup(){
  lcd.begin(16,2);
  lcd.print("Selected key:");
}

void loop(){
  lcd.setCursor(0,1);
  lcd.print( keys[ keypadRead() ] );
  lcd.print("      ");
  delay(100);
}
