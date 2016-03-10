
/**************************** 

 ARDUINO BATTERY CHARGE 
  
 Created 18-6-2014

 
 VASCO PEREIRA
 
 Approximate state of charge on Open Circuit Voltage:
 100% -> 12.65V | 75% -> 12.45V | 50% -> 12.24V | 25% -> 12.06V | 0% -> 11.89V 
 I2C: A4 (SDA) and A5 (SCL).
 *****************************/
 
// ALL OK

//--- lIBRARY
#include <UTFT.h>
#include <UTouch.h>
#include <Wire.h>
#include <RTClib.h>  
#include <Event.h>
#include <Timer.h>
#include <TimedAction.h>
#include "Config.h"
#include <EEPROM.h>

// Initialize display
// ------------------
// Set the pins to the correct ones for your development board
// -----------------------------------------------------------
// Standard Arduino Uno/2009 Shield            : <display model>,19,18,17,16
// Standard Arduino Mega/Due shield            : <display model>,38,39,40,41
// CTE TFT LCD/SD Shield for Arduino Due       : <display model>,25,26,27,28
// Teensy 3.x TFT Test Board                   : <display model>,23,22, 3, 4
// ElecHouse TFT LCD/SD Shield for Arduino Due : <display model>,22,23,31,33
//
// Uncomment the next line for Arduino Mega
UTFT myGLCD(ITDB32S,38,39,40,41);   // Remember to change the model parameter to suit your display module!

// Initialize touchscreen
// ----------------------
// Set the pins to the correct ones for your development board
// -----------------------------------------------------------
// Standard Arduino Uno/2009 Shield            : 15,10,14, 9, 8
// Standard Arduino Mega/Due shield            :  6, 5, 4, 3, 2
// CTE TFT LCD/SD Shield for Arduino Due       :  6, 5, 4, 3, 2
// Teensy 3.x TFT Test Board                   : 26,31,27,28,29
// ElecHouse TFT LCD/SD Shield for Arduino Due : 25,26,27,29,30
//
UTouch  myTouch( 6, 5, 4, 3, 2);

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];

//--- SENSORS INIT                                    
RTC_DS1307 RTC;

//--- PIN DEFINICION 
// Analog Pins
#define BATT_PIN A1       //Input Bateria
//#define CHG_PIN  A1      //Input Carregador
//#define ACS712   A2       //input Carregador Amp

// digital pins  (SDA - A4 || SCL - A5)
#define RL1         8        //Liga o Carregador
#define RL2         9       // Carrega bateria

unsigned long currentMillisWait = 0;
unsigned long currentMillisCharge = 0;
unsigned long previousMillisCharge = 0;

//this initializes a TimedAction object.
//Put here all Tasks
TimedAction Values_PrintAction = TimedAction (2000, Values_Print);
TimedAction BattChargeAction = TimedAction (5000, BattCharge);


