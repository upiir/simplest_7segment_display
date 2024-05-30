// Simplest possible custom 7-segment display using NeoPixel strip, Arduino UNO and 3D printed enclosure. No soldering required. See video for details.

// created by upir, 2024
// youtube channel: https://www.youtube.com/upir_upir

// YouTube video: https://youtu.be/_pNuaVKABN4
// Source files: https://github.com/upiir/simplest_7segment_display
// WOKWI sketch: https://wokwi.com/projects/399315041436179457

// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// BambuLab A1 Mini Combo 3D Printer: https://shareasale.com/r.cfm?b=2420414&u=3422904&m=138211&urllink=&afftrack=
// Arduino UNO screw shield: https://s.click.aliexpress.com/e/_DEYq6YJ
// Arduino UNO screw shield smaller: https://s.click.aliexpress.com/e/_DCY9kPH
// Arduino UNO R3: https://s.click.aliexpress.com/e/_AXDw1h
// Arduino breadboard prototyping shield: https://s.click.aliexpress.com/e/_ApbCwx
// NeoPixel strip (48D): https://s.click.aliexpress.com/e/_DlXZNSB
// Translucent acrylic sheets: https://s.click.aliexpress.com/e/_DBCYJQR
// NeoPixel connectors: https://s.click.aliexpress.com/e/_DDf6swj
// NeoPixel strip cables: https://s.click.aliexpress.com/e/_DdhesSb
// Adafruit NeoPixel documentation: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use

// Related videos:
// Fusion and 3D printing: https://youtu.be/HcP48uCBzDQ
// NeoPixels: https://youtu.be/1NI-I1Lpdqo
// Segmented Displays: https://youtu.be/jz01j1TpM84


#include <Adafruit_NeoPixel.h> // used Adafruit library (see documentation above)

#define LED_PIN    6 // to which pin on Arduino UNO is connected the data pin from the NeoPixel strip
#define LED_COUNT 22 // number of LEDs = 7 segments * 3 LEDs per segment + 1 extra LED outside that is not used (required for easy bending of the strip)

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800); // initializing of the NeoPixel strip

void setup() {
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
}



void loop() {

  unsigned int hue = random(65535); // set random hue for the color

  // the code below will toggle between digits 0-9 in random colors
  // the individual segments on the 7-segment display are as follows:
  //                          
  //       ┌───────────┐      
  //       │     A     │      
  //       ├┬─────────┬┤      
  //    ┌──┴┤         ├┴──┐   
  //    │   │         │   │   
  //    │ F │         │ B │   
  //    │   │         │   │   
  //    └──┬┤         ├┬──┘   
  //       ├┴─────────┴┤      
  //       │     G     │      
  //       ├┬─────────┬┤      
  //    ┌──┴┤         ├┴──┐   
  //    │   │         │   │   
  //    │ E │         │ C │   
  //    │   │         │   │   
  //    └──┬┤         ├┬──┘   
  //       ├┴─────────┴┤      
  //       │     D     │      
  //       └───────────┘      
  //                                           


  
  // digit 0
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  /*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  ///*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 1
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  ///*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  ///*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  ///*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  ///*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 2
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  ///*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  /*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  ///*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 3
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  ///*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 4
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  ///*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  ///*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 5
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  ///*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 6
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  ///*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  /*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 7
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  ///*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  ///*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  ///*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 8
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  /*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay

  // digit 9
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 7, strip.ColorHSV(hue));  strip.setPixelColor( 8, strip.ColorHSV(hue));  strip.setPixelColor( 9, strip.ColorHSV(hue)); //a
  /*b*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  strip.setPixelColor( 5, strip.ColorHSV(hue));  strip.setPixelColor( 6, strip.ColorHSV(hue)); //b
  /*c*/ strip.setPixelColor(19, strip.ColorHSV(hue));  strip.setPixelColor(20, strip.ColorHSV(hue));  strip.setPixelColor(21, strip.ColorHSV(hue)); //c
  /*d*/ strip.setPixelColor(16, strip.ColorHSV(hue));  strip.setPixelColor(17, strip.ColorHSV(hue));  strip.setPixelColor(18, strip.ColorHSV(hue)); //d
  ///*e*/ strip.setPixelColor(13, strip.ColorHSV(hue));  strip.setPixelColor(14, strip.ColorHSV(hue));  strip.setPixelColor(15, strip.ColorHSV(hue)); //e
  /*f*/ strip.setPixelColor(10, strip.ColorHSV(hue));  strip.setPixelColor(11, strip.ColorHSV(hue));  strip.setPixelColor(12, strip.ColorHSV(hue)); //f
  /*g*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  strip.setPixelColor( 2, strip.ColorHSV(hue));  strip.setPixelColor( 3, strip.ColorHSV(hue)); //g
  strip.show(); // Update strip to match
  delay(500); // delay                  



}
