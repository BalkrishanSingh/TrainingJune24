#include <stdio.h>
int count = 0;
int add(int a, int b)
{
    count++;
    return a + b;
}
int sub(int a, int b)
{
    count++;
    return a - b;
}
int mul(int a, int b)
{
    count++;
    return a * b;
}
float div(int a, int b)
{
    count++;
    return (float)a / b;
}
int main()
{
    printf("Balkrishan 2302492\n");
    int choice, a, b;
    int cont;
    while (1)
    {
        printf("Enter No. between 1 to 4 to choose between addition, subtract, multiply, divide : ");
        scanf("%d", &choice);
        printf("Enter a and b : ");
        scanf("%d %d", &a, &b);
        switch (choice)
        {
        case 1:
            printf("%d + %d: %d ", a, b, add(a, b));
            break;
        case 2:
            printf("%d - %d: %d ", a, b, sub(a, b));
            break;
        case 3:
            printf("%d * %d: %d ", a, b, mul(a, b));
            break;
        case 4:
            printf("%d / %d: %.2f ", a, b, div(a, b));
            break;
        }
        printf("\nContinue ? 1 or 0 :");
        scanf("%d", &cont);
        if (cont)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("Operations :%d", count);
}