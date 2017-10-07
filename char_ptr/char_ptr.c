#include <stdio.h>

int main()
{
	char str[24] = "First String";
	char *ptr = "Second String";   /* Not supported anymore in C++11*/
	
	printf("%s\n",str);
	printf("%s\n",ptr);

	ptr++;
	printf("%s\n",ptr);
	
	/* The same is but not possible with the char str[] !!!*/

	return 0;
}

