/*
  LiquidCrystal Library - display() and noDisplay()

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and uses the
 display() and noDisplay() functions to turn on and off
 the display.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
// pin numbers changed from original program to match simulator pins
const int rs = 32, en = 31, d4 = 25, d5 = 24, d6 = 23, d7 = 22;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  int LED_UP = 44; // simulates the UP relay
  int LED_DWN = 45; // simulates the Down relay
  int LED_LEFT = 46; // simulates the Left relay
  int LED_RGT =47; // simulates the Right relay 

void setup() {
  pinMode(LED_UP, OUTPUT); //set the LED pin as OUTPUT
  pinMode(LED_DWN, OUTPUT); //set the LED pin as OUTPUT
  pinMode(LED_LEFT, OUTPUT); //set the LED pin as OUTPUT
  pinMode(LED_RGT, OUTPUT); //set the LED pin as OUTPUT
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Testing...");
  delay(5000);
  lcd.noDisplay();
}

void loop() {
  // Turn on the display:
  lcd.display();
  lcd.clear();
  lcd.print("LED UP ON");
  digitalWrite(LED_UP, HIGH); //write 1 or HIGH to led pin
  delay(1000);
  lcd.clear();
  digitalWrite(LED_UP, LOW);
  digitalWrite(LED_DWN, HIGH); //write 1 or HIGH to led pin
  lcd.clear();
  lcd.print("LED DWN ON");
  delay(1000);
  digitalWrite(LED_DWN, LOW);
  digitalWrite(LED_LEFT, HIGH); //write 1 or HIGH to led pin
  lcd.clear();
  lcd.print("LED LEFT ON");
  delay(1000);
  digitalWrite(LED_LEFT, LOW);
  lcd.clear();
  lcd.print("LED RIGHT ON");
  digitalWrite(LED_RGT, HIGH); //write 1 or HIGH to led pin
  delay(1000);
  digitalWrite(LED_RGT, LOW);
}
