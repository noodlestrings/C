#include <stdio.h>
#define INCREMENT(x) ++x

int main()
{

    // difference between #define and using const:
    // #define is a preprocessor directive. This means that before the code is run, all instances of the constant
    // in the program are replaced with the defined value.
    // const on the other hand is handled by the compiler and is not considered a macro preprocessor direcitve.
    // 
    // #define cannot be type checked whereas const can be. We can also use const as variables (so pointers etc..)
    // GENERALLY TRY TO USE CONST WHERE POSSIBLE. 
    // note #define can also be used to create small functions

    const int A = 1234;
    const long int B = 123456789L;
    // having L at the end of a const 'long' num is standard
    const long unsigned int C = 12345ul;
    // or
    const long unsigned int D = 123456UL;
    // and u or U for just unsigned, f or F for float, l or L for double, etc...

    char a = 'a';
    printf("%c", a);
    ++a;
    printf("%c\n", a);

    printf("%c\n\a", INCREMENT(a));

    return 0;
}