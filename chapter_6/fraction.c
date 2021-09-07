//NAME: PRIESTLEY FOMECHE
//AIM: BREAKS DOWN A FRACTION TO LOWEST TERMS
//DATE: 24th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int m, n, num, denom, rem, gcf;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    num = m;
    denom = n;

    while (n != 0){
        rem = m % n;
        m = n;
        n = rem;
    }

    gcf = m;

     printf("The fraction in lowest terms is %d/%d", (num/gcf), (denom/gcf));

     return 0;
}
