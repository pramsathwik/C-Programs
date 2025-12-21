#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=35 && a<=100)
    {
        printf("pass");
    }
    else if(a>=30 && a<=34)
    {
        printf("Grace pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}