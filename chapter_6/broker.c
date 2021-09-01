//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES A BROKER'S COMMISSION WHEN STOCKS ARE SOLD THROUGH HIM
//DATE: 28th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float trade, com_rate; //Transaction Size and commission rate respectively
    int com; //Commission to be added

    while (trade != 0.00f){

        printf("Enter the value of trade: $");
        scanf("%f", &trade);

    if (trade == 0.00f)
        return 0;

    //Calculates commission when transaction size is under $39
    else if (trade < 39.00f)
        com = 39, com_rate = 0.00f;

    //Calculates commission when transaction size is under $2,500
    else if (trade < 2500.00f)
        com = 30, com_rate = (1.70f / 100.00f);

    //Calculates commission when transaction size is in the range $2,500 - $6,250
    else if (trade < 6250.00f)
        com = 56, com_rate = (0.66f / 100.00f);

    //Calculates commission when transaction size is in the range $6,200 - $20,000
    else if (trade < 20000.00f)
        com = 76, com_rate = (0.34f / 100.00f);

    //Calculates commission when transaction size is in the range $20,000 - $50,000
    else if (trade < 50000.00f)
        com = 100, com_rate = (0.22f / 100.0f);

    //Calculates commission when transaction size is in the range $50,000 - $500,000
    else if (trade < 500000.00f)
        com = 155, com_rate = (0.11f / 100.00f);

    //Calculates commission when transaction size is over $500,000
    else
        com = 255, com_rate = (0.09f / 100.00f);

    printf("Commission: $%.2f\n\n", (com_rate * trade) + com);

    }

    return 0;
}
