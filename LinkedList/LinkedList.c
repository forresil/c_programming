#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct people_tag{
	char firtsname[16];
	char lastname[16];
	unsigned int age;
	struct people_tag *next;
}people_t;


int main(int argc, char *argv[])
{
	people_t *head = NULL;
	people_t *new;

	people_t *list;

	char *name[]={"Andy", "John", "Peter", "Raul", NULL};
	char *last[]={"Mans", "Doe", "Mars", "Gonzales", NULL};
	unsigned int age[]= {22, 34, 24, 18, 0};

	int i = 0;

	while(name[i])
	{
		new = (people_t *) malloc(sizeof(people_t));
		if(new == NULL)
		{
			fprintf(stderr, "Unable to allocate memory.\n");
			exit(1);
		}

		strcpy(new->firtsname, name[i]);
		strcpy(new->lastname, last[i]);
		new->age = age[i];

		new->next = head;
		head = new;

		i++;
	}
	
	list = head;
	while(list != NULL)
	{
		printf("Firstname: %s\n", list->firtsname );
		printf("Lastname: %s\n", list->lastname);
		printf("Age: %d\n\n", list->age);

		list = list->next;

	}
	
	/* Free Memory before exit the program */
	list = head;
	while(list != NULL)
	{
		head = list->next;
		free(list);
		list = head;
	}

	return 0;
}
