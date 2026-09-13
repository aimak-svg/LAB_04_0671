#include <stdio.h>

int main()
{
    int crustType, Pizzas;
    printf("enter the number of pizzas: ");
    scanf("%d", &Pizzas);

    printf("enter the crust type choice: 1. regular 2. thin 3. stuffed: ");
    scanf("%d", &crustType);

    if (Pizzas == 3 && crustType == 3)
        printf("You get free garlic bread!");
    else 
        printf("Thank you for your order!");
    
}