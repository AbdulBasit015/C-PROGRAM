#include <stdio.h>

int main() {
    int amount;
    int note2000 = 0, note500 = 0, note200 = 0, note100 = 0;
    int note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;

    // Input amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Count notes
    if (amount >= 2000) {
        note2000 = amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500) {
        note500 = amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        note200 = amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        note100 = amount / 100;
        amount %= 100;
    }
    if (amount >= 50) {
        note50 = amount / 50;
        amount %= 50;
    }
    if (amount >= 20) {
        note20 = amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        note10 = amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        note5 = amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        note2 = amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        note1 = amount;
    }

    // Output results
    printf("Currency Note Count:\n");
    if (note2000) printf("₹2000: %d\n", note2000);
    if (note500)  printf("₹500 : %d\n", note500);
    if (note200)  printf("₹200 : %d\n", note200);
    if (note100)  printf("₹100 : %d\n", note100);
    if (note50)   printf("₹50  : %d\n", note50);
    if (note20)   printf("₹20  : %d\n", note20);
    if (note10)   printf("₹10  : %d\n", note10);
    if (note5)    printf("₹5   : %d\n", note5);
    if (note2)    printf("₹2   : %d\n", note2);
    if (note1)    printf("₹1   : %d\n", note1);

    return 0;
}
