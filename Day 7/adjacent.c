#include <stdio.h>
void sub(int *arr, int size)
{
    int previous;
    int *end = arr + size;
    while (arr < end - 1)
    {
        previous = *arr;
        arr++;
        printf("%d - %d is %d\n", *arr, previous, *arr - previous);
    }
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
    sub(ptr, size);
}