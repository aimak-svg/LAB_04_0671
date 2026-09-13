#include <stdio.h>

int main()
{
    int fulfillmentOption;
    float totalCost;
    printf("enter the order total: ");
    scanf("%f", &totalCost);

    printf("enter the fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillmentOption);

    if (fulfillmentOption == 2)
        totalCost = totalCost + 3.00;
    else if (fulfillmentOption == 1)
        totalCost = totalCost;
    else
        printf("Invalid input for fulfillment option\n");

    printf("The total cost of the order is: %.2f", totalCost);
}