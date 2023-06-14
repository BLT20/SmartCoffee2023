// SD Card Module
#include <SPI.h>
#include <SD.h>

// Real Time Clock (RTC)
#include "RTClib.h"
RTC_Millis rtc;     // Software Real Time Clock (RTC)
DateTime rightNow;  // used to store the current time.

// SD Card - Confirm Pin
#define SDpin 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Open serial communications and wait for port to open:
  while (!Serial) {
    delay(1);  // wait for serial port to connect. Needed for native USB port only
  }

  // SD Card initialisation
 // Serial.print("Initializing SD card...");
//  if (!SD.begin(SDpin)) {
  //  Serial.println("initialization failed!");
  //  while (1)
  //    ;
  }
// Real Time Clock (RTC)
//  rtc.begin(DateTime(F(__DATE__), F(__TIME__)));
  //Serial.println("initialization done.");
//logEvent("System Initialisation...");
//}

void loop() {
  // put your main code here, to run repeatedly:
  userLocation();
  cupLocation();
  buttonPressed();
  delay(250);
}

/*
 Detects if the user is within range to activate the coffee machine.
 @params none
 @returns none
 */
void userLocation () {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin HIGH (ACTIVE) for 10 microseconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
long duration = pulseIn(echoPin, HIGH);
// Calculating the distance
int distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
// read sonar
// if user within range
// read line sensor
}

/*
 Detects if there is a coffee cup in the machine.
 @params none
 @returns none
 */
void cupLocation () {
int lineSensorValue = digitalRead(lineSensorPin);
// read line sensor
// if true
// activate machine
}

/*
 Detects if the button is pressed, Manually activiating the coffee machine if the other functions fail.
 @params none
 @returns none
 */
void buttonPressed () {
int crashSensorValue = digitalRead(crashSensor);
// read crash sensor
// if true
// activate machine
}
