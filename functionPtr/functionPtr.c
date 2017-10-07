#include <stdio.h>

int add_numbers(int a, int b);  //Fowrward declaration

int main(int argc, char *argv[])
{
	//Varialbles declarations
	int result;
	//Pointer declarations
	int (*myFunction_ptr)(int, int);
	myFunction_ptr = &add_numbers;

	result = myFunction_ptr(3,7);

	printf("result = %d\n", result);

	return 0;
}


int add_numbers(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

