#include <DFRobot_DHT11.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(4,5,6,7,8,9);
DFRobot_DHT11 DHT;
#define DHT11_PIN 2
const int led_temp = 12;
const int led_gas = 11;
const int flame = 3;
const int led_flame = 10;
void setup(){
  Serial.begin(9600);
  pinMode(led_temp,OUTPUT);
  pinMode(led_gas,OUTPUT);
  pinMode(flame,INPUT);
  pinMode(led_flame,OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("SMART JACKET");
  lcd.setCursor(0,1);
  lcd.print("Present by Ritik");
   delay(1000);
   lcd.clear();
   
}

void loop(){

  int sensorValue = analogRead(A1);
  int fire = digitalRead(flame);

  
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  lcd.clear();

 lcd.setCursor(0,0);
 lcd.print("T:");
 lcd.print(DHT.temperature);
 lcd.print("'C");

 lcd.setCursor(10,1);
 lcd.print("H:");
 lcd.print(DHT.humidity);
 lcd.print("%");

  lcd.setCursor(0,1);
 lcd.print("G:");
 lcd.print(lround(sensorValue*9.5));
 lcd.print("ppm");
 
  Serial.print(DHT.temperature);
  Serial.print("'C");
  Serial.print("  humi:");
  Serial.print(DHT.humidity);
  Serial.print(" % ");
  Serial.print("Gas analog Value : ");
  Serial.print(sensorValue*9.5);
  Serial.print(" ");

  if(DHT.temperature  < 35)
  {

    digitalWrite(led_temp,HIGH); 
  }

  if(DHT.temperature  >= 30)
  {

    digitalWrite(led_temp,LOW); 
  }
  if(sensorValue < 500)
  {
    digitalWrite(led_gas,HIGH);
  }
  if(sensorValue >= 500)
  {
    digitalWrite(led_gas,LOW);
  }


  if(fire == LOW)
  {

    Serial.println("fire detect !!!!!!");
    digitalWrite(led_flame,HIGH);
//    lcd.setCursor(8,0);
//    lcd.print("FIRE!!!!!");
  }
  else if(fire == HIGH)
  {
    digitalWrite(led_flame,LOW);
    Serial.println("no fire detect");
    //lcd.clear();
//    lcd.setCursor(8,0);
//    lcd.print("NO FIRE");
  }

  
  Serial.println();
  delay(1000);

}
