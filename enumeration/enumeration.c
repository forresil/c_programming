#include <stdio.h>

enum day{
	Sunday = 1, //To make it start from 1 
	Monday, 
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};
typedef enum day22{
	Sunday1, //To make it start from 0 
	Monday1, 
	Tuesday1,
	Wednesday1,
	Thursday1,
	Friday1,
	Saturday1
}schedday;

int main(int argc, char **argv)
{
	enum day myday;

	printf("Sunday = %d\n", Sunday);	
	printf("Monday = %d\n", Monday);
	printf("Tuesday = %d\n",Tuesday);
	printf("Wednesday = %d\n",Wednesday);
	printf("Thursday = %d\n",Thursday);
	printf("Friday = %d\n",Friday);
	printf("Saturday = %d\n",Saturday);

	myday = Wednesday;
	
	printf("myday = %d\n\n", myday);

	schedday myday2; //Showing the use of typedef 

	printf("Sunday = %d\n", Sunday1);	
	printf("Monday = %d\n", Monday1);
	printf("Tuesday = %d\n",Tuesday1);
	printf("Wednesday = %d\n",Wednesday1);
	printf("Thursday = %d\n",Thursday1);
	printf("Friday = %d\n",Friday1);
	printf("Saturday = %d\n",Saturday1);

	myday2 = Wednesday1;
	
	printf("myday2 = %d\n", myday2);


	return 0;
}
