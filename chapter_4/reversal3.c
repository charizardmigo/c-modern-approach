//NAME: PRIESTLEY FOMECHE
//AIM: TAKES A 3-DIGIT NUMBER FROM USER AND PRINTS IT IN REVERSE ORDER WITHOUT USING ARITHMETIC
//DATE: 17th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter a 3-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);
    printf("The reversal is: %d%d%d", num3, num2, num1);

    return 0;
}
