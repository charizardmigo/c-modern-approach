//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO ADD 5% TAX TO AMOUNT ENTERED BY USER AND DISPLAY RESULT
//DATE: 14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>
#define TAX (5.0f/100.0f)

int main(void)
{
    float amount, total;

    printf("Enter an amount in dollars: ");
    scanf("%f", &amount);

    total = (TAX * amount) + amount;

    printf("Amount with added tax is %.2f", total);

    return 0;
}
