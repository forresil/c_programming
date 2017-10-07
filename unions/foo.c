#include <stdio.h>
#include <string.h>

int main()
{
	union
	{
		int a;
		int b;
		char s[8];
	} myunion;

	myunion.a = 3;

	printf("a = %d\n", myunion.a);
	printf("b = %d\n", myunion.b);

	myunion.a = 7;
	
	printf("a = %d\n", myunion.a);
	printf("b = %d\n", myunion.b);

	strcpy(myunion.s, "happy");

	printf("s = %s\n", myunion.s);

	printf("a = %d\n", myunion.a);
	printf("a = 0x%x\n", myunion.a);
	printf("b = %d\n", myunion.b);

	return 0;
}
