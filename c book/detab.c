#include <stdio.h>
#include <string.h>

// replaces tab character in array with 4 spaces

//tab is 4 spaces
int main(){
	char inp[100];
	int tabLocations[25];
	memset(tabLocations, 0, sizeof(tabLocations)); // sets all values to 0
	int tabLocFillAmount = 0;

	printf("Please enter a sentence with tabs in it: ");
	scanf("%[^\n]%*c", inp);

	for(int i=0;i<100;i++){
		if (inp[i] == '\0'){
			break; //if EOF
		}
		if (inp[i] == '\t'){
			tabLocations[tabLocFillAmount] = i;
			tabLocFillAmount++; // this essentially appends to end of array

			for(int j = 100;j>i - 1;j++){
				if //trying to move latter charcaters by 4 to insert 4 spaces
					//look up inserting values in an array
			}
		}


		
	}
	for (int i=0;i<25;i++){
		if(tabLocations[i] == '\0'){
			break;
		}
		inp[i] = "    ";
	}

	for(int i=0;i<100;i++){
		if (inp[i] == '\0'){
			break;
		}
		printf("%c",inp[i] );
	}

	return 0;
}