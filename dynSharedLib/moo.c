/* Compile this file as a dynamical shared library: 
 * $gcc -shared -o libmoo.so moo.c
 *
 * Notice: 
 * As convention a shared library must have the prefix "lib"
 * and must have the extension ".so". 
 * */
#include <stdio.h>

int addnumbers(int a, int b)
{
	int add;
	add = a + b;
	return add;
}
