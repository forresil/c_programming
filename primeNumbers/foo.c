/*******************************************************
// This program lists the prime numbers between 1 and MYLIMIT 
*********************************************************/

#include <stdio.h>
#define MYLIMIT 1000

int main(int argc, char *argv[])
{
	int i, j;

	printf("Listing prime numbers up to %d:\n",MYLIMIT);
	for( i = 2; i <= MYLIMIT; i++)
	{
		for( j = 2; j <= i; j++)
		{
			if(j == i)
			{
				/*It's a prime number */
				printf("%d ",i);
			}else if(i%j==0) {
				/*Not a prime number */
				break;
			}
		}
	}
	printf("\n\n");

	return 0;
}

