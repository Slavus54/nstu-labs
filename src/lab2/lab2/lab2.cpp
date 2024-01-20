#include <math.h>
#include <stdio.h>

void main(void) 
{
	double a = 2, b = 4, c = 3, p, first, second, third, x;

	for (c; c <= 15; c+= 2) {
		p = (a + b + c) / 2;
		first = (p - a);
		second = (p - b);
		third = (p - c);

		x = (p*first*second*third);
		if (x > 0) 
		printf("Square = %f\n", x);
		else 
			printf("No solution\n");
	
	}
}