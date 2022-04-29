# BMW GAUGE COLOR  

This is the latest revision of my gauges for my e90 BMW.  
This version will feature a high-res color TFT display!  

TODO:  
- [ ] Go to sleep when can bus sends sleep signal  
- [ ] find a use for double click and hold click  
- [ ] zero to sixty timer
- [ ] mph and rpms for fun?


New ideas to be implemented in this version:  
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
