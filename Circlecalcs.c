#include <stdio.h>
#include <math.h>

int main(){
	const double PI = 3.141593;
	int radius = 29;
	double circumference = 2*PI*radius;
	double area = PI*(radius*radius);
	printf("Circumference: %f\nArea: %f\n", circumference, area);
	return 0;
}