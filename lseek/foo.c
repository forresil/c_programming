#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv)
{
	int fd;
	int ret;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int b;

	fd = open("outfile", O_CREAT | O_APPEND | O_RDWR, 0600);

	if(fd < 0)
	{
		perror("open");
		exit(1);
	}

	/* Write something */
	ret = write(fd, (void *)a, sizeof(a));  //man 2 write

	if(ret < 0)
	{
		perror("write");
		close(fd);
		exit(1);
	}

	/* seek position number 3 using lseek */
	ret = lseek(fd, 3*sizeof(int), SEEK_SET);  //man 2 lseek
	if(ret < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}


	/* read from that position set by lseek */
	ret = read(fd, &b, sizeof(int));
	if(ret < 0)
	{
		perror("read");
		close(fd);
		exit(1);
	}


	printf("b = %d\n", b);

	/* seek position number 6 using lseek */
	ret = lseek(fd, 6*sizeof(int), SEEK_SET);  //man 2 lseek
	if(ret < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}


	/* read from that position set by lseek */
	ret = read(fd, &b, sizeof(int));
	if(ret < 0)
	{
		perror("read");
		close(fd);
		exit(1);
	}


	printf("b = %d\n", b);

	close(fd);

	return 0;
}
