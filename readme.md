# BMW GAUGE COLOR  

This is the latest revision of my gauges for my e90 BMW.  
This version will feature a high-res color TFT display!  

New ideas to be implemented in this version:  
- Go to sleep when can bus sends sleep signal  
- battery voltage display  
- reject outlier sensor readings  
- COLOR?!?!?!  
- ACCELEROMETER FOR GEEE FORCES!  


New file structure:  
- everything needs its own file  
- modules are separated into folders  
- use c++ and objects if I find them useful

main.cpp

SCREENS
	boot.cpp
	multi.cpp
	battery.cpp
	accelerometer.cpp
	power.cpp
	zeroSixty.cpp
CANBUS
	init.cpp
	parse.cpp
SENSORS
	boost.cpp
	oil.cpp
	accelerometer.cpp
	smoothing.cpp
DISPLAY
	lcd.cpp