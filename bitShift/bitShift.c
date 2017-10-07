#include <stdio.h>

int main(int argc, char **argv)
{
	char bits;
	bits = 1;

	/*Shift to the left*/
	printf("Shift to the left:\n");
	printf("%d\n", bits);
	bits = bits << 1;
	printf("%d\n", bits);
	
	/*Shift to the right*/
	printf("Shift to the right:\n");
	bits = 8;
	printf("%d\n", bits);
	bits = bits >> 1;
	printf("%d\n", bits);


	return 0;
}
