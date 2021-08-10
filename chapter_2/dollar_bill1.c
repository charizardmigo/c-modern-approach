//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO DISPLAY THE TOTAL NUMBER OF $20, $10, $5 AND $1 BILLS EACH NEEDED TO TOTAL UP TO THE DOLLAR AMOUNT GOTTEN FROM THE USER
//DATE: 14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int usd, usd_div1, usd_rem1, usd_div2, usd_rem2, usd_div3, usd_rem3, usd_div4;

    printf("Enter a dollar amount: ");
    scanf("%d", &usd);

    usd_div1 = usd / 20; //Computes the number of $20 bills
    usd_rem1 = usd % 20; //Computes the remainder
    usd_div2 = usd_rem1 / 10; //Computes the number of $10 bills
    usd_rem2 = usd_rem1 % 10; //Computes the remainder
    usd_div3 = usd_rem2 / 5; //Computes the number of $5 bills
    usd_rem3 = usd_rem2 % 5; //Computes the remainder
    usd_div4 = usd_rem3 / 1; //Computes the number of $1 bills

    //Displays the number of bills
    printf("$20 bills: %d\n", usd_div1);
    printf("$10 bills: %d\n", usd_div2);
    printf("$5 bills: %d\n", usd_div3);
    printf("$1 bills: %d\n", usd_div4);

    return 0;
}
