// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Happy Birthday");
  delay(8644);
  lcd.clear();
  delay(3000);
  lcd.print("Twinkle Twinkle");
  lcd.setCursor(0, 1);
  lcd.print("Little Star");
  delay(17289);
  lcd.clear();
  delay(3000);
  lcd.print("Baabaa Black");
  lcd.setCursor(0, 1);
  lcd.print("Sheep");
  delay(9725);
  lcd.clear();
  delay(3000);
  lcd.print("Mary had a");
  lcd.setCursor(0, 1);
  lcd.print("Little Lamb");
  delay(10445);
  lcd.clear();
  delay(3000);
  lcd.print("Humpty Dumpty");
  delay(5763);
  lcd.clear();
  delay(3000);
  lcd.print("Jack and Jill");
  delay(5402);
  lcd.clear();
  delay(3000);
  lcd.print("Baby Shark");
  delay(11165);
  lcd.clear();
  delay(3000);
  lcd.print("ABCD song");
  delay(17289);
  lcd.clear();
  delay(3000);
  lcd.print("Dashing Through");
  lcd.setCursor(0, 1);
  lcd.print("The Snow");
  delay(32957);
  lcd.clear();
  
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
