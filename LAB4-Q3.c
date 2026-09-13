#include <stdio.h>

int main()
{
    int quantity;
    printf("input customer's desired pizza quantity: ");
    scanf("%d", &quantity);

    switch (quantity)
    {
        case 1: printf("Your total is $8");
            break;
        case 2: printf("Your total is $15");
            break;
        case 3: printf("Your total is $21");
            break;
        default: printf("not applicable");
    }

}
