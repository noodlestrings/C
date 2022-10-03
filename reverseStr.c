#include <stdio.h>
#include <string.h>

int main(){
	char inp[] = "desrever si siht";
	for (int i=strlen(inp); i >= 0; --i){
		printf("%c\n", inp[i]);
	}
	return 0;
}