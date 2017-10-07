#include <stdio.h>

int main(int argc, char **argv)
{
	char mystr[] = "Hello World";
	char *p;
	int i;

	printf("%s\n", mystr);

	p = mystr;

	while(*p != '\0')
	{
		*p = (char) toupper((char) *p);
		p++;
	}

	printf("%s\n", mystr);

	i = 0;

	while(mystr[i] != '\0')
	{
		mystr[i] = (char) tolower((char) mystr[i]);
		i++;
	}

	printf("%s\n", mystr);

	return 0;
}
