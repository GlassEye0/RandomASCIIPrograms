#include <stdio.h>
#include <Windows.h>

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 13);
	//system("COLOR F5");
	//printf("\033[1;35m");
	printf("\noooo                                                                           oo");
	printf("\nooooo                   oooo                                     ooo       oooooo");
	printf("\nooooo    oooooo        oooo                                     ooo        oooooo");
	printf("\nooooo  oooooo  ooooooo  ooooooooo      ooooo          oo     oooooooooo     ooooo");
	printf("\noooooooooo         oooo ooo   oooo  ooooooooooo   oooooooooo    ooo          oooo");
	printf("\nooooooooooo     ooooooo ooo    ooo oooo     oooo oooo     ooo   ooo           ooo");
	printf("\nooooo   oooo  ooo  oooo ooo    ooo oooo     oooo oooo     oooo  ooo             o");
	printf("\nooooo    ooo  ooo  oooo ooo    oooo ooooooooooo   ooooo ooooo   oooo oo         o");
	printf("\nooooo    oooo ooooooooo oooo   oooo    oooooo       oooooo      ooo            oooo          ");
	printf("\nooo      oooo");
	getchar();
}