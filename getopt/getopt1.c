#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c;
	int xflg=0, yflg=0, zflg=0;

	while((c = getopt(argc, argv, "x:yz:")) != -1)
	{
		switch(c)
		{
			case 'x':
				xflg = 1;
				printf("optarg = %s\n", optarg);
				printf("optarg in int = %d\n", atoi(optarg));
				break;
			case 'y':
				yflg = 1;
				printf("optarg = %s\n", optarg);
				if(optarg != NULL)
					printf("optarg in int = %d\n", atoi(optarg));
				break;
			case 'z':
				zflg = 1;
				printf("optarg = %s\n", optarg);
				printf("optarg in int = %d\n", atoi(optarg));
				break;
			case '?':
				if(optopt == 'x' || optopt == 'z')
					fprintf(stderr, "Option -%c needs argument\n",optopt);
				else
					fprintf(stderr, "Unknown option -%c.\n", optopt);
				break;
			default:
				fprintf(stderr, "getopt");
		}
	}

	printf("xflg = %d, yflg = %d, zflg = %d\n", xflg, yflg, zflg);

	return 0;
}
