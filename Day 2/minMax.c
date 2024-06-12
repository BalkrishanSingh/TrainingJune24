#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    printf("Balkrishan 2302492\n");
    int a, b;
    printf("Enter Two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Max Number is  : %d\n", max(a, b));
    printf("Min Number is  : %d", min(a, b));
}