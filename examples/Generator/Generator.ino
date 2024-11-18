/*
 * 
 * Example sketch to generate random Lorem Ipsum sentences and paragraphs
 * 
 * Click here to get the library:http://librarymanager/All#loremipsum
 * 
 */

#include <loremipsum.h>

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("\r\nGenerating Lorem Ipsum...");
}

void loop() {
  delay(5000);
  if(random(0,10) > 7)
  {
    Serial.println(loremipsum.paragraph());
  }
  else
  {
    Serial.println(loremipsum.sentence());
  }
}
