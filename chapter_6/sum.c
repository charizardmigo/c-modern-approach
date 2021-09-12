//NAME: PRIESTLEY FOMECHE
//AIM: SUMS A SERIES OF INTEGERS
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, sum = 0;

    printf("THIS PROGRAM SUMS A SERIES OF INTEGERS.\n");
    printf("Enter integers (separated with spaces, end the list with 0): ");

    scanf("%d", &n);

    while (n != 0){
        sum += n;
        scanf("%d", &n);
    }

    printf("The sum is: %d", sum);

    return 0;
}
