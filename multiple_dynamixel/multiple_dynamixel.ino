#include <DynamixelSerial.h>

void setup(){
Dynamixel.setSerial(&Serial); // &Serial - Arduino UNO/NANO/MICRO, &Serial1, &Serial2, &Serial3 - Arduino Mega
Dynamixel.begin(57000,2);  // Inicialize the servo at 1 Mbps and Pin Control 2
delay(1000);
}

void loop(){
//
Dynamixel.action();
 
  //Dynamixel.move(9,700);
Dynamixel.move(254,800);  
  delay(1000);
 Dynamixel.move(254,200);  
   Dynamixel.move(7,800);  
  delay(1000);
   Dynamixel.move(7,200);  
   Dynamixel.move(8,800);  
  delay(1000);
  Dynamixel.move(8,200);  
 
  Dynamixel.move(9,800);  
  delay(1000);
  Dynamixel.move(9,200);  
 
  Dynamixel.move(10,800);  
  delay(1000);
   Dynamixel.move(10,200);  
 
   Dynamixel.move(11,800);  
  delay(1000);
  Dynamixel.move(11,200);  
 
   Dynamixel.move(12,800);  
  delay(1000);
   Dynamixel.move(12,200);  
 
   Dynamixel.move(13,800);  
  delay(1000);
   Dynamixel.move(13,200);  
  
  Dynamixel.move(254,700);  
  delay(1000);
  Dynamixel.moveSpeed(254,random(200,800),random(200,800));
  delay(2000);
  Dynamixel.setEndless(254,ON);
  Dynamixel.turn(254,RIGTH,1000);
  delay(3000);
  Dynamixel.turn(254,LEFT,1000);
  Dynamixel.setEndless(254,OFF);
  Dynamixel.ledStatus(254,ON);
  Dynamixel.moveRW(254,512);
  delay(1000);
  Dynamixel.action();
 
//delay(1000);
}
