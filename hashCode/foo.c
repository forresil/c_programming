#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct mydata_tag {
	int used; // 0 - empty, 1 - used
	int key;
	char name[24];
}mydata;

int hash_key(char *name)
{
	int key;
	int len;
	int i;

	key = 0;

	len = strlen(name);
	for(i=0; i < len; i++)
	{
		key += name[i];
	}

	key %= 10;  //only allocate 10 slots!
	printf("key = %d, name = %s\n", key, name);
	return key;
}

void init_table(char *filename, int size)
{
	FILE *fp;
	mydata data;
	int i;

	memset(&data, 0, sizeof(data));

	fp = fopen(filename, "w+");
	if(fp == NULL)
	{
		perror("fopen: init_table");
		exit(1);
	}

	for(i=0; i < size; i++)
	{
		fwrite(&data, sizeof(mydata), 1, fp);
	}

}

void insert_data(int key, char *name, char *filename)
{
	FILE *fp;
	mydata data, slot;
	int pos;

	pos = key;

	data.used = 1;
	data.key = key;
	strcpy(data.name, name);

	fp = fopen(filename, "r+");
	if(fp == NULL)
	{
		perror("fopen: insert_data");
		exit(1);
	}

	while(1)
	{
		fseek(fp, pos*sizeof(mydata), SEEK_SET);
		fread(&slot, sizeof(mydata), 1, fp);
		if(slot.used != 1)
		{
			break;
		}
		printf("Collision!\n");
		pos++;
		pos %= 10;
	}

	printf("pos = %d\n", pos);
	fseek(fp, pos*sizeof(mydata), SEEK_SET);
	fwrite(&data, sizeof(mydata), 1, fp);

	fclose(fp);

}

void print_buckets(char *filename)
{
	FILE *fp;
	mydata data;
	int i;

	fp = fopen(filename, "r+");
	if(fp == NULL)
	{
		perror("fopen: insert_data");
		exit(1);
	}
	for(i=0; i<10 ; i++)
	{
		fread(&data, sizeof(mydata), 1, fp);
		printf("used = %d, key = %d, data = %s\n", data.used, data.key, data.name); 
	}

	fclose(fp);

}


int main(int argc, char **argv)
{
	char *names[7] = {
		"John",
		"Steve",
		"Ajit",
		"Premal",
		"Kho",
		"Xiang",
		"Yamamoto"
	};

	int i, key; 
	
	init_table("myhashtable", 10);
	
	
	/*
	for (i = 0; i < 7; i++)
	{
		key = hash_key(names[i]);
		printf("key = %d, name = %s\n", key, names[i]);
	}
	*/

	for(i=0; i <7; i++)
	{
		key = hash_key(names[i]);
		insert_data(key, names[i], "myhashtable");
	}
	print_buckets("myhashtable");

	return 0;
}
