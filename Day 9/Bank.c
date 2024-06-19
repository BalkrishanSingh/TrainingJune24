#include <stdio.h>
#include <string.h>

struct userAccount
{
    int number;
    char name[25];
    int pin;
    float balance;
    float history[10];
    int historyIndex;
};

void newAccount(struct userAccount *new)
{
    printf("Enter new account number: ");
    scanf("%d", &new->number);
    printf("Enter account name: ");
    scanf("%s", new->name);
    printf("Enter pin: ");
    scanf("%d", &new->pin);
    printf("Enter initial Deposit: ");
    scanf("%f", &new->balance);
    new->historyIndex = 0;
}

struct userAccount *search(struct userAccount *acc, int size, int accountNumber, int pinNeeded)
{
    int pin;
    struct userAccount *end = acc + size;
    while (acc < end)
    {
        if (accountNumber == acc->number)
        {
            if (pinNeeded)
            {
                printf("Enter PIN : ");
                scanf("%d", &pin);
                if (pin == acc->pin)
                {
                    return acc;
                }
                else
                {
                    printf("Wrong Pin :");
                    return NULL;
                }
            }
            else
            {
                return acc;
            }
        }
        acc++;
    }
    printf("Account doesn't exist.\n");
    return NULL;
}

void addHistory(struct userAccount *acc, float amount)
{
    if (acc->historyIndex < 10)
    {
        acc->history[acc->historyIndex++] = amount;
    }
    else
    {
        memmove(acc->history, acc->history + 1, sizeof(float) * 9);
        acc->history[9] = amount;
    }
}

void deposit(struct userAccount *acc, float amount)
{
    acc->balance += amount;
    addHistory(acc, amount);
    printf("%.2f deposited successfully.\n", amount);
}

int withdraw(struct userAccount *acc, float amount)
{
    if (acc->balance >= amount)
    {
        acc->balance -= amount;
        addHistory(acc, -amount);
        printf("%.2f withdrawn successfully.\n", amount);
        return 1;
    }
    else
    {
        printf("Insufficient Balance.\n");
        return 0;
    }
}

void transfer(struct userAccount *accs, struct userAccount *acc, int size)
{
    int accountNumber;
    float amount;
    printf("Enter other account's number: ");
    scanf("%d", &accountNumber);
    printf("Enter transfer amount: ");
    scanf("%f", &amount);
    struct userAccount *otherAccount = search(accs, size, accountNumber, 0);
    if (otherAccount && withdraw(acc, amount))
    {
        deposit(otherAccount, amount);
        printf("Transfer Successful.\n");
    }
}

void changePin(struct userAccount *acc)
{
    printf("Enter new pin: ");
    scanf("%d", &acc->pin);
    printf("PIN changed successfully.\n");
}

void history(struct userAccount *acc)
{
    printf("Transactions history:\n");
    for (int i = 0; i < acc->historyIndex; i++)
    {
        printf("%.2f\n", acc->history[i]);
    }
}

void inquiry(struct userAccount *acc)
{
    printf("Balance: %.2f\n", acc->balance);
}

int main()
{
    int choice, accountNumber, size, flag, exit = 0;
    float amount;
    printf("Balkrishan 2302492\n");
    printf("Enter number of users: ");
    scanf("%d", &size);
    struct userAccount users[size];
    struct userAccount *user;

    for (int i = 0; i < size; i++)
    {
        printf("Enter details of user %d: \n", i + 1);
        newAccount(&users[i]);
    }

    while (!exit)
    {
        printf("---------Login---------\n");
        printf("Enter Account Number: ");
        scanf("%d", &accountNumber);
        user = search(users, size, accountNumber, 1);
        flag = 1;
        while (flag)
        {
            if (user)
            {
                printf("Choose an operation:\n");
                printf("Enter 1 for balance inquiry\n");
                printf("Enter 2 for cash withdrawal\n");
                printf("Enter 3 for cash deposit\n");
                printf("Enter 4 for transferring funds\n");
                printf("Enter 5 for changing pin\n");
                printf("Enter 6 for viewing transaction history\n");
                printf("Enter 7 for changing user\n");
                printf("Enter 8 for exiting\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    inquiry(user);
                    break;
                case 2:
                    printf("Enter withdraw amount: ");
                    scanf("%f", &amount);
                    withdraw(user, amount);
                    break;
                case 3:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    deposit(user, amount);
                    break;
                case 4:
                    transfer(users, user, size);
                    break;
                case 5:
                    changePin(user);
                    break;
                case 6:
                    history(user);
                    break;
                case 7:
                    flag = 0;
                    break;
                case 8:
                    flag = 0;
                    exit = 1;
                    break;
                default:
                    printf("Invalid Choice.\n");
                    break;
                }
            }
            else
            {
                flag = 0;
            }
        }
    }

    return 0;
}
