//#include "stdio.h


int main()
{
    // First lets set the colour
    printf("\033[1;35m");
    // Then clear the screen
    system("cls");
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
getchar();
}