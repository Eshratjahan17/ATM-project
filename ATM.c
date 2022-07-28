#include <stdio.h>
unsigned long amount = 5000, deposit, withdraw;
int choice, pin, k;
unsigned long card_number;
char transaction = 'y';
void main()
{
    while (card_number != 123456)
    {
        printf("ENTER YOUR CARD NUMBER:");
        scanf("%lu", & card_number);
        if (card_number != 123456)
            printf("PLEASE ENTER VALID NUMBER! \a\n");
    }

    while (pin != 1520)
    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", & pin);
        if (pin != 1520)
            printf("PLEASE ENTER VALID PASSWORD! \a\n");
    }
    do
    {
        printf("\n********Welcome to Eshrat's Bank ATM Service***********\n");

        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Transaction list\n");
        printf("5. Quit\n");
        printf("********************************************\n\n");
        printf("Enter your choice: ");
        scanf("%d", & choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE IS TK : %lu ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", & withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw > (amount - 500))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu", & deposit);
            amount = amount + deposit;
            printf("YOUR BALANCE IS %lu", amount);
            break;
            case 4:
            printf("\n YOUR TRANSACTION LIST:\n");
            printf(" Withdraw =%lu\n",withdraw);
            printf(" Deposit =%lu",deposit);
            break;
        case 5:
            printf("\n THANK YOU FOR USING  Eshrat's  Bank ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", & transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    }
    while (!k);
    printf("\n\n THANKS FOR USING  Eshrat's  Bank ATM SERVICE");
}

