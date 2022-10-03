#include <stdio.h>

int main()
{
	// array to store string taken as input
	char color[20];

	// take user input
	printf("Enter your favourite color: ");
	scanf("%s", color);

	// printing the input value
	printf("Your favourite color is: %s.\n", color);

	return 0;
}
