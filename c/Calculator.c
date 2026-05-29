#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMenu() {
    printf("\n");
    printf("========================================\n");
    printf("        PREMIUM CALCULATOR v1.0         \n");
    printf("========================================\n");
    printf("  1. Addition       (+)\n");
    printf("  2. Subtraction    (-)\n");
    printf("  3. Multiplication (*)\n");
    printf("  4. Division       (/)\n");
    printf("  5. Modulus        (%%)\n");
    printf("  6. Power          (x^y)\n");
    printf("  7. Square Root    (sqrt)\n");
    printf("  8. Exit\n");
    printf("========================================\n");
    printf("  Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;

    printf("\n  Welcome to Premium Calculator!\n");

    while (1) {
        printMenu();
        scanf("%d", &choice);

        if (choice == 8) {
            printf("\n  Thank you for using Premium Calculator!\n");
            printf("  Goodbye! 👋\n\n");
            break;
        }

        if (choice == 7) {
            printf("  Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("  Error: Cannot find square root of negative number!\n");
                continue;
            }
            result = sqrt(num1);
            printf("  Result: sqrt(%.2lf) = %.4lf\n", num1, result);
            continue;
        }

        if (choice < 1 || choice > 7) {
            printf("  Invalid choice! Please enter between 1-8.\n");
            continue;
        }

        printf("  Enter first number:  ");
        scanf("%lf", &num1);
        printf("  Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("  Result: %.2lf + %.2lf = %.4lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("  Result: %.2lf - %.2lf = %.4lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("  Result: %.2lf * %.2lf = %.4lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("  Error: Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("  Result: %.2lf / %.2lf = %.4lf\n", num1, num2, result);
                }
                break;
            case 5:
                if (num2 == 0) {
                    printf("  Error: Modulus by zero is not allowed!\n");
                } else {
                    result = fmod(num1, num2);
                    printf("  Result: %.2lf %% %.2lf = %.4lf\n", num1, num2, result);
                }
                break;
            case 6:
                result = pow(num1, num2);
                printf("  Result: %.2lf ^ %.2lf = %.4lf\n", num1, num2, result);
                break;
        }
    }

    return 0;
}