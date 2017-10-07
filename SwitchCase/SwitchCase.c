#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
	int a;
	
	while(1)
	{
		printf("Enter integer: ");
		scanf("%d", &a);

	switch (a) {
		case 0:
			printf("case is 0\n");
			break;
		
		case 1:
			printf("case is 1\n");
			break;

		case 2:
			printf("case is 2\n");
			break;

		default: 
			printf("case is default\n");
			exit(0);
			break;	
	}
	}
	return 0;
}
