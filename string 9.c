#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[50];
    fgets(s,50,stdin);
    if(s[0]>='a' && s[0]<='z')
    s[0]=s[0]-32;
    printf("%s",s);
    return 0;
}