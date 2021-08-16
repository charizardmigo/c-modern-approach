//NAME: PRIESTLEY FOMECHE
//AIM: TAKES AN INTEGER FROM USER AND DISPLAYS ITS OCTAL EQUIVALENT
//DATE: 17th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, div1, div2, div3, div4, rem1, rem2, rem3, rem4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    div1 = num / 8;
    rem1 = num % 8;
    div2 = div1 / 8;
    rem2 = div1 % 8;
    div3 = div2 / 8;
    rem3 = div2 % 8;
    div4 = div3 / 8;
    rem4 = div3 % 8;

    printf("In octal, your number is: %d%d%d%d%d", div4, rem4, rem3, rem2, rem1);

    return 0;
}
