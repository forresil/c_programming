#include <stdio.h>

void swapptr(int **a, int **b){
	int *tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(int argc, char **argv)
{
	int x, y;
	int *m, *n;

	x = 5;
	y = 9;

	m = &x;
	n = &y;

	printf("*m = %d\n", *m);
	printf("*n = %d\n", *n);
	
	printf("n = %x\n", n);
	printf("m = %x\n", m);

	printf("Swapping\n");
	swapptr(&m, &n);

	printf("*m = %d\n", *m);
	printf("*n = %d\n", *n);
	printf("m = %x\n", m);
	printf("n = %x\n", n);

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return 0;
}

