#include <stdio.h>

int main(int argc, char *argv[])
{
	/* ax + by + cz = d */
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int a3, b3, c3, d3;

	/* mx + ny = u */
	float m1, n1, u1;
	float m2, n2, u2;

	float x, y, z;

	printf("Enter a1, b1, c1, d1 values: ");
	scanf("%d %d %d %d", &a1, &b1, &c1, &d1);	

	printf("Enter a2, b2, c2, d2 values: ");
	scanf("%d %d %d %d", &a2, &b2, &c2, &d2);	

	printf("Enter a3, b3, c3, d3 values: ");
	scanf("%d %d %d %d", &a3, &b3, &c3, &d3);	

	m1 = (c1*a2)-(c2*a1);
	n1 = (c1*b2)-(c2*b1);
	u1 = (c1*d2)-(c2*d1);

	m2 = (c2*a3)-(c3*a2);
	n2 = (c2*b3)-(c3*b2);
	u2 = (c2*d3)-(c3*d2);

	x = ((n1*u2) -(n2*u1)) / ((n1*m2)-(n2*m1));

	y = (u1-(m1*x))/n1;

	z = (d1-(a1*x)-(b1*y))/c1;

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);

	printf("(a1 * x) + (b1 * y) + (c1 * z) = %f\n",
			(a1 * x) + (b1 * y) + (c1 * z));

	printf("(a2 * x) + (b2 * y) + (c2 * z) = %f\n",
			(a2 * x) + (b2 * y) + (c2 * z));

	printf("(a3 * x) + (b3 * y) + (c3 * z) = %f\n",
			(a3 * x) + (b3 * y) + (c3 * z));
	return 0;
}
