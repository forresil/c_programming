#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	/*Get Help:
	 * man 3 rand*/

	//used to generate allways new numbers when the program is called
	srand((unsigned int) time(NULL));
	
	printf("r1 = %d\n", rand());
	printf("r1 = %d\n", rand());
	printf("r1 = %d\n", rand());

	printf("Dice numbers:\n"); // Hint: a Dice goes from 1 to 6!
	printf("n1 = %d\n", rand() % 6 + 1);
	printf("n2 = %d\n", rand() % 6 + 1);
	printf("n3 = %d\n", rand() % 6 + 1);
	printf("n4 = %d\n", rand() % 6 + 1);
	printf("n5 = %d\n", rand() % 6 + 1);
	printf("n6 = %d\n", rand() % 6 + 1);
	return 0;
}
