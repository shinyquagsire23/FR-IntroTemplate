FR-IntroTemplate
================
![Custom Intro](http://i569.photobucket.com/albums/ss135/mtinc2/PFR_zps53387555.png)


This is a template and example for inserting a custom intro into the FireRed engine released under GPLv3. Basically that means that if you modify this code and release it as part of a product you are required to open source it. Don't worry though, it's fun!


To compile, first adjust the compile.sh to your appropriate paths and OS (Sorry Windows users, I use Linux). 

Next find appropriate freespace in the ROM (about 0x10000 bytes to be confortable, more if needed). Modify linker.lsc and compile.sh (if using auto-insert JAR) appropriately. 

Finally, place the pointer to the compiled binary (+1) at 0x080EC5D0, and viola! Custom intro.
