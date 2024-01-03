#include <TinyGPS.h>
#include <DHT11.h>
#include<LiquidCrystal.h>
#define Sensor A0
TinyGPS gps;
LiquidCrystal lcd(13,12,11,10,9,8);
int flame_detected ;
DHT11 dht11(2);
void setup() 
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(1, INPUT) ;
  pinMode(7, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() 
{
  // GPS Module
  bool newData = false;
  unsigned long chars;
  unsigned short sentences, failed;

  // For one second we parse GPS data and report some key values
  for (unsigned long start = millis(); millis() - start < 1000;)
  {
    while (Serial.available())
    { char c = Serial.read();
     
      if (gps.encode(c)) // Did a new valid sentence come in?
        newData = true;
    }
  }

  if (newData)
  {
    float flat, flon;
    unsigned long age;
    gps.f_get_position(&flat, &flon, &age);
    lcd.clear();
    lcd.print("LAT:");
    lcd.print(flat, 5);

    lcd.setCursor(0, 1);
    lcd.print("LON:");
    lcd.print(flon, 5);
    
  }
  gps.stats(&chars, &sentences, &failed);
  delay(3000);


  lcd.clear();
  // Flame Sensor
  flame_detected = digitalRead(3) ;
  if (flame_detected == 1)
  {
    digitalWrite(7,HIGH);
    lcd.print("Flame detected!");
    delay(1000);
    digitalWrite(7,LOW);
  }
  // Gas Sensor
  lcd.clear();
  int value=analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print("Gas Concen..");
  lcd.setCursor(0,1);
  lcd.print(value);
  if(value>200)
  {
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
  }
  delay(500);
  lcd.clear();
  // Temperature and Humidity Sensor
  int temperature = dht11.readTemperature();
  int humidity = dht11.readHumidity();
  lcd.print("Temp..: ");
  lcd.print(temperature);
  lcd.print( (char)223); // displaying degree symbol (°).
  lcd.print("C");
  if(temperature>46 || humidity>60)
  {
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
  }
  lcd.setCursor(1,1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.println(" %");
  delay(500);
}
