#include <stdio.h>
int main() {
    int costprice,sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if(costprice < sellingprice)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    
    return 0;
}