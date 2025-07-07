#define BLYNK_PRINT Serial
#include <OneWire.h>
#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS D2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

char auth[] = "BOsoqmyvsdJSenk51n6EplHN0jqela_aajwi";
char ssid[] = "Iqbal";
char pass[] = "Password";

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;

void sendSensor() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V5, h);
  Blynk.virtualWrite(V6, t);
}

void sendTemps() {
  int sensor = analogRead(A0);
  int output = (145 - map(sensor, 0, 1023, 0, 100));
  
  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);
  
  Serial.print("DS18B20 Temp: ");
  Serial.println(temp);
  Serial.print("Moisture = ");
  Serial.print(output);
  Serial.println("%");

  Blynk.virtualWrite(V1, temp);
  Blynk.virtualWrite(V2, output);
}

void setup() {
  Serial.begin(9600);
  dht.begin();
  sensors.begin();
  Blynk.begin(auth, ssid, pass);

  timer.setInterval(1000L, sendSensor);
  timer.setInterval(2000L, sendTemps);
}

void loop() {
  Blynk.run();
  timer.run();
}
