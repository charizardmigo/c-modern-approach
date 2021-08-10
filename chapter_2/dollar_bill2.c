//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO DISPLAY THE TOTAL NUMBER OF $20, $10, $5 AND $1 BILLS EACH NEEDED TO TOTAL UP TO THE DOLLAR AMOUNT GOTTEN FROM THE USER
//DATE: 14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int usd, usd_div1, usd_div2, usd_div3, usd_div4, usd_mul1, usd_mul2, usd_mul3, usd_mul4, usd_dif1, usd_dif2, usd_dif3, usd_dif4;

    printf("Enter a dollar amount: ");
    scanf("%d", &usd);

    usd_div1 = usd / 20; //Computes the number of $20 bills
    usd_mul1 = usd_div1 * 20; //Computes the total amount in $ of $20 bills in the initial amount
    usd_dif1 = usd - usd_mul1; //Computes the balance after removing all $20 bills required

    usd_div2 = usd_dif1 / 10; //Computes the number of $10 bills
    usd_mul2 = usd_div2 * 10; //Computes the total amount in $ of $10 bills in the initial amount
    usd_dif2 = usd_dif1 - usd_mul2; //Computes the balance after removing all $10 bills required

    usd_div3 = usd_dif2 / 5; //Computes the number of $5 bills
    usd_mul3 = usd_div3 * 5; //Computes the total amount in $ of $5 bills in the initial amount
    usd_dif3 = usd_dif2 - usd_mul3; //Computes the balance after removing all $5 bills required

    usd_div4 = usd_dif3 / 1; //Computes the number of $1 bills
    usd_mul4 = usd_div4 * 1; //Computes the total amount in $ of $1 bills in the initial amount
    usd_dif4 = usd_dif3 - usd_mul4; //Computes the balance after removing all $1 bills required

    //Displays the number of bills
    printf("$20 bills: %d\n", usd_div1);
    printf("$10 bills: %d\n", usd_div2);
    printf("$5 bills: %d\n", usd_div3);
    printf("$1 bills: %d\n", usd_div4);

    return 0;
}
