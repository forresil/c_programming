#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a[3][3] = { {11, 12, 13},
					{21, 22, 23},
					{31, 32, 33} };

	int i, j;

	for(i=0; i<3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
	}

	return EXIT_SUCCESS;
}
