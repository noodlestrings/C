#include <stdio.h>
#include <limits.h>

int main()
{

    int max = INT_MAX;
    int min = INT_MIN;
    int charmax = CHAR_MAX;
    int charmin = CHAR_MIN;
    printf("%d int max, %d int min, %d char max, %d char min", max, min, charmax, charmin);

    // %u is the unsigned format specifier
    unsigned int a = -1;

    printf("\n%u\n", a);
    // prints a random num
    return 0;
}