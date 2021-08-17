//NAME: PRIESTLEY FOMECHE
//AIM: TAKES A 2-DIGIT NUMBER FROM USER AND PRINTS IT IN REVERSE ORDER USING ARITHMETIC
//DATE: 17th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, div, rem;

    printf("Enter a two-digit number: ");
    scanf("%d", &a);

    div = a / 10;
    rem = a % 10;

    printf("The reversal is: %d%d", rem, div);

    return 0;
}
