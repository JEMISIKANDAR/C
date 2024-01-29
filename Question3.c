#include <stdio.h>
int main() {
    int n_amount;
    int hazar_note, panso_note, so_note, pachas_note, bes_note, das_note;

    printf("Enter the amount in Rs.: ");
    scanf("%d", &n_amount);

    hazar_note = n_amount / 1000;
    n_amount = n_amount % 1000;

    panso_note = n_amount / 500;
    n_amount = n_amount % 500;

    so_note = n_amount / 100;
    n_amount = n_amount % 100;

    pachas_note = n_amount / 50;
    n_amount = n_amount % 50;

    bes_note = n_amount / 20;
    n_amount = n_amount % 20;

    das_note = n_amount / 10;

    printf("\nMinimum number of notes required:\n");
    if(hazar_note > 0) printf("Rs. 1000 : %d notes\n", hazar_note);
    if(panso_note > 0) printf("Rs. 500 : %d notes\n", panso_note);
    if(so_note > 0) printf("Rs. 100 : %d notes\n", so_note);
    if(pachas_note > 0) printf("Rs. 50 : %d notes\n", pachas_note);
    if(bes_note > 0) printf("Rs. 20 : %d notes\n", bes_note);
    if(das_note > 0) printf("Rs. 10 : %d notes\n", das_note);

    printf("\nTotal notes required: %d\n", hazar_note + panso_note + so_note + pachas_note + bes_note + das_note);

    return 0;
}

