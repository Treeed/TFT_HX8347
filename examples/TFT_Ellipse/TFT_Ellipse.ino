/*
  Ellipse drawing example

  This sketch does not use any fonts.
*/

#include <TFT_HX8347.h> // Hardware-specific library
#include <SPI.h>

TFT_HX8347 tft = TFT_HX8347();       // Invoke custom library

void setup(void) {
  tft.init();

  tft.setRotation(1);

}

void loop() {

  tft.fillScreen(TFT_BLACK);

  // Draw some random circles
  for (int i = 0; i < 40; i++)
  {
    int rx = random(60);
    int ry = random(60);
    int x = rx + random(320 - rx - rx);
    int y = ry + random(240 - ry - ry);
    tft.fillEllipse(x, y, rx, ry, random(0xFFFF));
  }

  delay(2000);
  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i < 40; i++)
  {
    int rx = random(60);
    int ry = random(60);
    int x = rx + random(320 - rx - rx);
    int y = ry + random(240 - ry - ry);
    tft.drawEllipse(x, y, rx, ry, random(0xFFFF));
  }

  delay(2000);
}



