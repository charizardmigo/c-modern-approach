//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS WHETHER A UPC IS VALID
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int first_digit, b, c, d, e, f, g, h, i, j, k, check_digit, first_sum, sec_sum, tot1, tot2;

    printf("Enter the first single digit: ");
    scanf("%1d%", &first_digit);
    printf("Enter the first set of 5 digits: ");
    scanf("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);
    printf("Enter the second set of 5 digits: ");
    scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);
    printf("Enter the UPC check digit: ");
    scanf("%1d", &check_digit);

    first_sum = b + d + f + h + j;
    sec_sum = first_digit + c + e + g + i + k;
    tot1 = (((first_sum * 3) + sec_sum) - 1) % 10;
    tot2 = 9 - tot1;

    if (check_digit == tot1)
        printf("THE UPC IS VALID");

    else
        printf("THE UPC IS INVALID");

    return 0;
}
