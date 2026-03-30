# 6-key-Hackpad
This is a hackpad project with 6 keys. Almost everything in the cad file for this project is customizable. You can add as many keys as you want, change the dimensions of the usb c port, the inside dimensions, the wall dimensions, and basically everything else.

You would use my project by pressing the keys to perform specific functions on the computer, like a simple key press like the number 1, or later I might change it to open a site or type a password in.

The reason why I made this project is to learn how to build things like this project so in the future I can make other things similar to this to help others.

## Features:
- 3d printed case
- 6 keys (2 rows of 3)
- Almost everything is customizable for the CAD design.

## CAD Model:
It is put together with 4 M3 Screws that go directly into the threaded holes on the case.

It is made of 2 separate 3d printed parts, the top and the bottom.

Here is the share link to the project: https://cad.onshape.com/documents/888c45d35c64a39055184245/w/6328c76e156d93114c845f2d/e/f25f9ae1fe243c3fda6125d5?renderMode=0&uiState=69c88a6d89ef4c064d381a0c

<img width="1207" height="910" alt="image" src="https://github.com/user-attachments/assets/05a10b82-6199-44b7-b5c7-74e8a497af4a" />

Made in Onshape.

## PCB:
This PCB was made in KiCad.

Schematic: <img width="1209" height="997" alt="Screenshot from 2026-03-28 21-29-39" src="https://github.com/user-attachments/assets/11886b33-6cef-454c-a543-a6c496a2a906" />

PCB: <img width="1209" height="997" alt="image" src="https://github.com/user-attachments/assets/79cc9721-4cab-4401-96bb-a5b550ebd5db" />

In hindsight, I maybe should have used a matrix to wire the switches, but it was simpler not to.

## Firmware:
This project uses C++ as firmware.

The 6 keys act as a partial number pad for now.

## BOM:
This should be everything needed for my hackpad:
- Seeed Studio XIAO RP2040	(1x)
- Cherry MX Keycap - R2 (Opaque Black)	(6x)
- Cherry MX Brown 55g Tactile Switch	(6x)
- M3 x 16mm Socket Button Head Screws	(4x)
- USB-C to USB-A Cable (3ft)	(1x)
