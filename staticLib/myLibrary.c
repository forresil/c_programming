/****************************************************************
 * To COMPILE this file as a static shared library: 
 * First generates the object file of the library 
 * $gcc -c myLibrary.c 
 *
 * Creates an archive file with the object file in it:
 * $ ar -cvq libmyLibrary.a myLibrary.o
 *
 * You can see the symbols stored in the archive by typping:
 * $ nm libmyLibrary.a 
 *
 * It may be a good idea to run "ranlib" to generate an index to the
 * contents of the archive and to store it in the archive. The index
 * lists each symbol defined by a member of an archive that is a 
 * relocatable object file. Use "nm -s" or "nm --print-armap" to list 
 * this index. 
 * 
 * $ranlib libmyLibrary.a
 *
 * Notice: 
 * As convention a static library must have the prefix "lib"
 * and must have the extension ".a". 
 ********************************************************************/
#include <stdio.h>

int addnumbers(int a, int b)
{
	int add;
	add = a + b;
	return add;
}
