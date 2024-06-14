
#include <stdio.h>
void sum(int *arr, int size)
{

    int sum = 0;
    int *end = arr + size;
    while (arr < end)
    {
        sum += *arr;
        arr++;
    }
    printf("Sum of Arrary is :%d", sum);
}
int main()
{
    printf("Balkrishan 2302492\n");
    int size;
    printf("Enter size of arrary: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements : ");

    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    sum(ptr, size);
}