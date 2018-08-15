#include <stdio.h>
#include <signal.h>
#include<stdlib.h>
void wakeup();  
int counter = 0;
void cleanup();
void wakeup() 
{
   system("date");
   printf("counter is currently %d.\n ",counter);
   printf("\n");
   signal(SIGALRM, wakeup);
   alarm(5);
}

void cleanup()
{
   printf("Exiting after abort received.\n\n");
   exit(1);
}

void main()
{

   signal(SIGINT, cleanup);     
   signal(SIGQUIT,cleanup);     
   wakeup();
   while(1)
     counter++;
}
