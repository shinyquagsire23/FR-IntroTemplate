FR-IntroTemplate
================

This is a template and example for inserting a custom intro into the FireRed engine. To compile, first adjust the compile.sh to your appropriate paths and OS (Sorry Windows users, I use Linux). Next find appropriate freespace in the ROM (about 0x10000 bytes to be confortable, more if needed). Modify linker.lsc and compile.sh (if using auto-insert JAR) appropriately. Finally, place the pointer to the compiled binary (+1) at 0x080EC5D0, and viola! Custom intro. :)
