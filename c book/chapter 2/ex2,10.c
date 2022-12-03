#include <stdio.h>

void lower(char *str);

int main(){

	char str[30];
	printf("Enter a long word with different cases: ");
	scanf("%[^\n]%*c", str);


	lower(str);




	return 0;
}

void lower(char *str){

	for(int i=0;str[i]!='\0';i++){
		str[i] = (str[i]>=65 && str[i]<=90) ? (str[i])+32 : str[i];
	}

	printf("%s\n", str);


}