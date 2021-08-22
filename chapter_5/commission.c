//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES A BROKER'S COMMISSION WHEN STOCKS ARE SOLD THROUGH HIM
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float trade, com_rate; //Transaction Size and commission rate respectively
    int com; //Commission to be added

    printf("Enter the value of trade: $");
    scanf("%f", &trade);

    //Calculates commission when transaction size is under $2,500
    if (trade >= 39 && trade < 2500)
        com = 30, com_rate = (1.7f / 100.0f);

    //Calculates commission when transaction size is in the range $2,500 - $6,250
    else if (trade >= 2500 && trade < 6250)
        com = 56, com_rate = (0.66f / 100.0f);

    //Calculates commission when transaction size is in the range $6,200 - $20,000
    else if (trade >= 6250 && trade < 20000)
        com = 76, com_rate = (0.34f / 100.0f);

    //Calculates commission when transaction size is in the range $20,000 - $50,000
    else if (trade >= 20000 && trade < 50000)
        com = 100, com_rate = (0.22f / 100.0f);

    //Calculates commission when transaction size is in the range $50,000 - $500,000
    else if (trade >= 50000 && trade < 500000)
        com = 155, com_rate = (0.11f / 100.0f);

    //Calculates commission when transaction size is over $500,000
    else if (trade >= 500000)
        com = 255, com_rate = (0.09f / 100.0f);

    //Calculates commission when transaction size is under $39
    else
        com = 39, com_rate = 0;

    printf("Commission: $%.2f", (com_rate * trade) + com);

    return 0;
}
