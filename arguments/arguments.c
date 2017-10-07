#include <stdio.h>
/* This progra shows how to pass arguments to the program. 
 You can pass a whole String just by surrounding it with "" . Ty it out!*/

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);

	int i;
	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return 0;
}

