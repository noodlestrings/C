#include <stdio.h>

int main(){

	int x = 5;
	int y = 10;

	int z = (x>y) ? x:y; // if x is greater than y, z = x, otherwise z = y ; same as max(x,y)

	printf("%d\n", z);

	return 0;
}