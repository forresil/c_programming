/********************************************************************
// Siehe float.h 
// search with: locate float.h
*********************************************************************/
#include <stdio.h>
#include <float.h>

int main(int argc, char *argv[])
{
	long long int lli_var;
	float f_var;
	double d_var;
	long double ld_var;

	printf("\nLONG LONG INTEGER:\n\n");

	printf("lli_var size = %5d\n", sizeof(lli_var));
	
	printf("\nFLOAT\n\n");

	printf("f_var size = %5d\n", sizeof(f_var));
	printf("f_var dig  = %5d\n", FLT_DIG);
	printf("f_Var mant = %5d\n", FLT_MANT_DIG);

	printf("\nDOUBLE\n\n");
	
	printf("d_var size = %5d\n", sizeof(d_var));
	printf("d_Var dig  = %5d\n", DBL_DIG);
	printf("d_var mant = %5d\n", DBL_MANT_DIG);

	printf("\nLONG DOUBLE\n\n");

	printf("ld_var size = %5d\n", sizeof(ld_var));
	printf("ld_var dig  = %5d\n", LDBL_DIG);
	printf("ld_Var mant = %5d\n", LDBL_MANT_DIG);

	printf("\n");
	
	/*Playing around with the variables*/
	printf("We know that ld_var exp max val = %5d\n", LDBL_MAX_10_EXP);
	ld_var = 1.10000 * powl(10,LDBL_MAX_10_EXP);
	printf("ld_var = %5.18Le\n", ld_var);

	return 0;
}
