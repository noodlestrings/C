// produces a bar graph for the different numbers of lengths of words in the entered string
#include <stdio.h>
#include <string.h>

//NOTE the given value here sets the length of lens
//so the max length is actually 10 if set to 11, e.g.
const int maxWordLength = 11;
// you can predefine functions if you want but not necessary
void set_max(int *arr);

void set_max(int *arr){

	// storing the largest number to arr[0]
  	for (int i = 1; i < maxWordLength; ++i) {
    	if (arr[0] < arr[i]) {
      		arr[0] = arr[i];
    	}
  	}
}

void get_data(int *lens){

	char inp[100];
	int lenCounter = 0;
	int i = 0;

	printf("Enter a sentence: ");
	scanf("%[^\n]%*c", inp);



	while(i<100){

		// if end of sentence, add the last length and break
		if (inp[i]=='\0'){ // the char '\0' represents null
			lens[lenCounter]++;
			break;
		}
		// if space, add 1 to the correspoinding length and incrememnt i
		if(inp[i]==' '){
			lens[lenCounter]++;
			lenCounter=0;
			i++;
		}
		// increment length and i every time
		lenCounter++;
		i++;
	}

}

void bar_chart(int *lens){

	int height = lens[0];
	char temp[10];

	// i is essentially the height as you move down each row
	for(int i = height; i>0; i--){

		temp[0] = ' '; // this is the max value column

		// for item in lens:
		for (int item = 1; item<maxWordLength; item++){

			if(lens[item] >= i){
				temp[item] = '#';
			}
			else{
				temp[item] = ' ';
			}
		}


		for(int i=0;i<maxWordLength;i++){
			printf("%c ", temp[i]);
		}
		printf("\n");

		// this sets all values to 0 in temp
		memset(temp, 0, sizeof(temp));

	}
	//after the rows have been printed, print the bottom length occurences
	// for (int i=0;i<maxWordLength;i++){
	// 	printf("%d ", lens[i]);
	// }

	//print the categoreies for the bar chart
	printf("  ");
	for(int i=1;i<maxWordLength;i++){
		printf("%d ", i);
	}


}


int main(){

	int lens[maxWordLength]; // the index represents the length of the word, while the value is the occurences
	memset(lens, 0, sizeof(lens));

	// when giving an array as an arg, the pointer its first value is automatically given, instead of the value of the array
	get_data(lens);
	printf("\n");
	set_max(lens);
	bar_chart(lens);

	// highest populated category
	int mostPopulatedCat = 0;
	// number of items in highest populated category
	int highestPopNum = lens[0];
	
	for (int i=0;i<maxWordLength;i++){
		if (lens[i] > mostPopulatedCat){
			mostPopulatedCat = i;
		}
	}

	printf("\n  The most common length (%d) occurs %d times.", mostPopulatedCat, highestPopNum);


	printf("\n\n");
	return 0;
}