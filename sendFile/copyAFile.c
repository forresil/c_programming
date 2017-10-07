/*Get Help:
 * man 2 sendfile
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd1;
	int fd2;
	int ret;
	char buf[20];

	/*Open source file*/
	if((fd1 = open("file1.txt", O_RDONLY)) <0)
	{
		perror("open() read");
		exit(1);
	}
	
	/*Open destination file*/
	
	if((fd2 = open("file2.txt", O_CREAT | O_WRONLY, 0600)) < 0)
	{
		perror("open() write");
		close(fd1);
		exit(1);
	}

	while((ret = read(fd1, buf, 20)) > 0)
	{
		if(write(fd2, buf, ret) < 0)
		{
			perror("write");
			exit(1);
		}
	}

	close(fd1);
	close(fd2);

	return 0;
}
