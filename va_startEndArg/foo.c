#include <stdio.h>
#include <stdarg.h>

int sumnum(int num, ...)
{
	int sum = 0;

	va_list argptr;
	int count = 0;

	va_start(argptr, num);
	
	while(count < num)
	{
		sum += va_arg(argptr, int);
		count ++;
	}

	va_end(argptr);

	return sum;
}

void printstr(int num, ...)
{
	int count = 0;
	char *ptr;
	va_list argptr;
	
	va_start(argptr, num);
	while(count < num)
	{
		ptr = va_arg(argptr, char *);
		printf("ptr = %s \n", ptr);
		count ++;
	}


	va_end(argptr);
}

int main(int argc, char *argv[])
{
	int total;
	
	total = sumnum(5,    3, 5, 7, 6, 4);  //sumnum(totalNrOfArgs, ...);

	printf("total = %d\n", total);
	printstr(3, "one", "two", "three");
	return 0;
}
