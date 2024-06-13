#include <stdio.h>
void minmax(int *arr, int size)
{
    int min = *arr;
    int max = *arr;
    int *end = arr + size;
    while (arr < end)
    {
        if (min > *arr)
        {
            min = *arr;
        }
        if (max < *arr)
        {
            max = *arr;
        }
        arr++;
    }
    printf("Min and Max value is: %d and %d respectively", min, max);
}
int main()
{
    printf("Balkrishan 2302492\n");
    int size;
    printf("Enter size of arrary: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no. %d : ", i);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    minmax(ptr, size);
}