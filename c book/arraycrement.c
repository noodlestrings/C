#include <stdio.h>
int main(){
	int numTest[5] = {2, 5, 3, 64, 7};
	numTest[0]++;
	numTest[1]--;
	numTest[2]++;
	for(int i = 0;i<5;i++){
		printf("\nNumber: %d", numTest[i]);
	}
	return 0;
}