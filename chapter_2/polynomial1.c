//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO COMPUTE THE VALUE OF A POLYNOMIAL FROM USER'S INPUT
//DATE:14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, result;

    printf("Polynomial to be computed: 3(x)^5 + 2(x)^4 - 5(x)^3 - (x)^2 + 7(x) - 6 \n");
    printf("Enter a value for x: ");
    scanf("%d", &x);

    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * (x)) - 6;

    printf("The value is %d", result);

    return 0;
}
