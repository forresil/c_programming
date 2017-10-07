#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	time_t mytime;
	struct tm *mytm;

	mytime = time(NULL);

	/*Print the system time */
	printf("%s\n", ctime(&mytime));

	mytm = localtime(&mytime);

	printf("Year: %d\n", 1900 + mytm->tm_year);
	printf("Month: %d \n", 1 + mytm->tm_mon);
	printf("Day of Month: %d\n", mytm->tm_mday);
	printf("DST: %d\n\n", mytm->tm_isdst);

	/*Print a string formatted time */
	char outstr[200];
	
	if(strftime(outstr, sizeof(outstr), "LOG_%Y-%m-%d_%H%m%S.csv", mytm) == 0){
		fprintf(stderr, "strftime returned 0");
		exit(EXIT_FAILURE);
	}
	printf("Result string is \"%s\"\n", outstr);	

	return (EXIT_SUCCESS);
}
