/*Based on the spigot algorithmus*/
#include <stdio.h>

#define X 1000000000

int main(int argc, char *argv[])
{
	long i;
	
	double pi = 1.5 * X; //limes of the innerst term in the spigot algorithmos 
	
	for(i = 100; i >= 1; i--)
	{
		pi = (double)i/(i*2+1)*pi+X;
	}
	
	pi *= 2.0;
	
	printf("pi = %f\n",pi);

	return 0;
}
