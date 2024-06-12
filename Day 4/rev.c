#include <stdio.h>

int main()
{
    printf("Balkrishan 2302492\n");
    int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}