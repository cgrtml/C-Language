/*
In C programming, a character variable holds an ASCII value 
(an integer number between 0 and 127) 
rather than that character itself.

The ASCII value of the lowercase alphabet is from 97 to 122.
and, the ASCII value of the uppercase alphabet is from 65 to 90.

If the ASCII value of the character entered by the user lies in the range 
of 97 to 122 or from 65 to 90, that number is an alphabet.
*/
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}