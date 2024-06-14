#include <stdio.h>
void add(int a, int b)
{
    printf("%d + %d: %d ", a, b, a + b);
}
void sub(int a, int b)
{
    printf("%d - %d: %d ", a, b, a - b);
}
void mul(int a, int b)
{
    printf("%d * %d: %d ", a, b, a * b);
}
void div(int a, int b)
{
    printf("%d / %d: %.2f ", a, b, (float)a / b);
}
int main()
{
    printf("Balkrishan 2302492\n");
    int choice, a, b;
    void (*funcPtr)(int, int);
    printf("Enter No. between 1 to 4 to choose between addition, subtract, multiply, divide : ");
    scanf("%d", &choice);
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    switch (choice)
    {
    case 1:
        funcPtr = &add;
        funcPtr(a, b);
        break;
    case 2:
        funcPtr = &sub;
        funcPtr(a, b);
        break;
    case 3:
        funcPtr = &mul;
        funcPtr(a, b);
        break;
    case 4:
        funcPtr = &div;
        funcPtr(a, b);
        break;
    }
}