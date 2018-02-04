/*
 *  NAME: ScreenSaver Mouse Jiggler
 *  DATE: 2016-10-20
 *  DESC: Arduino based mouse emulator, preventing computer screen-saver from
 *      kicking in and locking desktop (eg. during forensic investigation).
 *  AUTHOR: nshadov
 *  VERSION: 1.1
 *  UPDATED: 2018-2-4 by RossHev
 */
 
#include <Mouse.h>

// This is run once, during device initialization
void setup()
{
  Mouse.begin();
}

// Main loop - move mouse back and forth every 10 seconds
void loop()
{
  delay(1000);

  while(true) { 
    Mouse.move(3,0,0);
    delay(1000);
    Mouse.move(-3,0,0);

    delay(10000);
  }
}
