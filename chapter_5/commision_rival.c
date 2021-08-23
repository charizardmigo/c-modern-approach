//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES A BROKER'S COMMISSION WHEN STOCKS ARE SOLD THROUGH HIM, ALONGSIDE A RIVAL'S COMMISSION
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float trade, price_per_share, com_rate; //Transaction Size and commission rate respectively
    int share, com; //Commission to be added

    printf("Enter the number of shares: ");
    scanf("%d", &share);
    printf("Enter the price per share: $");
    scanf("%f", &price_per_share);

    trade = share * price_per_share;

    //Calculates commission when transaction size is under $2,500 (broker)
    if (trade >= 39 && trade < 2500)
        com = 30, com_rate = (1.7f / 100.0f);

    //Calculates commission when transaction size is in the range $2,500 - $6,250 (broker)
    else if (trade >= 2500 && trade < 6250)
        com = 56, com_rate = (0.66f / 100.0f);

    //Calculates commission when transaction size is in the range $6,200 - $20,000 (broker)
    else if (trade >= 6250 && trade < 20000)
        com = 76, com_rate = (0.34f / 100.0f);

    //Calculates commission when transaction size is in the range $20,000 - $50,000 (broker)
    else if (trade >= 20000 && trade < 50000)
        com = 100, com_rate = (0.22f / 100.0f);

    //Calculates commission when transaction size is in the range $50,000 - $500,000 (broker)
    else if (trade >= 50000 && trade < 500000)
        com = 155, com_rate = (0.11f / 100.0f);

    //Calculates commission when transaction size is over $500,000 (broker)
    else if (trade >= 500000)
        com = 255, com_rate = (0.09f / 100.0f);

    //Calculates commission when transaction size is under $39 (broker)
    else
        com = 39, com_rate = 0;

    printf("Broker's Commission: $%.2f\n", (com_rate * trade) + com);

    com = 33;

    if (share < 2000)
        com_rate = share * 0.03;
    else
        com_rate = share * 0.02;

        printf("Rival Broker's Commission: $%.2f", com + com_rate);

    return 0;
}
