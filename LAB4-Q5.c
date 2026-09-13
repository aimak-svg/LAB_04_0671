#include <stdio.h>

int main()
{
    float totalCost;
    char extraCheese;
    printf("enter the current order total: ");
    scanf("%f", &totalCost);

    printf("Do you want extra cheese(Y/N)?");
    scanf(" %c", &extraCheese);

    if (extraCheese == 'Y' || extraCheese == 'y')
        totalCost = totalCost + 1.50;
    else if (extraCheese == 'N' || extraCheese == 'n')
        totalCost = totalCost;
    else
        printf("Invalid input for extra cheese selection\n");

    printf("The total cost of the order is: %.2f", totalCost);
}