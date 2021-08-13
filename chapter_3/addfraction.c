//NAME: PRIESTLEY FOMECHE
//AIM: ADDS TWO FRACTIONS GOTTEN FROM USER, SEPARATED BY A PLUS SIGN
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, denom1, num2, denom2, num3, denom3;

    printf("Enter two fractions separated with a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    num3 = (num1 * denom2) + (num2 * denom1); //Computes the numerator of answer
    denom3 = denom1 * denom2; //Computes the denominator of answer

    printf("The sum is %d/%d", num3, denom3);

    return 0;
}
