#include <stdio.h>
int main() {
   int ch;
   scanf("%c",&ch);
   if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("digit");
    }    
    else
    {
        printf("Special Character");
    }
    return 0;
}