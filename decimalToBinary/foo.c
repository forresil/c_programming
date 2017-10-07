#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insert_binary(char *str, char d)
{
	int len = strlen(str);
	static int pos = 0;

	if(pos == 4)
	{
		memmove(&str[1], str, len+1);  //man 3 memmove
		str[0] = ' ';
		pos = 0;
	}
	memmove(&str[1], str, len+1);  //man 3 memmove
	str[0] = d;
	pos++;
}

int main(int argc, char** argv)
{
	int i;
	char binary[1024];
	int n, r;

	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s number\n", argv[0]);
		exit(0);
	}

	memset(binary, 0, 1024); //fills the allocated memory with zeors.
	i = atoi(argv[1]);

	do
	{
		n = i/2;
		r = i%2;

		/* insert digit remainder to the leftmost */
		insert_binary(binary, r?'1':'0');

		i = n;

	}while(i);

	printf("binary = %s\n", binary);

	return 0;
}
