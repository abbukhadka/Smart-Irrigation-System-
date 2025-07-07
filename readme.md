
# Smart Irrigation System 

An IoT-powered Smart Irrigation System that automates the plant watering process by monitoring real-time environmental data such as soil moisture, temperature, and humidity, using NodeMCU, sensors, and the Blynk App for remote control and monitoring.


## Key Features

**Automated Watering System:**
Waters plants based on soil moisture levels using a water pump controlled via a relay.

**Temperature & Humidity Monitoring:** 
Real-time sensing using the DHT11 sensor module.

**Remote Monitoring with Blynk:** 
View live data and control irrigation from your smartphone using the Blynk IoT app.

**Wi-Fi Enabled with NodeMCU (ESP8266):** 
Enables wireless connectivity to send data and receive commands.

**Water Conservation:**
Prevents over-watering and minimizes water usage using smart logic.



## Hardware Components


### Component	    
                
**NodeMCU (ESP8266):**
Wi-Fi-enabled microcontroller for data processing & IoT

**Soil Moisture Sensor:**
Measures soil water levels

**DHT11 Sensor:**	
Measures ambient temperature and humidity

**Relay Module (5V):**	
Switches pump ON/OFF based on sensor data

**DC Water Pump (3–6V):**	
Pumps water when moisture is below threshold

**Blynk App:**	
Mobile app for IoT dashboard and control
## How It Works

Soil moisture and weather data are read by sensors.

NodeMCU processes data and sends it to Blynk.

If soil is dry, relay activates pump to water the plant.

Users can monitor and control the system via smartphone.
## Power Management

NodeMCU powered via USB or battery.

Pump powered through relay using external battery source.
## Benefits

Conserves water

Promotes healthy plant growth

Reduces manual labor

Easy to scale and upgrade
## Challenges & Future Enhancements


Power supply optimization for field deployment

Integrating AI for predictive irrigation

Cloud-based data storage and analytics


## Tech Stack

**Hardware:** NodeMCU (ESP8266), Soil Moisture Sensor, DHT11 (Temp & Humidity), 5V Relay Module, DC Water Pump (3–6V)

**Software:** Arduino IDE, Blynk App, Blynk, DHT, OneWire Libraries

