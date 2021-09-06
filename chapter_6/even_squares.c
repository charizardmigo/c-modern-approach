//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS ALL EVEN SQUARES BETWEEN 1 AND N
//DATE: 28th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;

    printf("Enter max limit for squares: ");
    scanf("%d", &n);

    for (i = 1; (i * i) <= n; i++)
        if (((i * i) % 2) == 0)
            printf("%d\n", i * i);

    return 0;
}
