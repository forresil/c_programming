#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int ret;

	printf("Calling execl...\n");
	ret = execl("hello", "progr", "one", "two", "three", "four", NULL);

	printf("Failed execl... ret = %d\n", ret);
	return 0;
}
