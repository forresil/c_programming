#include <stdio.h>
#include <string.h>

/*This program shows the posibilities of string.h
* Get some help typing man string.h 
* Get more help typing by ex. man memset, man strlen, etc*/


int main(int argc, char *argv[])
{
	char str[24];
	char str2[24];
	int i;
	int n;

	/* Example 1 */
	sprintf(str, "Hello World!");
	printf("%s\n",str);

	/*Example 2 */
	i = 4;
	sprintf(str, "Value of i = %d", i);
	printf("%s\n", str);
	
	/*Example 3*/
	n = strlen(str);
	printf("length of str is %d\n", n);

	/*Example 4 */
	strcpy(str2, str);
	printf("str2 is: %s\n", str2);

	/*Example 5 */
	memset(str, 0, 24);
	memset(str, 'a', 10);
	printf(">%s\n", str);

	return 0;
}
