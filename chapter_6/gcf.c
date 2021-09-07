//NAME: PRIESTLEY FOMECHE
//AIM: FINDS THE GREATEST COMMON FACTOR BETWEEN TWO NUMBERS
//DATE: 24th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, rem;

    printf("Enter two numbers (separated with a space): ");
    scanf("%d %d", &m, &n);

    while (n != 0){
        rem = m % n;
        m = n;
        n = rem;
    }
            printf("The GCF is %d", m);

    return 0;
}
