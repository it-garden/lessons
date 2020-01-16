# Arduino
All about Arduino and what to do with them

## Links
- https://xod.io/ "A visual programming language for microcontrollers"
- 

## Videos
Checkout out IT-Gården's YouTube channel [[https://www.youtube.com/channel/UCYJJ-o7uC6Qvga2d8MoEp1A][HERE!]]
- 

## Exercises
- LED
  - Blink
  - Double Speed Blink (todo)

## NOTES

### To set needed permissions for the Arduino after each time it gets connected to xod
- sudo chmod -R 777 ttyACM0

-- corrected -- 

to set permissions forever

1. know which port is used (normally /dev/ttyACM0 or /devUSB0)
2. ls -l /dev/ttyACM0 and check the group with permissions (normally the name of the grouo is dialout)
3. add a user to the group adduser user dialout
