#include <stdio.h>
int main() {
    int a, b, choice;
    scanf("%d %d", &a, &b);
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Sum = %d", a + b);
            break;
        case 2:
            printf("Difference = %d", a - b);
            break;
        case 3:
            printf("Product = %d", a * b);
            break;
        case 4:
            printf("Quotient = %d", a / b);
            break;
        default:
            printf("Invalid operation");
    }
    return 0;
}