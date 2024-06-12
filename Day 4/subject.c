#include <stdio.h>

int main()
{
    int arr[30];
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Balkrishan 2302492\n");
    printf("Enter Marks : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Marks of Student %d : %d\n", i + 1, arr[i]);
    }
}