#include <stdio.h>

int main() {
    int num, temp, rev = 0;
    scanf("%d", &num);

    temp = num;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}