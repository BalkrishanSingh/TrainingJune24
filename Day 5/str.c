#include <stdio.h>
int main()
{
    char str[] = "Hello";
    printf("%c", '\n');
    // printf("%c", "\n"); //
    //%c is expecting a single char but "\n" is a string.
    putchar('\n');
    // putchar("\n");
    // putchar is expecting a single char but "\n" is a string.
    // puts('\n');
    // puts is expecting a string but '\n' is a char.
    puts("\n");
    // printf("%s", '\n');
    //%s is expecting a string but '\n' is a char.
    printf("%s", "\n");
}
