#include <Adafruit_NeoPixel.h>

// create a pixel strand with 1 pixel on PIN_NEOPIXEL
Adafruit_NeoPixel pixels(1, PIN_NEOPIXEL);

void setup() {
    pixels.begin();  // initialize the pixel
}

void loop() {
    // set the first pixel #0 to green
    pixels.setPixelColor(0, pixels.Color(0, 150, 0));
    // and write the data
    pixels.show();
    Serial.println("LED ON Green");
  
    delay(1000);

    // change color
    pixels.setPixelColor(0, pixels.Color(75, 75, 0));
    // and write the data
    pixels.show();
    Serial.println("LED ON Orange");
  
    delay(1000);

    // change color
    pixels.setPixelColor(0, pixels.Color(150, 0, 0));
    // and write the data
    pixels.show();
    Serial.println("LED ON Red");
  
    delay(1000);

    // change color
    pixels.setPixelColor(0, pixels.Color(75, 0, 75));
    // and write the data
    pixels.show();
    Serial.println("LED ON Purple");
  
    delay(1000);

    // change color
    pixels.setPixelColor(0, pixels.Color(0, 0, 150));
    // and write the data
    pixels.show();
    Serial.println("LED ON Blue");
  
    delay(1000);

    // change color
    pixels.setPixelColor(0, pixels.Color(0, 75, 75));
    // and write the data
    pixels.show();
    Serial.println("LED ON Teal");
  
    delay(1000);
    
    // turn off the pixel
    pixels.clear();
    pixels.show();
    Serial.println("LED OFF 5 sec");
  
    delay(5000);
}