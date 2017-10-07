#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int ret; 

	//	Set the environment variable with "putenv()"
//	ret = putenv("MYENV=hello");

	// Set the environment variaable with "setenv()"
	ret = setenv("MYENV","hello", 0);

	//Check for errors when trying to initilize the environment variable
	if(ret == -1)
	{
		perror("putenv");
		printf("ret = %d\n", ret);
	}

	// If there are no errors than print the content of the variable
	ret = system("./printenv");

	perror("system");
	printf("ret = %d\n", ret);

	return 0;
}
