/*This Program shows how you can redirect the standard out 
 * programmaticaly */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd, fd2;
	int ret;

	/*Creates an output file for the stdoutpu*/
	fd = open("out.txt", O_CREAT | O_APPEND | O_WRONLY);
	if(fd < 0)
	{
		perror("open file out.txt failed.\n");
		exit(1);
	}

	/*Creates an output file for the stderror*/
	fd2 = open("outerr.txt", O_CREAT | O_APPEND | O_WRONLY);
	if(fd < 0)
	{
		perror("open file outerr.txt failed.\n");
		exit(1);
	}

	/*Redirects stdoutput to file fd*/
	ret = dup2(fd, 1);  
	if(ret < 0)
	{
		perror("dup2 out"); 	
		exit(1);
	}
	
	/*Redirects stderror to file fd2*/
	ret = dup2(fd2, 2); 
	if(ret < 0)
	{
		perror("dup2 err");
		exit(1);
	}

	/* Run some system code and generates stdoutput and an error*/
	system("ls /tmp /temp3");
	
	/* Make some house keeping */
	close(fd);
	close(fd2);

	return 0;
}
