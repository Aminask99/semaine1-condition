#include <stdio.h>
int main()
{
   int x , y , somme ;
   printf("entrer x");
   scanf("%d",&x);
   printf("entrer y");
   scanf("%d",&y);
   somme=x+y ;
   if (x == y){
       printf("%d+%d*3",x,y);
   }
   else if (x != y){
       printf("erer");
   }
   return 0;
  }