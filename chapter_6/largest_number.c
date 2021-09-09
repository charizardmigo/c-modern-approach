//NAME: PRIESTLEY FOMECHE
//AIM: FINDS THE LARGEST NUMBER IN A SERIES OF NUMBERS ENTERED BY USER
//DATE: 24th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2, num3, num4, num5;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter a number: ");
    scanf("%f", &num2);
    printf("Enter a number: ");
    scanf("%f", &num3);
    printf("Enter a number: ");
    scanf("%f", &num4);
    printf("Enter a number: ");
    scanf("%f", &num5);

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
         printf("Maximum number is %.2f", num1);

    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
        printf("Maximum number is %.2f", num2);

    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
        printf("Maximum number is %.2f", num3);

    else if (num4 > num1 && num4 > num3 && num4 > num2 && num4 > num5)
         printf("Maximum number is %.2f", num4);

    else
         printf("Maximum number is %.2f", num5);

    return 0;
}
