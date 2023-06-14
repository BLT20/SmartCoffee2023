# Design Document

## Smart Device Theme

I will be making a smart coffee maker. The theory is that the user can set a coffee preference and when the coffee maker detects the user using a sonar coming within a specific range it begins to make the coffee. There will be a sensor that detects if there is a cup in the machine, if not it will not make coffee. There will also be a crash sensor to manually activate the machine if the other functions fail. There will also be a function in place where when the machine finishes making a cup of coffee it will use a piezo buzzer to play a short tune.



## Behaviours

1. Input - The user comes within the sonar range
   Output - Check if there is a cup in the machine

2. Input - Sensor detects cup
   Output - Make coffee

3. Input - Button is pressed
   Output - Make coffee
