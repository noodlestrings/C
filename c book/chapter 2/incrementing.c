#include <stdio.h>

int main(){

	//n++ increments after the value has been used
	//++n increments then uses the value:

	int n = 2;
	printf("n++: %d\n", n++);
	printf("after n++ with just n: %d\n", n);

	int a = 4;
	printf("just n: %d\n", n);
	printf("++n: %d\n", ++n);

	return 0;
}