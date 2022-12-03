#include <stdio.h>


/* bitcount:  count 1 bits in x */
   int bitcount(unsigned x)
{
       int b;
       for (b = 0; x != 0; x >>= 1)
           if (x & 01)
               b++;
       return b;
}

int main(){


    printf("\n%d\n", bitcount(00000111));



//Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. 
//Explain why. Use this observation to write a faster version of bitcount.

    //any binary number -1 will invert the last digit. therefore x & x-1 can never give 1 for the rightmost digit

    return 0;
}
// 0001 -1
// 0010 -2
// 0011 -3
// 0100 -4
// 0101 -5
// 0110 -6
// 0111 -7
// 1000 -8