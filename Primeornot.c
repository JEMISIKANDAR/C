#include <stdio.h>

// Function declarations
int factorial(int n);
int isPrime(int n);
void oddOrEven(int n);

int main() {
    int choice, num;

    while (1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");

        // User input for choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Factorial of a number
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is: %d\n", num, factorial(num));
                break;

            case 2:
                // Prime or not
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 3:
                // Odd or even
                printf("Enter a number: ");
                scanf("%d", &num);
                oddOrEven(num);
                break;

            case 4:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check whether a number is prime or not
int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

// Function to check whether a number is odd or even
void oddOrEven(int n) {
    if (n % 2 == 0)
        printf("%d is an even number.\n", n);
    else
        printf("%d is an odd number.\n", n);
}

