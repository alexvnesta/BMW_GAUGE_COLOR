# BMW GAUGE COLOR  

This is the latest revision of my gauges for my e90 BMW.  
This version will feature a high-res color TFT display!  

TODO:  
- [ ] Make cutom image assents for speed, RPM, horsepower
- [ ] Flash Max boost/torque for 8 seconds above xx value
- [ ] Go to sleep when can bus sends sleep signal  



New ideas to be implemented in this version:  
- [x] find a use for double click and hold click  
- [x] zero to sixty timer
- [x] mph and rpms for fun?
- [x] optimize screen referesh  
- [x] adjust screen brightness
- [x] custom red-orange colors
- [x] battery voltage display  
- [x] reject outlier sensor readings  
- [x] COLOR?!?!?!  


New file structure:  
- everything needs its own file  
- modules are separated into folders  
- use c++ and objects if I find them useful

main.cpp

SCREENS  
- boot.cpp  
- multi.cpp  
- battery.cpp  
- accelerometer.cpp  
- power.cpp  
- zeroSixty.cpp  

CANBUS  
- init.cpp  
- parse.cpp  

SENSORS  
- boost.cpp  
- oil.cpp  
- accelerometer.cpp  
- smoothing.cpp  

DISPLAY  
- lcd.cpp  
