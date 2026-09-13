#include <stdio.h>

int main()
{
    char extraCheese, studentID;
    float totalCost;
    int size, quantity, crustType, hour, fulfillmentOption;
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    switch(size)
    {
        case 1: printf("small size selected");
            break;
        case 2: printf("medium size selected");
            break;
        case 3: printf("large size selected");
            break;
        default: printf("invalid size");
            return 0;
    }

    printf("\nhow many pizzas do you want: ");
    scanf("%d", &quantity);

    switch (quantity)
    {
        case 1: totalCost = 8.00;
            break;
        case 2: totalCost = 15.00;
            break;
        case 3: totalCost = 21.00;
            break;
        default: printf("not applicable");
            return 0;
    }
    printf("%d pizzas: $%.2f\n", quantity, totalCost);

    printf("enter the crust type choice: 1. regular 2. thin 3. stuffed: ");
    scanf("%d", &crustType);

    switch(crustType)
    {
        case 1: totalCost = totalCost;
            printf("Regular crust selected (+$0.00)\n");
            break;
        case 2: totalCost = totalCost + (quantity * 1);
            printf("Thin crust selected (+$%.2f)\n", quantity * 1.00);
            break;
        case 3: totalCost = totalCost + (quantity * 2);
            printf("Stuffed crust selected (+$%.2f)\n", quantity * 2.00);
            break;
        default: printf("Invalid crust type selection.\n");
            return 0;
    }

    printf("Do you want extra cheese(Y/N)?");
    scanf(" %c", &extraCheese);

    if (extraCheese == 'Y' || extraCheese == 'y')
    {
        totalCost = totalCost + 1.50;
        printf("Extra cheese added (+$1.50)\n");
    }
    else if (extraCheese == 'N' || extraCheese == 'n')
    {
        totalCost = totalCost;
        printf("No extra cheese.\n");
    }   
    else
        printf("Invalid input for extra cheese selection\n");

    printf("enter the hour of the day (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14)
    {
        totalCost = (90.0/100.0)* totalCost;
        printf("Happy Hour 10%% discount applied!\n");
    }
    else
    {
        totalCost = totalCost;
    }

    printf("do you have a student ID (Y/N)?\n");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y')
    {
        totalCost = totalCost - 2.00;
        printf("Student discount applied! (-$2.00)\n");
    }
    else if (studentID == 'N' || studentID == 'n')
    {
        totalCost = totalCost;
        printf("No student discount.\n");
    }
    else
    {
        printf("Invalid input for student ID\n");
    }

    if (totalCost < 0)
            totalCost = 0.00;

    if (quantity == 3 && crustType == 3)
        printf("You get free garlic bread!");
    else 
        printf("Thank you for your order!");

    printf("\nenter the fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillmentOption);

    if (fulfillmentOption == 2)
    {
        totalCost = totalCost + 3.00;
        printf("Delivery selected (+$3.00)\n");
    }
    else if (fulfillmentOption == 1)
    {
        totalCost = totalCost;
        printf("Pickup selected.\n");
    }
    else
        printf("Invalid input for fulfillment option\n");

    printf("ORDER RECEIPT\n");
    if(size == 1) 
        printf("Pizza Size: Small\n"); 
    else if(size == 2) 
        printf("Pizza Size: Medium\n"); 
    else 
        printf("Pizza Size: Large\n");

    printf("Quantity: %d pizza(s)\n", quantity);

    if(crustType == 1) 
        printf("Crust Type: Regular\n"); 
    else if(crustType == 2) 
        printf("Crust Type: Thin\n"); 
    else 
        printf("Crust Type: Stuffed\n");

    if(extraCheese == 'Y' || extraCheese == 'y') 
        printf("Extra Cheese: Yes\n"); 
    else 
        printf("Extra Cheese: No\n");

    if(studentID == 'Y' || studentID == 'y') 
        printf("Student ID: Yes\n");
    else
        printf("Student ID: No\n");

    if(fulfillmentOption == 1)
        printf("Fulfillment: Pickup\n");
    else
        printf("Fulfillment: Delivery\n");

    if(quantity == 3 && crustType == 3)
        printf("BONUS: Free Garlic Bread included!\n");

    printf("FINAL TOTAL: $%.2f\n", totalCost);
    printf("Thank you for dining with us!\n");
    printf("Have a slice-tastic day!\n");
}
