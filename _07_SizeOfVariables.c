#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

// The sizeof(variable) operator computes the size of a variable. 
// And, to print the result returned by sizeof, we use either %lu or %zu format specifier.
    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}