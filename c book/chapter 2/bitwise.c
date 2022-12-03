#include <stdio.h> 

int main(){

	// & - bitwise and ==> common bits are returned
	// | - bitwise inclusive OR ==> bits that appear in both and any other bits
	// ^ - bitwise exclusive OR ==> bits only present in both
	// << - left shift ==> binary left shift by (x<<y) y places
	// >> - right shift ==> binary right shift by (x>>y) y places
	// ~ - one's complement (unary) ==> converts all zeroes to ones and all ones to zeroes

	//      0010 & 0011
	int xand = 2 & 3;
	printf("%d\n", xand);
	

	//      0101 & 1100
	int yand = 5 & 12;
	printf("%d\n", yand);


	//      0010 | 0011  - 2,1
	int x_or = 2 | 3;
	printf("%d\n", x_or);


	//      0101 | 1100 - 8,4,1
	int y_or = 5 | 12;
	printf("%d\n", y_or);



	//       0010 & 0011
	int x_xor = 2 & 3;
	printf("%d\n", x_xor);
	

	//       0101 & 1100
	int y_xor = 5 & 12;
	printf("%d\n", y_xor);


	int lshift = 5<<1; // 0101 ==> 1010 = 10
	int rshift = 8>>3; // 8000 ==> 0001 = 1
	printf("%d %d\n", lshift, rshift);


	int unary =~2; //0101
	printf("%d\n", unary);


	return 0;
}