//LCD
// the alternate is to change to the other lilbrary
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void screen(int c);

//GSM
//add the number of the new SIM of mohamed
#include <SoftwareSerial.h>
SoftwareSerial s (10,9);
void ring();
void message(int c);

//counter for display number of fires
int counter=0;
int countFlame=0;
//long timer1=0;

//Motor initializations
#include <AFMotor.h>
void Motors (char d);

//IR initializations
char IR(int s1,int s2,int s3,int s4, int s5);
#define S1 A0
#define S2 A1
#define S3 A2
#define S4 A3
#define S5 3

//Flame sensor
//see if 1 produces high or 0 produces high
int flame(int);
#define flam 2

//Buzzer
//see if the tone is conveneint or the function need to be altered
#define buz   13

//Bluetooth
char blue();

void setup() {
  Serial.begin(9600);
  s.begin(9600);
  delay (5000);
  //LCD
  lcd.init();
  lcd.backlight();
  //IR
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  pinMode(S5,INPUT);  
  //flame
  pinMode(flam,INPUT);
  //buzzer
  pinMode(buz,OUTPUT);
  screen(counter);
//  timer1=millis();
}

void loop() {
 
  

  //IR reading
  int a1=digitalRead(S1);
  int a2=digitalRead(S2);
  int a3=digitalRead(S3);
  int a4=digitalRead(S4);
  int a5=digitalRead(S5);

  //Motor direction
  char direct = IR(a1,a2,a3,a4,a5);
  Motors(direct);
  //Bluetooth
 // char r = blue();
 // if(r!='I')Motors(r); 
}
