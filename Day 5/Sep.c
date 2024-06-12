#include <stdio.h>
#include <string.h>
void Sep(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\n", str[i]);
    }
}
int main()
{
    printf("Balkrishan 2302492\n");
    char s1[50];
    printf("Enter student name : ");
    scanf("%s", s1);
    Sep(s1);
    return 0;
}