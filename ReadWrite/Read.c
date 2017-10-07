/*Read and Write *
 * This commands are mostly used by inter-process communication.
 * Or by communication between programms runnign in different 
 * networks. */


#include <stdio.h>
#include <unistd.h>

int main(int argc, char argv[])
{
	char buf[10];
	int ret;

	while(1)
	{

		/*read(file_descriptor, buffer_pointer, data_Size);
		* file_descriptor: 
		*	- denoting the standard output
		*	- denoting another file 
		*	- denoting another process */
		ret = read(0, buf, 10); //0 is the standard output.
		if(ret < 10)
		{
			buf[ret] = '\0';
			printf("%s\n",buf);
			break;
		} else
			printf("%s\n", buf);
	}
	return 0;
}
