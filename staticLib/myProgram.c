/**************************************************************
 * Compile and Run
 * To compile with the static library you only have to call gcc 
 * with the c source of this program and with the associated 
 * static library:
 *
 * $ gcc -o myProgram myProgram.c libmyLibrary.a 
 *
 * There are no restrictions about how to run this pice of software. 
 * A call of "$ ldd myProgram" won't show any calls to the 
 * static associated library, since it was added to the file it self
 * during the compilation of the program.
 * ************************************************************/

#include <stdio.h>

int addnumbers(int a, int b);

int main (int argc, char **argv)
{
	int total;

	total = addnumbers(5, 7);

	printf("total: %d\n", total);

	return 0;
}