//--- RTC - Char Definition
const int DS1307 = 0x68; // Address of DS1307 see data sheets
const char* days[] =
{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const char* months[] =
{"January", "February", "March", "April", "May", "June", "July", "August","September", "October", "November", "December"};
 
byte second = 0;
byte minute = 0;
byte hour = 0;
byte weekday = 0;
byte monthday = 0;
byte month = 0;
byte year = 0;


//--- VOID SETUP 
void setup() {
  
  Serial.begin(57600); 
  
 //--- RTC INIT
  Wire.begin();
  RTC.begin();
 
  // Setup the LCD
  myGLCD.InitLCD();
  myTouch.InitTouch();
  myGLCD.clrScr();
  myTouch.setPrecision(PREC_HI);
  myGLCD.setBackColor(0, 0, 0);

  LCD_boot();
  Draw_Panel();
  //drawButtons();

Values_PrintAction.enable();
BattChargeAction.enable();


//--- DEFINITION INPUTS/OUTPUTS 
  // analog pins
  pinMode(BATT_PIN,INPUT);
  //pinMode(CHG_PIN,INPUT);
  //pinMode(ACS712,INPUT);
   
  pinMode(RL1,OUTPUT);
  pinMode(RL2,OUTPUT);
  
  digitalWrite(RL1, LOW);     
  digitalWrite(RL2, HIGH);
  
//--- DESMARCAR PARA ACERTAR A HORA 
 //Acertar_Hora();

 battLevel1 = analogRead( BATT_PIN );
  delay(10);
  battLevel2 = analogRead( BATT_PIN );
  delay(10);
  battLevel3 = analogRead( BATT_PIN );
  delay(10);
  battLevel4 = analogRead( BATT_PIN );
  delay(10);
  battLevel5 = analogRead( BATT_PIN );
  delay(10);
  battLevel6 = analogRead( BATT_PIN );
  delay(10); 
  battLevel7 = analogRead( BATT_PIN );
  delay(10);
  battLevel8 = analogRead( BATT_PIN );
  delay(10);
  battLevel9 = analogRead( BATT_PIN );
  delay(10);
  battLevel10 = analogRead( BATT_PIN );
  
  battLevel = ((battLevel1 + battLevel2 + battLevel3 + battLevel4 + battLevel5 + battLevel6 + battLevel7 + battLevel8 + battLevel9 + battLevel10)/10);
  valBatt = (battLevel * 0.0048631476050831)/0.192;   //0.0048631476050831  -  0.199

}

//--- VOID LOOP 
void loop() {

//Start all tasks here
Values_PrintAction.check();
BattChargeAction.check();
 
 }  
//--- END VOID LOOP 

 byte decToBcd(byte val) {
  return ((val/10*16) + (val%10));
}
byte bcdToDec(byte val) {
  return ((val/16*10) + (val%16));
}

//---
void setTime() {
 
  Serial.print(F("Please enter the current year, 00-99. - "));
  year = readByte();
  Serial.println(year);
  Serial.print(F("Please enter the current month, 1-12. - "));
  month = readByte();
  Serial.println(months[month-1]);
  Serial.print(F("Please enter the current day of the month, 1-31. - "));
  monthday = readByte();
  Serial.println(monthday);
  Serial.println(F("Please enter the current day of the week, 1-7."));
  Serial.print(F("1 Sun | 2 Mon | 3 Tues | 4 Weds | 5 Thu | 6 Fri | 7 Sat - "));
  weekday = readByte();
  Serial.println(days[weekday-1]);
  Serial.print(F("Please enter the current hour in 24hr format, 0-23. - "));
  hour = readByte();
  Serial.println(hour);
  Serial.print(F("Please enter the current minute, 0-59. - "));
  minute = readByte();
  Serial.println(minute);
  second = 0;
  Serial.println(F("The data has been entered."));
 
  // The following codes transmits the data to the RTC
  Wire.beginTransmission(DS1307);
  Wire.write(byte(0));
  Wire.write(decToBcd(second));
  Wire.write(decToBcd(minute));
  Wire.write(decToBcd(hour));
  Wire.write(decToBcd(weekday));
  Wire.write(decToBcd(monthday));
  Wire.write(decToBcd(month));
  Wire.write(decToBcd(year));
  Wire.write(byte(0));
  Wire.endTransmission();
  // Ends transmission of data
}

byte readByte() {
  while (!Serial.available()) delay(10);
  byte reading = 0;
  byte incomingByte = Serial.read();
  while (incomingByte != '\n') {
    if (incomingByte >= '0' && incomingByte <= '9')
      reading = reading * 10 + (incomingByte - '0');
    else;
    incomingByte = Serial.read();
  }
  Serial.flush();
  return reading;
}

//---
void printTime() {
  char buffer[3];
  readTime();
  Serial.print(days[weekday-1]);
  Serial.print(F(" "));
  Serial.print(months[month-1]);
  Serial.print(F(" "));
  Serial.print(monthday);
  Serial.print(F(", 20"));
  Serial.print(year);
  Serial.print(F(" "));
  /*if (hour > 12) {
    hour -= 12;
    AMPM = " PM";
  }
  else AMPM = " AM";*/
  Serial.print(hour);
  Serial.print(F(":"));
  sprintf(buffer, "%02d", minute);
  Serial.print(buffer);
  //Serial.println(AMPM);
}

//---
void readTime() {
  Wire.beginTransmission(DS1307);
  Wire.write(byte(0));
  Wire.endTransmission();
  Wire.requestFrom(DS1307, 7);
  second = bcdToDec(Wire.read());
  minute = bcdToDec(Wire.read());
  hour = bcdToDec(Wire.read());
  weekday = bcdToDec(Wire.read());
  monthday = bcdToDec(Wire.read());
  month = bcdToDec(Wire.read());
  year = bcdToDec(Wire.read());
}

//--- FIM  DO PROGRAMA 


