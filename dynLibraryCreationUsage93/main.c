#include <stdio.h>

#include "person.h"

int main(int argc, char *argv[])
{
	pPerson dude = AddName("John", "Done", 28);
	printf("## DUDE ##\n");

	PrintName(dude);

	return 0;
}

