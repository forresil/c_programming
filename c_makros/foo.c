#include <stdio.h>

int myfunction()
{
	printf("This is line number %d\n", __LINE__);
	printf("This is file %s\n", __FILE__);
	printf("This is function %s\n", __func__);
	
	return 0;
}

int main(int argc, char *argv[])
{
	myfunction();

	printf("This is line number %d\n", __LINE__);
	printf("This is file %s\n", __FILE__);
	printf("This is function %s\n", __func__);

	return 0;
}
