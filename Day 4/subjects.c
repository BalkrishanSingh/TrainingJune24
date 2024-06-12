#include <stdio.h>

int main()
{
    int arr[30][5];
    printf("Balkrishan 2302492\n");

    for (int j = 0; j < 5; j++)
    {
        printf("Enter Marks for subject %d : ", j + 1);
        for (int i = 0; i < 30; i++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 30; i++)
    {
        printf("Marks of Student %d in 5 subjects: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}