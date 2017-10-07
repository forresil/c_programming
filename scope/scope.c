#include <stdio.h>

int main(int argc, char **argv)
{
	//This is one scope
	
	int a;

	a = 2;

	{  // This is an other scope
		int b;
		b = 4;
		printf("b = %d\n", b);

		int a;
		a = 4; 
		printf("a from inner scope = %d\n",a);
		{
			int a;
			a = 7; 
			printf("a from inner inner scope = %d\n",a);

		}
	}

	printf("a from outer scope = %d\n",a);


	return 0;
}
