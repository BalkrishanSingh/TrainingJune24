#include <stdio.h>
int evenOdd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("Balkrishan 2302492\n");
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    if (evenOdd(a))
    {
        printf("Number %d is even", a);
    }
    else
    {
        printf("Number %d is odd", a);
    }
}