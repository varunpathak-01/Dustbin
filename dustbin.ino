#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int trig=9;
const int echo=10;
void setup()
{ Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(11,OUTPUT);
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
int i,y;
Serial.println(d);
if(d<=5)
{lcd.begin(16, 2);
  lcd.print("Dustbin Full!!");
  delay(300);
 }
 else
 {i=21-d;
 //y=(i/21)*100;
 lcd.begin(16, 2);
   lcd.print("Storage-");
   lcd.print(i);
   lcd.print("cm");
   
  
   delay(300);
 }
}
