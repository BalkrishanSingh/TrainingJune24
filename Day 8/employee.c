#include <stdio.h>
#include <string.h>
struct Address
{
    char street[30];
    char city[30];
    int zipcode;
};
struct Employee
{
    int id;
    char name[25];
    int age;
    float salary;
    struct Address address;
};
void showDetail(struct Employee e)
{
    printf("ID: %d\nName: %s\nAge: %d\nSalary: %.2f", e.id, e.name, e.age, e.salary);
    printf("\nStreet: %s\nCity: %s\nZipcode: %d", e.address.street, e.address.city, e.address.zipcode);
}
void sortStruct(struct Employee e[], int size)
{
    struct Employee temp;
    int minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (e[minIndex].salary > e[j].salary)
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            temp = e[i];
            e[i] = e[minIndex];
            e[minIndex] = temp;
        }
    }
}
int main()
{
    printf("Balkrishan 2302492\n");
    int n;
    printf("Enter Number of Employee : ");
    scanf("%d", &n);
    struct Employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter ID, Name, Age, Salary of Employee %d: ", i + 1);
        scanf("%d %s %d %f", &e[i].id, e[i].name, &e[i].age, &e[i].salary);
        printf("Enter Address(Street,City,Zip Code) of Employee %d: ", i + 1);
        scanf(" %s %s %d", e[i].address.street, e[i].address.city, &e[i].address.zipcode);
    }
    sortStruct(e, n);
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails of Employee %d :\n", i + 1);
        showDetail(e[i]);
    }
}