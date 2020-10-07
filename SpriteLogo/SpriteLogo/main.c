#include <stdio.h>
#include <Windows.h>
void main()
{
	//int count;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	printf(" oooooo\                      oo\    / ooo\                         \n");
	printf(" oo  __oo\                     \__| |  oo |       ______            \n");
	printf(" oo /  \__| oooooo\   oooooo\  oo  \ooooooo\     /oooooo\           \n");
	printf(" \oooooo\  oo  __oo\ oo  __oo\ oo | \_oo  _|   /oo  __oo\           \n");
	printf(" \____oo\ oo /  oo |oo |  \__|oo |  \oo |     |oooooooo |           \n");
	printf(" oo\   oo |oo |  oo |oo |      oo |  \oo |oo\ \ oo   ____|          \n");
	printf(" \oooooo  |ooooooo  |oo |      oo |  \oooo  | \ooooooo\             \n");
	printf("  \______/ oo  ____/ \__|      \__|   \____/   \_______|            \n");
	printf("          oo |                                                      \n");
	printf("          oo |                                                      \n");
	printf("          \__|                                                      \n");
}

