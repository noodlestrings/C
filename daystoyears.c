#include <stdio.h>

int main()
{
	unsigned int daysInp = 923;
	unsigned int years = daysInp/365;
	unsigned int days = daysInp % 365;
	if (days == 0){
		if (years == 1){
			printf("%d year exactly\n", years);
		} else {
		printf("%d years exactly\n", years);		
		}
	}
	else{
		if (years == 1){
			printf("%d year and %d days\n", years, days);
		} else
		printf("%d years and %d days\n", years, days);
	}

	return 0;
}