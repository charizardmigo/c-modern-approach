//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES A USER'S TAX DUE
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float income, tax;

    printf("Enter your income amount: $");
    scanf("%f", &income);

    if (income < 750)
        tax = (1.0f / 100.0f) * income;

    else if (income < 2250)
        tax = ((2.0f / 100.0f) * income) + 7.50;

    else if (income < 3750)
        tax = ((3.0f / 100.0f) * income) + 37.50;

    else if (income < 5250)
        tax = ((4.0f / 100.0f) * income) + 82.50;

    else if (income < 7000)
        tax = ((5.0f / 100.0f) * income) + 142.50;

    else
        tax = ((6.0f / 100.0f) * income) + 230.00;

        printf("Your tax due is : $%.2f", tax);

    return 0;
}
