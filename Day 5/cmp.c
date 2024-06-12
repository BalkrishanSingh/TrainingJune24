#include <stdio.h>
#include <string.h>

int main()
{
    printf("Balkrishan 2302492\n");
    char s1[50];
    char s2[50];
    printf("Enter student 1 name : ");
    scanf("%s", s1);
    printf("Enter student 2 name : ");
    scanf("%s", s2);
    if (strcmp(s1, s2))
    {
        printf("Different Names");
    }
    else
    {
        printf("Same Names:");
    }
    return 0;
}