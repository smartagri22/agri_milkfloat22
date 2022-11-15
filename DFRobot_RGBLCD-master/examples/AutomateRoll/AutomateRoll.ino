
#include "DFRobot_RGBLCD.h"

DFRobot_RGBLCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
    // initialize
    lcd.init();
lcd.print("HOWYA");
}
void loop() {

}
