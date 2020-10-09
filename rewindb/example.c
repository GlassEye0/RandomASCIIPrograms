#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *name[600];
char *botname[600];
char *food[60]={""};

char baba[6][15] = {
   "Sleeping",
   "Walking",
   "Watching TV",
   "NEWS",
   "Programming",
   "*******"};

int main()
{
    for (int i = 0; i < 6; i++) 
    {
      //  if (baba[i]={"*******"});
      if (i == 5)
      {
          printf("\nthats the end!");
          exit(0);
      }
       printf("baba's %d hobby is: %s\n", i+1, baba[i]); 
    }

    getchar();
    
    printf("\n*A NOTE FROM THE DEVOLOPER!                  *");
    printf("*\nThe game may crash because..                *");
    printf("\n*In one of the input areas you enterd a space*");
    printf("\n*Or you entered a long name                  *");
    printf("\n*In th end, have fun with your friend!       *");
    printf("\n*Press ENTER To continue                     *");
    getchar();
    printf("Hello there");
    getchar();
    printf("hello again!");
    getchar();
    printf("how are you feeling?");
    getchar();
    printf("you say your feeling good?");
    getchar();
    printf("well thats good!");
    getchar();
    printf("hey wait a sec..");
    getchar();
    printf("are you having fun talking to me");
    getchar();
    printf("you are!");
    getchar();
    printf("thanks!");
    getchar();
    printf("enter your name plese!");
     printf("\nPlease enter your name!");
    /*
        reading the value entered by the user
    */
    scanf("%s", &name);
    /*
        displaying the number as output
    */
    printf( "\nYAY (: your %s!", name);
    getchar();
    printf("\nwell thats good!");
    getchar();
    printf("\nwhats my name you ask?");
    getchar();
    printf("\nwell thats your choice!");
     printf("\nPlease enter my name!");
    /*
        reading the value entered by the user
    */
    scanf("%s", &botname);
    /*
        displaying the number as output
    */
    printf( "\nYAY (: im %s", botname);
    printf("\nwell i have a question!");
    getchar();
    printf("\nwhats you favorite food?");
     printf("\nPlease enter your favorite food!");
    /*
        reading the value entered by the user
    */
    scanf("%s", & food);
    /*
        displaying the number as output
    */
    printf("\nYAY!");
    getchar();
    printf("\nwell goodbye");
    getchar();
    printf("\ni'll see you in the next program");
    getchar();
    printf("\noh wait how could i forget!");
    getchar();
    printf("\nhave a snack. courtesy of your friend %s!",botname);
    getchar();
    printf("\nyou just got a bunch of %s", food);
    printf("\ni guess i found some of it in my pocket, so i gave it to you. bye!!",name);
    sleep(2);
    printf("\njust ENTER the door to leave...");
    getchar();

    
}