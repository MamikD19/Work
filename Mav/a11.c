#include <stdio.h>
#include<signal.h>
#include<stdlib.h>
void quitproc()
{ 		 printf("\nctrl - C pressed to quitn\n");
		 exit(0);
} 

main()
{ 		signal(SIGINT, quitproc);
		signal(SIGQUIT, quitproc);
		for(;;);
}
