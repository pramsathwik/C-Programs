#include <stdio.h>
int main() {
    int bill,discount;
    scanf("%d",&bill);
    if(bill>=5000)
    {
        discount=(bill/100)*10;
        bill=bill-discount;
        printf("%d",bill);
    }
    else
    {
        discount=(bill/100)*5;
        bill=bill-discount;
        printf("%d",bill);
    }
    
    return 0;
}