//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES NUMBER OF DIGITS IN AN INTEGER
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    do {
        a /= 10;
        digits++;
    } while (a > 0);

    printf("The number has %d digit(s)", digits);

    return 0;
}
