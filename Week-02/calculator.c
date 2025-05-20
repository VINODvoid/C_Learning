#include <stdio.h>
#include <stdbool.h>

int main() {
    float num1, num2, result;
    char choice = 'y';
    char operand;

    while (choice == 'y' || choice == 'Y') {
        printf("Enter the first number:\n");
        scanf("%f", &num1);

        printf("Enter the second number:\n");
        scanf("%f", &num2);

        printf("Choose an operator (+, -, *, /):\n");
        scanf(" %c", &operand); 
        switch (operand) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    continue; 
                }
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid operator!\n");
                break;
        }

        printf("Do you want to continue calculations? (y/n): ");
        scanf(" %c", &choice); 
    }

    printf("Happy Serving\n");
    return 0;
}
