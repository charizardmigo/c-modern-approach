//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES THE FACTORIAL OF A POSITIVE INTEGER
//DATE: 13TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    short result = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        result *= (n - i);

    printf("Factorial of %d: %d", n, result);

    return 0;
}
