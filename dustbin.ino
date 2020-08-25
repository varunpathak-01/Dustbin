// include the library code:
#include <LiquidCrystal.h>
const int trig=9;
const int echo=10;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
pinMode(8,OUTPUT); 
}

void loop() {
  digitalWrite(trig,HIGH);
  digitalWrite(8,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
delayMicroseconds(10);
long x=pulseIn(echo,HIGH);
int d=x/29/2;
Serial.println(d);
 lcd.begin(16, 2);
  lcd.print("water level-");
 lcd.print(d);
 delay(1000);
}

