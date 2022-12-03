#include <stdio.h>

//Write the function any(s1,s2), which returns the first location in a string s1 where any character from 
//the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does 
//the same job but returns a pointer to the location.)

int any(char string1[], char string2[]){

	int s1loc, s2loc;

	// first location where any character from s2 appears in s1
	for (s1loc=0;string1[s1loc]!='\0';s1loc++){
		for (s2loc=0;string2[s2loc]!='\0';s2loc++){
			if (string1[s1loc] == string2[s2loc]){
				return s1loc;
				}

		}
	}





	// elif no characters from s2 can be found in s1
	return -1;

}


int main(){

	char string1[] = {"ohn"};
	char string2[] = {"jerusalem"};

	printf("%d\n", any(string1, string2));

	return 0;
}