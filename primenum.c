#include <stdio.h>
int main() {
    int n, i, isPrime;

    for (n = 2; n <= 300; n++) {
        isPrime = 1;

        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d\n", n);
        }
    }

    return 0;
}

