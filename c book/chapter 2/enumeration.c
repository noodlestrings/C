#include <stdio.h>

enum months {JAN=1, FEB, MAR, APR, JUN, JUL, SEP, OCT, NOV, DEC}; // without jan=1, jan would have 0
// sort of like creating lots of variable procedurally and assigning them values in a consecutive progression

enum status {working=1, failed=0, interrupt=0};

enum nameRatings{JOHN, SAM=99, ADAM=5, BILL, NICK};

int main(){

	enum months month; // almost like instantiating the months / creating variable month of type months
	month = FEB;
	printf("%d\n", month);

	int i;
	for(i=JAN; i<SEP; ++i){
		printf("%d\n", i);
	}

	printf("%d %d %d\n", working, failed, interrupt);

	printf("%d, %d, %d, %d, %d", JOHN, SAM, ADAM, BILL, NICK); 

	return 0;
}