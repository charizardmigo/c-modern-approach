//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO CALCULATE REMAINING BALANCE ON LOAN AFTER FIRST, SECOND AND THIRD MONTHLY PAYMENTS
//DATE: 3RD AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float loan, pay, interest_rate, monthly_pay, monthly_interest, balance;
    int  number_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter number of payments: ");
    scanf("%d", &number_of_payments);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    monthly_interest = (interest_rate / 100.0f) * (1.0f / 12.0f); //Computes the monthly interest rate

    for (pay = 1; pay <= number_of_payments; pay++){

        balance = (loan * monthly_interest) + loan - monthly_pay;
        loan = balance;

        if (balance < 0)
           return 0;
        else
            printf("\nBalance remaining $%.2f\n", balance);
    }

    //Displays results of monthly balances

    return 0;
}
