#include <stdio.h>
#include <string.h>
// char *cat(char s1[], char s2[], char s3[])
// {
//     strcpy(s3, s1);
//     strcat(s3, s2);
//     return s3;
// }
int main()
{
    printf("Balkrishan 2302492\n");
    char s1[50];
    char s2[50];
    // char s3[100];
    printf("Enter student 1 name : ");
    scanf("%s", s1);
    printf("Enter student 2 name : ");
    scanf("%s", s2);
    printf("%s", strcat(s1, s2));
    // printf("%s", cat(s1, s2, s3));
    return 0;
}