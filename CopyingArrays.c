#include <stdio.h>

void printArr(int arr[], int len){
	printf("\n");
	for (int i=0;i<len-1;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){

	const int NUMLEN = 10;
	int nums[NUMLEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int numsCpy[NUMLEN];

	for(int i=0;i<NUMLEN-1;i++){
		numsCpy[i] = nums[i];
	}

	printArr(nums, NUMLEN);
	printf("at memory loc %p\n\n", nums);

	printArr(numsCpy, NUMLEN);
	printf("at memory loc %p\n\n", numsCpy);



	return 0;
}

