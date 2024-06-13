#include <stdio.h>
void mid(int *arr, int size)
{
    int *mid = arr + size / 2;
    printf("Mid: %d ", *mid);
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
    mid(ptr, size);
}