#include <stdio.h>
#include <string.h>

// replaces tabs with "  tab  "

const int sentenceLen = 120;

void replace_tab(char *arr, int tabLocation){
	for(int i=sentenceLen-1;i>tabLocation;i--){
		if(arr[i]!='\0'){
			arr[i+6] = arr[i];
		}
	}
	arr[tabLocation] = ' ';
	arr[tabLocation+1] = ' ';
	arr[tabLocation+2] = 'T';
	arr[tabLocation+3] = 'A';
	arr[tabLocation+4] = 'B';
	arr[tabLocation+5] = ' ';
	arr[tabLocation+6] = ' ';

}

int main(){

	char sentence[sentenceLen];
	memset(sentence, 0, sizeof(sentence));

	printf("Enter a sentence with tabs: ");
	scanf("%[^\n]%*c", sentence);


	for (int i = 0; i<sentenceLen; i++){
		if(sentence[i] == '\0'){
			break;
		}
		if(sentence[i] == '\t'){
			sentence[i] = ' ';

			replace_tab(sentence, i);

		}
		printf("%c", sentence[i]);
	}


	printf("\n");
	return 0;
}