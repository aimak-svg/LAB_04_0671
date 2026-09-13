#include <stdio.h>

int main()
{
    float totalCost;
    int crustType, Pizzas;
    printf("enter the current total cost of the order: ");
    scanf("%f", &totalCost);

    printf("enter the crust type choice: 1. regular 2. thin 3. stuffed: ");
    scanf("%d", &crustType);

    printf("enter the number of pizzas: ");
    scanf("%d", &Pizzas);

    switch(crustType)
    {
        case 1: totalCost = totalCost ;
            break;
        case 2: totalCost = totalCost + (Pizzas*1); 
            break;
        case 3: totalCost = totalCost + (Pizzas*2);
            break;
        default: printf("Invalid crust type selection.\n");
    }
    printf("The total cost of the order is: %.2f\n", totalCost);
}