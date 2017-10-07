/*char and wchar_t are exclusive!!!! you can only use char o wchar
 * but not both together!!!
 *
 * Get Help:
 * man 3 wcscpy */

#include <stdio.h>
#include <wchar.h>

int main(int argc, char **argv)
{
//	char buf[128] = "Hello World!-char";
	wchar_t bufwide[128] = L"Hello World!-wchar_t";
	wchar_t buf2[128];

//	printf("%s\n", buf);
	wprintf(L"%ls\n", bufwide);

	wcscpy(buf2, bufwide);

	wprintf(L"%ls\n",buf2);

	return 0;
}
