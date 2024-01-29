#include <stdio.h>
int main() {
    int num, temp;
    int sum=0;

    // Input the number
    printf("Enter a five-digit number: \n");
    scanf("%d", &num);

    // Take Last Digit and Calculate sum of digits
    while (num > 0) {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);
    return 0;
}

