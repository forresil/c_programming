#include <stdio.h>
#include <time.h>

/*Get Help:
 * man localtime
 * man strftime
 * man 2 time
 * man ctime */

int main(int argc, char **argv)
{
	char buf[32];
	struct tm *mytm;
	time_t mytime;

	mytime = time(NULL);
	mytm = localtime(&mytime);

	/*2013-10-02 01:04:30 */
	strftime(buf, 31, "%Y-%m-%d %H:%M:%S", mytm);

	printf("Date and time: %s\n", buf);

	strftime(buf, 31, "%Y-%m-%d %I:%M:%S %p", mytm);
	printf("Date and time: %s\n", buf);

	return 0;
}
