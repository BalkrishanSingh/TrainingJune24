#include <stdio.h>
int max(int arr[], int size)
{
    int max = arr[0];
    int j = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[j])
        {
            max = arr[j];
        }
        j++;
    }
    return max;
}
int main()
{
    printf("Balkrishan 2302492\n");

    int n;
    printf("Enter no of student : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter grades : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("maximum grades is %d", max(arr, n));
    return 0;
}