#include <stdio.h>

//Write an alternative version of squeeze(s1,s2)
//that deletes each character in s1 that matches any character in the string s2.

// comments for debugging

void squeeze(char stri1[], char stri2[]){

	int s1, s1c, s2;

	for (s1=s1c=0;stri1[s1]!='\0';s1++){
		s1c = s1;
		for (s2=0;stri2[s2]!='\0';s2++){
			

				if(stri1[s1] == stri2[s2]){
					//printf("s1:%d  s1c:%d\n", s1, s1c);
					//printf("s1 value:%c s2 value:%c\n", stri1[s1], stri2[s2]);
					int i=0;
					while(stri1[s1c]!='\0'){
					stri1[s1+i] = stri1[++s1c];
					++i;
					}	
					//printf("\n%s\n", stri1);
					//printf("s1c new value:%d\n", s1c);


				}

		}
		//s1c++;

	}

}

int main(){

	char string1[] = {"john"};
	char string2[] = {"jerusalem"};

	squeeze(string1, string2);

	printf("%s\n", string1);

	return 0;
}