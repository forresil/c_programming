/* Compile and Run
 *
 * To compile you will have to declare the location of the library with
 * "-L." -> Libraries are located in the local directory
 * and you will have to link it by using the "-l" attribute followed 
 * only by the name of the library without the prefix "lib" and the 
 * extension ".so":
 *
 * $gcc -o foo foo.c -L. -lmoo
 *
 * To RUN this "foo" program you will have to add the actual directory to
 * the environment variable $LD_LIBRARY_PATH as follows:
 *
 * $ export LD_LIBRARY_PATH=.
 *
 * Check the content of the $LD_LIBRARY_PATH variable by typing:
 *
 * $ echo $LD_LIBRARY_PATH
 *
 * When done you are ready to run this program by calling it as usual:
 *
 * $./foo
 *
 * A call to "ldd foo" shows that the program is linked to the 
 * created "libmoo.so" library in the actual directory.
 *
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
