#include <stdio.h>

int main() {
    int num1, num2, remainder;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num2 == 0) {
        printf("Error! Division by zero.\n");
    }

    remainder = num1 % num2;

    printf("The remainder of %d divided by %d is: %d\n", num1, num2, remainder);

    return 0;
}
