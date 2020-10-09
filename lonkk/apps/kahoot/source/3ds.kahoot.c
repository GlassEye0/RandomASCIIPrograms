#include <stdio.h>
#include <3ds.h>

int main()
{
    gfxInitDefault();

	//Initialize console on top screen. Using NULL as the second argument tells the console library to use the internal console structure as current one
	consoleInit(GFX_TOP, NULL);

    // First lets set the colour
    printf("\033[1;35m");
    // Then clear the screen
    //system("cls");
    // And finally, ASCii ART!
    printf(R"EOF(
                                                                                
                       oooo                                              oo     
ooooo                  oooo                                     ooo       oooooo
ooooo    oooooo        oooo                                     ooo       oooooo
ooooo  oooooo  ooooooo  ooooooooo      ooooo          oo     oooooooooo    ooooo
oooooooooo         oooo ooo   oooo  ooooooooooo   oooooooooo    ooo        oooo 
ooooooooooo     ooooooo ooo    ooo oooo     oooo oooo     ooo   ooo         ooo 
ooooo   oooo  ooo  oooo ooo    ooo oooo     oooo oooo     oooo  ooo          o  
ooooo    ooo  ooo  oooo ooo    oooo ooooooooooo   ooooo ooooo   oooo oo      o  
ooooo    oooo ooooooooo oooo   oooo    oooooo       oooooo      ooooooo         
                                                                  ooo      oooo 

)EOF");
// Now waiting for the user to exit the program
//getchar();
// Main loop
	while (aptMainLoop())
	{
		//Scan all the inputs. This should be done once for each frame
		hidScanInput();

		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
		u32 kDown = hidKeysDown();

		if (kDown & KEY_START) break; // break in order to return to hbmenu

		// Flush and swap framebuffers
		gfxFlushBuffers();
		gfxSwapBuffers();

		//Wait for VBlank
		gspWaitForVBlank();
	}

}