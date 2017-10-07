#include <stdio.h>

int addnum(int a, int b)
{
	int total;
	total = a + b;
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
