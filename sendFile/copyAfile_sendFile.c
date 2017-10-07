/*Get Help:
 * man 2 sendfile
 * man 2 fstat
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
	struct stat stbuf;

	/*Open source file*/
	if((fd1 = open("file1.txt", O_RDONLY)) <0)
	{
		perror("open() read");
		exit(1);
	}
	
	fstat(fd1, &stbuf);

	/*Open destination file*/
	
	if((fd2 = open("file2.txt", O_CREAT | O_WRONLY, 0600)) < 0)
	{
		perror("open() write");
		close(fd1);
		exit(1);
	}

	sendfile(fd2, fd1, 0, stbuf.st_size);

	close(fd1);
	close(fd2);

	return 0;
}
