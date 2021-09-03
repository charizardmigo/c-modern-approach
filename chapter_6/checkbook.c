//NAME: PRIESTLEY FOMECHE
//AIM: BALANCES A CHECKBOOK
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int command, clear, credit, debit, balance, exit;

    printf("\tCommands: \n");
    printf("\t0 = Clear \n");
    printf("\t1 = Credit \n");
    printf("\t2 = Debit \n");
    printf("\t3 = Balance \n");
    printf("\t4 = Exit \n\n");
    printf("Enter Command: ");
    scanf("%d", &command);

    if (command == 1){
        printf("Enter amount of credit: ");
        scanf("%d", &credit);
    }

    else if (command == 2){
        printf("Enter amount of debit: ");
        scanf("%d", &debit);
    }

    else if (command == 3)
        printf("Current Balance: $1500");

    else if (command = 4)
        return 0;

    else
        printf("INCORRECT COMMAND");

    return 0;
}
