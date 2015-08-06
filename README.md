marlin-emulator
===============

Emulator Marlin firmware 3D Printers for arduino.

Support arduino, where ATmega microcontroller. 

Tutorial for arduino:
http://arduino.cc/en/Guide/HomePage

Plan Release:

First version:
- Dummy code, for "Just printing".

Second version:
- Answer temperature by "M105"
- Increased stability for big file print.

TODO: 
- Parse input Gcodes
- Emulate operations with Nozzle
- Emulate operations with Heated Bed
- Emulate pause for moving Gcodes
- Emulate "MAX TEMP TRIGGER", if button pressed
- And etc commands from: http://reprap.org/wiki/G-code


Printing tested on:
- Repetier-Host v0.95F
- Printrun (PronterFace) v10Mar2014
- Cura v14.07