#include <stdio.h>
void swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    printf("Balkrishan 2302492\n");
    int x = 10;
    int y = 20;
    printf("Before swap \nx : %d , y : %d\n", x, y);
    swap(&x, &y);
    printf("After swap\nx : %d , y : %d", x, y);
    return 0;
}