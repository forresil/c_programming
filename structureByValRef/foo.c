#include <stdio.h>

typedef struct add_num_struct_t {
	int a;
	int b;
	int sum;
} add_num_struct;

void get_numbers(int x, int y, add_num_struct *mydata){
	mydata->a = x;
	mydata->b = y;
}

void compute_sum(add_num_struct *mydata){
	mydata->sum = mydata->a + mydata->b;
}

int main(int argc, char *argv[]){
	
	add_num_struct newdata;

	get_numbers(2,5, &newdata);
	compute_sum(&newdata);

	printf("newdata.a = %d\n", newdata.a);
	printf("newdata.b = %d\n", newdata.b);
	printf("newdata.sum = %d\n", newdata.sum);
	
	return 0;
}



