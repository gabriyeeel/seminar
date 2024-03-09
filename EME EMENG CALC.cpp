#include <cstdio>

ahhhahaahhahabasaicnaos

int main() {
    double num1, num2, result;
    char operator, choice;

    do {
        // Input
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Calculation
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                    return 1;  // Exit the program with an error code
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
                return 1;  // Exit the program with an error code
        }

        // Output
        printf("Result: %lf\n", result);

        // Ask the user if they want to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

