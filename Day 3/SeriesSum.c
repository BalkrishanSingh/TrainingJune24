#include <stdio.h>
#include <math.h>
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
float infSum(int n, int x)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (float)infSum(n - 1, x) + (pow(x, n)) / fact(n);
    }
}
int main()
{
    int n, x;
    printf("Balkrishan 2302492");
    printf("\nEnter n and x : ");
    scanf("%d %d", &n, &x);
    printf("Sum of infinite series upto %dth term is : %.2f", n, infSum(n, x));
}
