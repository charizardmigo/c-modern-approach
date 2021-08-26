//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES HOW MANY DIGITS A NUMBER HAS
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10)
        printf("The number has %d has 1 digit", num);

    else if (num < 100)
        printf("The number %d has 2 digits", num);

    else if (num < 1000)
        printf("The number has %d has 3 digits", num);

    else if (num < 10000)
        printf("The number has %d has 4 digits", num);

    else if (num < 100000)
        printf("The number has %d has 5 digits", num);

    else if (num < 1000000)
        printf("The number has %d has 6 digits", num);

    return 0;
}
