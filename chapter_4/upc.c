//NAME: PRIESTLEY FOMECHE
//AIM: COMPUTES A UNIVERSAL PRODUCT CODE CHECK DIGIT
//DATE: 17th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, first_sum, sec_sum, tot1;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);

    first_sum = a + c + e + g + i + k;
    sec_sum = b + d + f + h + j;
    tot1 = (((first_sum * 3) + sec_sum) - 1) % 10;

    printf("Check sum: %d", 9 - tot1);

    return 0;
}
