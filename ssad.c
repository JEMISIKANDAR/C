#include <stdio.h>

int main() {
    int number;
    int count = 0; // Number of positive integers entered
    int sum = 0;   // Sum of all numbers entered
    int max = -1;  // Maximum number entered (starting at -1 as a flag)
    int min = -1;  // Minimum number entered (starting at -1 as a flag)

    while(1) {
        printf("Enter a positive integer (or -1 to quit): ");
        scanf("%d", &number);

        // Check for the termination condition
        if (number == -1) {
            break; 
        }

        // Check if the input is a negative number (other than -1)
        if (number < 0) {
            printf("Please enter a positive integer or -1 to quit.\n");
            continue; 
        }

        sum += number;
        count++;

        // Check and update the max and min values
        if (max == -1 || number > max) {
            max = number;
        }
        if (min == -1 || number < min) {
            min = number;
        }
    }

    // Display the results after exiting the loop
    if (count > 0) {
        double average = (double)sum / count;
        printf("\nCount of numbers: %d\n", count);
        printf("Maximum number: %d\n", max);
        printf("Minimum number: %d\n", min);
        printf("Average: %.2lf\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}

