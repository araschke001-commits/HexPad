# HexPad
This is a macropad with 6 keys, a rotary encoder, and an oled display. Almost everything in the cad file for this project is customizable. You can add as many keys as you want, change the dimensions of the usb c port, the inside dimensions, the wall dimensions, and basically everything else.

You would use my project by pressing the keys to perform specific functions on the computer, like a simple key press like the number 1, or later I might change it to open a site or type a password in. The rotary encoder is to change volume and mute/unmute it. The oled display is to indicate if a button was pressed/changed.

The reason why I made this project is to learn how to build things like this project so in the future I can make other things similar to this.

## Features:
- 3d printed case
- 6 keys (2 rows of 3)
- 0.91" OLED display
- Rotary encoder
- Almost everything is customizable for the CAD design.

## CAD Model:
It is put together with 4 M3 Screws that go directly into the plastic of the case.

It is made of 2 separate 3d printed parts, the top and the bottom.

Here is the share link to the project: https://cad.onshape.com/documents/888c45d35c64a39055184245/w/6328c76e156d93114c845f2d/e/f25f9ae1fe243c3fda6125d5?renderMode=0&uiState=69c88a6d89ef4c064d381a0c

CAD Model:
<img width="786" height="501" alt="Screenshot from 2026-04-09 09-23-34" src="https://github.com/user-attachments/assets/af5a8eb9-218b-4bfe-a2b5-89706e5e1071" />

Made in Onshape.

## PCB:
This PCB was made in KiCad.

Schematic:
<img width="733" height="495" alt="Screenshot from 2026-04-07 09-58-41" src="https://github.com/user-attachments/assets/c80f9e78-5476-4ce9-bdde-ba7d163d5152" />

PCB:
<img width="757" height="792" alt="Screenshot from 2026-04-08 14-38-16" src="https://github.com/user-attachments/assets/781327c9-d262-48d1-81d8-cdd22a6b9694" />

In hindsight, I maybe should have used a matrix to wire the switches, but it was simpler not to.

## Firmware:
This project uses C++ as firmware because I was unable to get the QMK firmware to work and I already had experience writing code in C++ (I did have to look up how to do some of the arduino stuff though).

The 6 keys act as a partial number pad for now. The oled is to display the last action, and the rotary encoder is to change volume and mute/unmute it.

## BOM:
This should be everything needed for my hackpad:
- Seeed Studio XIAO RP2040	(1x)
- Cherry MX Keycap - R2 (Opaque Black)	(6x)
- Cherry MX Brown 55g Tactile Switch	(6x)
- 0.91" OLED Display (1x)
- Rotary Encoder (1x)
- M3 x 8mm Socket Button Head Screws	(4x)
- USB-C to USB-A Cable (3ft)	(1x)
- Custom PCB
- 3d Printed Case

## Build Guide
1. Order the components
2. Order the PCB
3. Solder the components onto the board
4. Move the firmware to the board using Arduino IDE
5. Put the pcb with everything attached in the case
6. Screw on the lid to the case
