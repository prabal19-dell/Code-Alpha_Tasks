#include <stdio.h>

int main()
{
    float num1, num2;
    char choice;

    do
    {
        printf("\nEnter first number: ");
        ;scanf("%f", &num1);

        printf("Enter second number: ");2
        ;scanf("%f", &num2);

        printf("\n----- Results -----\n");

        // Addition
        printf("Addition = %.2f\n", num1 + num2);

        // Subtraction
        printf("Subtraction = %.2f\n", num1 - num2);

        // Multiplication
        printf("Multiplication = %.2f\n", num1 * num2);

        // Division
        if(num2 != 0)
            printf("Division = %.2f\n", num1 / num2);
        else
            printf("Division = Not Possible (Division by Zero)\n");

        printf("\nDo you want to enter new numbers? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("\nProgram Ended.\n");

    return 0;
}