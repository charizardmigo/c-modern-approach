//NAME: PRIESTLEY FOMECHE
//AIM: TAKES A 3-DIGIT NUMBER FROM USER AND PRINTS IT IN REVERSE ORDER USING ARITHMETIC
//DATE: 17th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, div1, div2, rem1, rem2;

    printf("Enter a three-digit number: ");
    scanf("%d", &a);

    div1 = a / 10;
    rem1 = a % 10;
    div2 = div1 / 10;
    rem2 = div1 % 10;

    printf("The reversal is: %d%d%d", rem1, rem2, div2);

    return 0;
}
