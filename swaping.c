#include <stdio.h>

// Function to swap the values of two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Input from the user
    printf("Enter the first integer (a): ");
    scanf("%d", &a);

    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    // Call the swap function to interchange the values
    swap(&a, &b);

    // Display the swapped values
    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}

