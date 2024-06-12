#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Balkrishan 2302492");
    printf("\nEnter Number : ");
    scanf("%d", &n);
    printf("factorial of %d is : %d", n, fact(n));
}
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}