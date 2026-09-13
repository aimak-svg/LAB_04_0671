#include <stdio.h>

int main()
{
    int hour;
    float totalBill;

    printf("enter the total bill amount: ");
    scanf("%f", &totalBill);

    printf("enter the hour of the day (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14)
    {
        totalBill = (90.0/100.0)* totalBill;
    }
    else
    {
        totalBill = totalBill;
    }

    printf("The total bill amount is: %.2f", totalBill);
}