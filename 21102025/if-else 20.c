#include <stdio.h>
int main() {
   int experience,bonus;
   scanf("%d",&experience);
   if(experience>=5)
   {
    bonus=5000;
   }
   else
   {
    bonus=2000;
   }
   printf("%d",bonus); 
    return 0;
}