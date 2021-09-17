//NAME: PRIESTLEY FOMECHE
//AIM: EVALUATES AN EXPRESSION (NOT BY PEMDAS)
//DATE: 13TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2, stack;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &num1);

    while ((ch = getchar()) != '\n') {

        if (ch == ' ')
            continue;

        scanf("%f", &num2);

        if (ch == '+')
            num1 += num2;

        else if (ch == '-')
            num1 -= num2;

        else if (ch == '/')
            num1 /= num2;

        else if (ch == '*')
            num1 *= num2;
    }

    printf("\nValue of expression: %.2f", num1);

    return 0;
}
