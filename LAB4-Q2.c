#include <stdio.h>
int main()
{
    int number;
    printf("\n how many pizzas do you want: ");
    scanf("%d", &number);

    if (number>1)
        printf("\n check our multi-pizza deals");
    else 
        printf("\n your total is $8");
}
