/*(1) Run this program 
 *(2) Open a second terminal window
 *(3) Get the PID of the program with $ps -aux |grep signal 
 *(4) Send a SIGTERM Signal to the program with $kill -15 $(PID-Nr) 
 *(5) To stop the program send to it $kill -9 $(PID-Nr))
 *****************************************************************/

#include <stdio.h>
#include <signal.h>

void myhandle(int mysignal)
{
	printf("myhandle with signal %d\n", mysignal);
}


int main(int argc, char **argv)
{
	int i = 0;
	signal(SIGTERM, myhandle);

	while(1)
	{
		printf("i = %d\n", i);
		i++;
		sleep(1);

	}

	return 0;
}
