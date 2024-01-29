#include <stdio.h>

int main() {
    int num, is_prime = 1;  // Assuming the number is prime initially

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        is_prime = 0;  // Not prime if less than 2
    } else {
        // Check for divisibility from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  // Not prime if divisible by i
                break;
            }
        }
    }

    // Output the result
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

