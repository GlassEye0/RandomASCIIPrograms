#include <stdio.h>
#include <unistd.h>
#include <3ds.h>
//using namespace std
void main()
{
gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
 char *i[60];
 char *l[60];
 bool didit1 = false;
 bool didit2 = false;
		static MiiSelectorConf msConf;
		static MiiSelectorReturn msRet;
		static char miiname[36];
        static char botmii[36];
		static char miiauthor[30];
    printf("\nHello there");
    sleep(5);
    printf("\nhello again!");
    sleep(5);
    printf("\nhow are you feeling?");
    sleep(5);
    printf("\nyou say your feeling good?");
    sleep(5);
    printf("\nwell thats good!");
    sleep(5);
    printf("\nhey wait a sec..");
    sleep(5);
    printf("\nare you having fun talking to me");
    sleep(5);
    printf("\nyou are!");
    sleep(5);
    printf("\nthanks!");
    sleep(5);
    printf("\nenter your name plese!");
     printf("\nPlease enter your name!");
    didit1 = true;
                    // Ensure that the config is initalized and that all
			        // defaults are set properly. (failing to do this to a new
			        // MiiSelecorConf at least once before launching the miiSelector
			        // can result in undefined behavior)
			        miiSelectorInit(&msConf);
			        miiSelectorLaunch(&msConf, &msRet);
					miiSelectorReturnGetName(&msRet, miiname, sizeof(miiname));
    printf( "\nYAY (: your %s!", miiname);

    sleep(5);
    printf("\nwell thats good!");
    sleep(5);
    printf("\nwhats my name you ask?");
    sleep(5);
    printf("\nwell thats your choice!");
     printf("\nPlease enter my name!");
      didit2 = true;
                    // Ensure that the config is initalized and that all
			        // defaults are set properly. (failing to do this to a new
			        // MiiSelecorConf at least once before launching the miiSelector
			        // can result in undefined behavior)
			        miiSelectorInit(&msConf);
			        miiSelectorLaunch(&msConf, &msRet);
					miiSelectorReturnGetName(&msRet, botmii, sizeof(botmii));
    /*
        reading the value entered by the user
    */
    scanf("%s", &l);
    /*
        displaying the number as output
    */
    printf( "\nYAY (: im %s", botmii);
    sleep(5);
    printf("\nYAY!");
    sleep(5);
    printf("\nwell goodbye");
    sleep(5);
    printf("\ni'll see you in the next program");
    sleep(5);
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

	gfxExit();
	return 0;
}

    
