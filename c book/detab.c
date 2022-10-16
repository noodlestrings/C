#include <stdio.h>
const int sentenceLen = 120;

int main(){

	char sentence[sentenceLen];

	printf("Enter a sentence with tabs: ");
	scanf("%[^\n]%*c", sentence);


	for (int i = 0; i<sentenceLen; i++){
		if(sentence[i] == '\0'){
			break;
		}
		if(sentence[i] == '\t'){
			printf("tab");
		}
		printf("%c", sentence[i]);
	}


	printf("\n");
	return 0;
}