#include <stdio.h>
int main() {
    int rows, space, asterisk;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the asterisks
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (asterisk = 1; asterisk <= 2 * i - 1; asterisk++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

