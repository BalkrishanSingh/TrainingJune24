#include <stdio.h>
#include <math.h>
int armstrong(int a)
{
    int digits = 0;
    int n = a;
    while (n)
    {
        n /= 10;
        digits++;
    }
    int t = a;
    int sum = 0;
    while (t)
    {
        sum += pow(t % 10, digits);
        t /= 10;
    }
    if (sum == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int prime(int a)
{

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int perfect(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
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
    if (armstrong(a))
    {
        printf("Number %d is armstrong\n", a);
    }
    else
    {
        printf("Number %d is not armstrong\n", a);
    }
    if (prime(a))
    {
        printf("Number %d is prime\n", a);
    }
    else
    {
        printf("Number %d is not prime\n", a);
    }
    if (perfect(a))
    {
        printf("Number %d is perfect", a);
    }
    else
    {
        printf("Number %d is not perfect", a);
    }
}