/*********************************************************************************
// CLONE PROCESS
// This program clones a trhread or process
// Get more info about clone() with "$man 2 clone"
**********************************************************************************/
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

#define SIZESTACK (1024 * 1024)

int child_proc(void *arg)
{
	printf("Child process arg = %s\n", (char *)arg);
	sleep(2);
	return 0;
}

int main(){

	char *stack;
	char *stackhead;

	char *str = "Hello world!";

	pid_t pid;
	int status;

	stack = (char *) malloc(SIZESTACK);
	
	if(!stack)
	{
		fprintf(stderr, "Unable to allocate stack.\n");
		exit(1);
	}

	stackhead = stack + SIZESTACK - 1;
	printf("Parent pid = %d\n", getpid());

	pid = clone(child_proc, stackhead, SIGCHLD, str);

	if(pid == -1 )
	{
		fprintf(stderr, "Unable to clone.\n");
		free(stack);
		exit(1);
	}

	printf("Child pid = %d\n", pid);

	waitpid(pid, &status, 0);

	printf("Done!\n");

	return 0;
}
