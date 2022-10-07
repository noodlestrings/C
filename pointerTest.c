#include <stdio.h>

int main(){
	// &var = address of var
	// *var = value at adress of var

	int num = 1;
	int *numCpy = &num; // this sets the value in memory of numCpy to the memory address of num
	printf("Num: %d\n", num);
	printf("Copy: %d\n", *numCpy);

	num++;
	printf("The num var has been incremented: \n");
	printf("Num: %d\n", num);
	printf("Copy: %d\n", *numCpy);


	char arr[] = {'a', 'b', 'c', 'd', 'e'};
	char first = arr[0]; // the index of an array automatically gives the value at that location
	printf("First value: %c\n", first);
	printf("Locaction of first value: %p\n", arr);

	// have to explicitly use & as the index automatically returns the value at that locatioin
	printf("Location of first value using pointer explicit: %p\n", &arr[1]); // this is first val loc ++

	printf("Char at index 1: %c\n", *&arr[1]); // the pointers cancel out; same as arr[1]


	return 0;
}