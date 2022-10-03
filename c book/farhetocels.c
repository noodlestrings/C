#include <stdio.h>
// celsius => fahrenheit = Celsius * 1.8 + 32
int main(){
	int step = 1;
	int lower = 0;
	int upper = 300;

	while(step <= upper){
		if(step%20==0){
			printf("farenheit: %d\t", step);
			int celsius = 5 * (step - 32) /9;
			printf("celsius: %d\n", celsius);
		}
		step++;
	}

	return 0;
}