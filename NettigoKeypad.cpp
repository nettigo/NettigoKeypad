//Nettigo Keypad library
//Published on MIT licence
// (c) 2011 Nettigo


#include "NettigoKeypad.h"

bool _isTimeout()
{
  static unsigned long lastTime;
  unsigned long timeNow = millis();
  if (timeNow - lastTime < BOUNCE_TIME)
    return false;

  lastTime = timeNow;
  return true;
}

byte _keyCodeRead()
{
  word inputLevel = analogRead(ANALOG_INPUT);
  Serial.print("Analog input ");
  Serial.println(inputLevel);
  Serial.println("ONE");
  Serial.println(KEY_ONE_VALUE);
  if (inputLevel < KEY_ONE_VALUE) return KEY_ONE;
  Serial.println("TWO");
  Serial.println(KEY_ONE_VALUE);
  if (inputLevel < KEY_TWO_VALUE) return KEY_TWO;
  Serial.println("THREE");
  if (inputLevel < KEY_THREE_VALUE) return KEY_THREE;
  if (inputLevel < KEY_FOUR_VALUE) return KEY_FOUR;
  if (inputLevel < KEY_FIVE_VALUE) return KEY_FIVE;

  return KEY_NONE;
}

byte keypadRead()
{
  static byte keyCode;

  if (!_isTimeout())
    return keyCode;

  keyCode = _keyCodeRead();
  return keyCode;
}
