// Libraries einbinden
#include <dht11.h>

dht11 DHT11;
#define DHT11PIN 8

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Temp: ");
  Serial.println((float)DHT11.temperature, 2);
  Serial.print("Humidity: ");
  Serial.println((float)DHT11.humidity, 2);

  delay(2000);
}
