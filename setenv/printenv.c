#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *p;
	p = getenv("MYENV");
	printf("p = %s\n",p);

	return 0;
}
