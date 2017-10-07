
/*************************************************************************
// This Program rearange the fields in the people.txt file. 
// It uses scanset specifiers. (something like regular expressions in java)
// 
// USAGE:
// $ cat people.txt | ./foo
**************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
	char name[128];
	char city[128];
	char state[64];
	int age;

	/*Reads the data from stdinput, wich are separated by commas, rearange the items 
	  and prints the postions left justified (%-Xs) in a list on the standard output.
	  USAGE: 
	  127[^,] => 127 bytes long field, [] classifiers, ^ carret return, "," commas.
	  63[^\n] => 63 bytes long field (+Esc-char), ^symbol \n new line */

	while(scanf("%127[^,],%d,%127[^,],%63[^\n]\n", name, &age, city, state) == 4)
	{
		printf("%-5s %-15s %-20s %4d\n", state, city, name, age);
	}	
	
	return 0;
}
