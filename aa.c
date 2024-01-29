#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    result = (a * a) + (b * b) + (2 * a * b);

    printf("Result: %d\n", result);

    return 0;
}
