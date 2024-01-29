#include <stdio.h>

int main() {
    int N;
    int note2000, note1000, note500, note100, note50, note20, note10;
    note2000 = note1000 = note500 = note100 = note50 = note20 = note10 = 0; // Initializing all note counts to 0

    // Input the amount
    printf("Enter the amount (Rs. N): ");
    scanf("%d", &N);

    // Calculate the number of notes for each denomination
    if(N >= 2000) {
        note2000 = N / 2000;
        N = N % 2000;
    }
    if(N >= 1000) {
        note1000 = N / 1000;
        N = N % 1000;
    }
    if(N >= 500) {
        note500 = N / 500;
        N = N % 500;
    }
    if(N >= 100) {
        note100 = N / 100;
        N = N % 100;
    }
    if(N >= 50) {
        note50 = N / 50;
        N = N % 50;
    }
    if(N >= 20) {
        note20 = N / 20;
        N = N % 20;
    }
    if(N >= 10) {
        note10 = N / 10;
        N = N % 10;
    }

    // Display the results
    printf("Number of notes needed to represent the given amount: \n");
    if(note2000) printf("Rs. 2000: %d notes\n", note2000);
    if(note1000) printf("Rs. 1000: %d notes\n", note1000);
    if(note500) printf("Rs. 500: %d notes\n", note500);
    if(note100) printf("Rs. 100: %d notes\n", note100);
    if(note50) printf("Rs. 50: %d notes\n", note50);
    if(note20) printf("Rs. 20: %d notes\n", note20);
    if(note10) printf("Rs. 10: %d notes\n", note10);
    printf("Total notes: %d\n", note2000 + note1000 + note500 + note100 + note50 + note20 + note10);

    return 0;
}

