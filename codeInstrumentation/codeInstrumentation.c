/* **************************************************
 * To Compile:
 * $ gcc -DINSTDEBUG -o foo foo.c
 * **************************************************/
#include <stdio.h>

int addnum(int a, int b)
{
	int total;
#ifdef INSTDEBUG
	printf("Debug: Entering addnum %s %d\n", __FILE__, __LINE__);
	printf("Debug: a = %d\n", a);
	printf("Debug: b = %d\n", b);
#endif

	total = a + b;
#ifdef INSTDEBUG
	printf("Debug: total = %d\n", total);
	printf("Debug: Leaving addnum %s %d\n", __FILE__, __LINE__);
#endif

	return total;
}

int main(int argc, char *argv[])
{
	int a, b;

	int sum;

	a = 4;
	b = 7;

	sum = addnum(a, b);

	printf("sum = %d\n",sum);

	return 0;
}
