#include <stdio.h>
// int in(int a, int arr[], int size)
// {
//     for (int x = 0; x < size; x++)
//     {
//         if (a == arr[x])
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

int main()
{
    printf("Balkrishan 2302492\n");
    int count;

    int size;
    printf("Enter size of arrary: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no. %d : ", i);
        scanf("%d", &arr[i]);
    }

    // int done[size];
    // for (int i = 0; i < size - 1; i++)
    // {
    //     if (in(arr[i], done, size))
    //     {
    //         break;
    //     }
    //     count = 0;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count >= 1)
    //     {
    //         printf("%d is repeated %d times\n", arr[i], count + 1);
    //     }
    //     done[i] = arr[i];
    // }
    // return 0;

    // int arr[] = {6, 7, 8, 2, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= 1)
        {
            printf("There is repetition of digits\n");
            return 0;
        }
    }
    printf("There is no repetition of Digits");
}