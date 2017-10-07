#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int ret;
	
	printf("Calling system...\n");
	ret = system("ls -l");	
	printf("Exiting system... ret = %d\n",ret);

	return 0;
}
