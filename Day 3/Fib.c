#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Balkrishan 2302492");
    printf("\nEnter Number : ");
    scanf("%d", &n);
    printf("%dth fibnonacci number is : %d", n, fib(n));
}
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}