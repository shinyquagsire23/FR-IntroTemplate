#define TITLE     ((u8*)0x020370B7)
#define VAR     ((u8*)0x020370B8)
#define TIMER   ((long*)0x020370BC)
#define init     ((u8*)0x020370B8)

#define Tiles     ((u16*)0x6000000)
#define OBJData		((u16*)0x6010000)
#define MapData     ((u16*)0x6003800)
#define BG1Data     ((u16*)0x6008000)
#define BG2Data     ((u16*)0x600C000)
#define second 60;

#include "include/gba_keys.h"

void notMain()
{
	TIMER[0] = TIMER[0] + 1;
	if(init[27] == 0)
	{
		if(TIMER[0] < 211)
		{
			quagStrut();
		}
		else if(TIMER[0] < 263)
		{	
			quagWalkDown();
		}	
		else if	(TIMER[0] < 303)
		{
			quagShout();
		}
		else if(TIMER[0] < 343)
		{
			quagSparkle();
		}
		else if(TIMER[0] < 344)
		{
			fadeScreen2(0,0,0x10);
			fadeSong();
		}
		else if(TIMER[0] < 500){}
		else if(TIMER[0] < 530)
		{
			init[27] = 1;
			TIMER[0] = 0;
		}
	}	
	else if(init[27] == 1)
	{
		//Start placing your code here!
	}
	if(keyDown(KEY_A) || keyDown(KEY_B) || keyDown(KEY_START) || keyDown(KEY_SELECT) ||init[27] == 11)
   	{
     		int (*func)(void) = (int (*)(void))0x0800CC6B;
     		resetVars();
		int x = func();
	}
	return;
}

#include <string.h>
#include "include/gba.h"
#include "useful.h"
#include "companylogo.c"

