#include <stdio.h>
int main() {
    int salary,tax;
    scanf("%d",&salary);
    if(salary>=50000)
    {
        tax=(salary/100)*10;
        salary=salary-tax;
        printf("%d",salary);     
    }
    else
    {
        printf("No tax");
    }
    return 0;
}