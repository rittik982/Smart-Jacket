Detailed Methodology
The implementation of the "Smart Jacket for Coal Mine Workers" involves the integration of various sensors and communication modules to enhance safety and provide real-time environmental monitoring for coal mine workers. 
The following detailed methodology outlines the steps taken to implement the project using Proteus software for simulation and physical hardware for practical application.
1. Sensor Selection and Integration:
Gas Sensor: Choose a gas sensor suitable for detecting common hazardous gases in coal
mines, such as methane and carbon monoxide. Integrate the gas sensor into the hardware to
monitor gas levels in real-time.
Flame Sensor: Select a flame sensor to detect any unexpected fires within the coal mine.
Integrate the flame sensor to trigger an alert in case of a fire hazard.
Temperature and Humidity Sensor: Choose sensors capable of operating in challenging
environmental conditions. Integrate these sensors to monitor temperature and humidity inside
the coal mine.
2. Microcontroller Configuration:
Utilize Arduino Uno as the primary microcontroller for processing sensor data and controlling
output devices.
Connect the selected sensors to the Arduino Uno to receive data from the gas sensor, flame
sensor, and temperature and humidity sensor.
3. Communication Module Integration:
Employ ESP8266 NodeMCU as the communication module to enable data transmission.
Connect the ESP8266 NodeMCU to the Arduino Uno, establishing a communication link
between the sensors and the central processing unit.
4. Output Devices Configuration:
Integrate output devices, such as LEDs and a buzzer, to provide visual and audible alerts in
case of detected hazards.
LCD Display prints results of the sensor on the screen.
Configure the system to activate the red LED and sound the buzzer when the flame sensor
detects a fire hazard.
5. Proteus Simulation:
Develop a hardware structure in Proteus software that replicates the physical connections and
components of the proposed smart jacket system.
Simulate the behavior of the gas sensor, flame sensor, and temperature and humidity sensor in
response to environmental changes within the virtual coal mine environment.
6. Hardware Implementation:
Assemble the physical components based on the simulated design in the Proteus software.
Connect the gas sensor, flame sensor, temperature and humidity sensor, Arduino Uno, and
ESP8266 NodeMCU as per the designed structure.
7. Functional Testing:
Test the functionality of the smart jacket by exposing it to simulated hazardous conditions,
such as the presence of gas or flames, to observe the system's response.
Ensure that the LEDs and buzzer activate appropriately in response to detected hazards.
8. Validation and Calibration:
Validate the accuracy of sensor readings in real-world conditions, ensuring that the smart jacket
provides reliable data for environmental monitoring.
Calibrate the sensors if necessary to improve precision and responsiveness.
9. User Interface Considerations:
Design a user-friendly interface to convey information to the coal mine workers about
environmental conditions.
Implement an alert system that communicates the nature of detected hazards to users for
prompt and informed responses.
The methodology involves a systematic approach, beginning with sensor selection and
integration, progressing through microcontroller and communication module configuration,
and concluding with thorough testing, validation, and calibration. The use of Proteus software
for simulation provides a virtual environment for initial testing before transitioning to physical
hardware for practical implementation in real-world conditions.
3.2. All about equipments used:
Sensors:
Temperature sensor
Temperature sensor used in this smart jacket is LM35. LM35 has 3 pins i.e. Ground (GND)
pin,VCC(+5V),and an analog output. It is rated with a temperature range from -25oC to
+125oC.The 1
oC change in temperature generates near-about 10 mV. The specified limits in the
smart helmet is 36oC to 39oC.Whenever the temperature operates in between these limits,
buzzer and vibrating motor acts and gives a rescue signal.
Gas Sensor
The gas sensor used here is MQ5 which primarily detects the presence of methane gas with a
concentration range of 300 ppm to 10000 ppm. This range is considerably good to detect any
presence of gas leaks in the mines or any petroleum industry. This sensor is a 4 pin sensor with
one pin open means with no connection while other three pins are VCC (+5V), a ground
(GND), and an analog output which can be connected to any of the analog pins of the analog.
A resistance of 1K is connected between the ground pin and analog output pin. The
temperature operating range of this sensor is in between -10oC to 50oC and consumption is
less than 150 mA at 5V.
Humidity Sensor
Humidity Sensor is used to give workers favorable working conditions. It is a 4 pin sensor. It
has a VCC (+5V), a ground (GND) and a data pin. One of the pins has no connection, it acts as
open. The two probes are inserted in the soil which gives the presence of water in the soil. So it
can be also used to detect the presence of the water inside the mine. The muddy surface is not
safe workable conditions for the workers. Humidity is the amount of water present in the air. It
is the parameter in the wellness of mankind. We may feel comfortable when the air is dry,
where temperature is 0
oC and also the surroundings may not feel comfortable to us when
humidity is high when temperature is 100oC.
Alarming System:
Buzzer
It is a two terminal audio signalling device.one of the terminal is connected to +5V whereas
other is connected to the Ground. It consumes 70 mA while giving audio-signalling. Buzzer
can attract the focus of the workers on the danger. Buzzer acts in coordination with the
vibration motor.
LED
LED is used for light signalling. Combination of multiple LED's in a single strip can create a
higher amount of light waves, which are sufficient for distracting people from their work and
giving them signals of danger. LED's work in coordination with the vibration motor and
buzzer.
LCD
LCD is used for continuous monitoring and controlling purposes. Yes, miners can’t see these
less interesting parameters on the screen of LCD but those values can be used for controlling
and rescuing people from mines, only if it is interfaced with the outer controlling station.
Microcontrollers:
Arduino Uno
The Arduino Uno is a micro-controller board dependent on the ATmega328P. Its structure
consists of 14 digital input/output pins , 6 analog inputs, 16 MHz quartz crystal, USB
connection, a power pin, an ICSP header and a reset button. Essentially associate it to a PC
with a USB link or force it with an AC-to-DC connector or battery to begin.
The Arduino Uno serves as the central microcontroller in the "Smart Jacket for Coal Mine
Workers" project, playing a pivotal role in processing sensor data, controlling output devices,
and facilitating communication with the ESP8266 NodeMCU.
Key Features of Arduino Uno:
Microcontroller: Arduino Uno is equipped with the ATmega328P microcontroller, providing
ample processing power for handling sensor data and executing control logic.
Digital and Analog Pins: The board offers a combination of digital and analog pins, allowing
seamless integration with various sensors. The digital pins are used for controlling output
devices like LEDs and buzzers, while the analog pins receive data from sensors such as gas,
flame, temperature, and humidity sensors.
Input/Output Interfaces: Arduino Uno features multiple input/output interfaces, enabling
connectivity with a diverse range of electronic components. This versatility is crucial for
integrating sensors and output devices in the smart jacket.
USB Interface: The USB interface facilitates easy programming and communication with
external devices. It simplifies the process of uploading code to the Arduino Uno for testing and
modification.
Open-Source Platform: Arduino Uno operates on an open-source platform, providing access to
a vast community of developers and a rich ecosystem of libraries and resources. This open
nature fosters collaborative problem-solving and innovation.
Role in the Smart Jacket Project:
Sensor Data Processing: Arduino Uno processes data received from the gas sensor, flame
sensor, temperature and humidity sensor, interpreting the environmental conditions within the
coal mine.
Control Logic Execution: The microcontroller executes control logic to trigger alerts and
activate output devices, such as the red LED and buzzer, in response to detected hazards.
Communication with ESP8266 NodeMCU: Arduino Uno establishes communication with the
ESP8266 NodeMCU, enabling wireless transmission of data to a central monitoring system.
This wireless communication facilitates real-time monitoring and enhances the overall
responsiveness of the smart jacket.
Real-Time Decision Making: With its real-time processing capabilities, Arduino Uno plays a
crucial role in making rapid decisions based on sensor data. This ensures timely alerts and
appropriate responses to potential dangers faced by coal mine workers.
ESP8266
The ESP8266 serves as the communication module in the "Smart Jacket for Coal Mine
Workers" project, enabling wireless data transmission and connectivity between the Arduino
Uno and external monitoring systems.
Key Features of ESP8266:
Wireless Connectivity: ESP8266 is renowned for its built-in Wi-Fi capabilities, allowing
seamless wireless communication. It acts as a bridge between the smart jacket's sensors and the
central monitoring system.
Microcontroller Integration: The ESP8266 integrates both a microcontroller and Wi-Fi module
into a single chip, facilitating compact and efficient design. Its microcontroller handles
communication tasks while ensuring low power consumption.
Low Power Consumption: The ESP8266 is designed for energy efficiency, crucial for
applications like the smart jacket where power consumption must be minimized to extend
battery life and support extended usage.
GPIO Pins: The module includes General-Purpose Input/Output (GPIO) pins, enabling
interfacing with external devices. In this project, it is used to establish communication with the
Arduino Uno and relay sensor data wirelessly.
Community Support: Like Arduino, ESP8266 benefits from a vibrant and supportive
community. A wealth of documentation, forums, and libraries are available, making it
accessible for developers to leverage its capabilities effectively.
Role in the Smart Jacket Project:
Wireless Data Transmission: ESP8266 facilitates wireless communication between the smart
jacket and external systems, enabling real-time data transmission from sensors to a central
monitoring unit.
Integration with Arduino Uno: The ESP8266 is connected to the Arduino Uno, creating a
communication link that allows the transfer of processed sensor data. This integration
enhances the overall functionality of the smart jacket.
Remote Monitoring: ESP8266 enables remote monitoring of the smart jacket, allowing
supervisors to track the well-being of coal mine workers in real-time. This feature enhances
situational awareness and improves emergency response capabilities.
