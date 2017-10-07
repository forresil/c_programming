#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double Force, mass, accel;
	double angle; /*in angle*/

	printf("Enter mass (kg): ");
	scanf("%lf", &mass);
	printf("Enter acceleration (m/s^2): ");
	scanf("%lf", &accel);
	printf("Enter angle (degrees): ");
	scanf("%lf", &angle);

	Force = (mass * accel)/cos(angle * 3.1416/180.0);

	printf("Force = %lf Newtons\n", Force);
	
	return 0;
}
