#!/bin/bash
make
rm intro.o
rm intro.out
java -jar AddASM.jar /home/maxamillion/ROMHacking/ASM/IntroTemplate/GS.gba /home/maxamillion/ROMHacking/ASM/IntroTemplate/intro.bin 0x790058
#thumb toASM.asm
