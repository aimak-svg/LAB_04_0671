#include <stdio.h>
int main()
{
    char studentID;
    float totalBill;
    printf("enter the total bill amount: ");
    scanf("%f", &totalBill);
   
    printf("do you have a student ID (Y/N)?\n");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y')
        totalBill = totalBill - 2.00;
    else if (studentID == 'N' || studentID == 'n')
        totalBill = totalBill;
    else
        printf("Invalid input for student ID\n");

    if (totalBill < 0)
            totalBill = 0.00;
            
    printf("The total bill amount is: %.2f", totalBill);
}