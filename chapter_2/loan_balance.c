//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO CALCULATE REMAINING BALANCE ON LOAN AFTER FIRST, SECOND AND THIRD MONTHLY PAYMENTS
//DATE: 14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float loan, interest_rate, monthly_pay, monthly_interest, balance1, balance2, balance3;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    monthly_interest = (interest_rate / 100.0f) * (1.0f / 12.0f); //Computes the monthly interest rate
    balance1 = (loan * monthly_interest) + loan - monthly_pay; //Computes the balance on loan after first month
    balance2 = (balance1 * monthly_interest) + balance1 - monthly_pay; //Computes the balance on loan after second month
    balance3 = (balance2 * monthly_interest) + balance2 - monthly_pay; //Computes the balance on loan after third month

    //Displays results of monthly balances
    printf("\nBalance remaining after first payment: $%.2f\n", balance1);
    printf("Balance remaining after second payment: $%.2f\n", balance2);
    printf("Balance remaining after third payment: $%.2f", balance3);

    return 0;
}
