#include <stdio.h>

int addnum(int a, int b)
{
	LABEL1:

	return a + b;
}

int main(int argc, char* argv[])
{

	int a, b, c;

	/*open files */


	/*allocate memories*/

	/*initialize values */


	for(a = 0; a <10; a++)
	{
		for(b = 0; b<10; b++)
		{
			for(c = 0; c < 10 ; c++)
			{
				if(a==5 && a==b && b == c)
					goto QUIT_BIG_LOOP;
			}
		}
	}
	
	QUIT_BIG_LOOP:
	printf("a = %d, b = %d, c = %d\n", a,b,c);

	ERROR_HANDLER:
	/*close file descriptors, cleanup memories, reset values */


	return 0;
}
