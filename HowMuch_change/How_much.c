#include <stdio.h>

int main (void) {
    int juice, milk, payment, change;
    double tax;

    juice = 198;
    milk = 138;
    tax = 1.05;

    payment = (int)((juice + milk * 2) * tax);
    change = 1000 - payment;

    printf("%d円\n", change);
    return 0;
}