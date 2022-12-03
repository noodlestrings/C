#include <stdio.h>

float divide(float a, float b); // this means that all the args will be typecasted to floats, allowing the program to run

int main(){

	int a =5;
	float b = 3.6;
	float result = divide(5, 3.6);

	printf("%f\n", result);
	return 0;
}

float divide(float a, float b){
	return a/b;
}
 