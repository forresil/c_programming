/**************************************************************************
// SEGMENTATION FAULT: 
// Program usefull to find the cause of segementation errors in our programs
// Here you cause a segmentation fault by writting 24 to *pvar, which addr 
// is outside (NULL) the permited memory boundaries of the program.
***************************************************************************/

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

void segfunc(int signal, siginfo_t *si, void *arg)
{
	printf("Caught segfault address %p\n", si->si_addr);
	exit(0);
}

int main(int argc, char *argv[])
{
	int *pvar = NULL;
	struct sigaction sa;

	memset(&sa, 0, sizeof(struct sigaction));
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = segfunc;

	sigaction(SIGSEGV, &sa, NULL); 
	
	*pvar = 24; 

	return 0;
}
