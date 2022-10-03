#include <stdio.h>

int main(){
	// definitions are similar to triple quotes in python
	// """definition of variable etc."""
	#define UPPER  300 /* starting point of table */
	#define STEP  20   /* step size */
	for(int farh = UPPER; farh > 0; farh -= STEP){
		int celsius = 5 * (farh - 32) / 9;
		printf("farenheit:%d\tcelsius:%d\n", farh, celsius);

	}
}