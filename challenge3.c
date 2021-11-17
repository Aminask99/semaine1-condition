#include <stdio.h>
int main ()
{
int a , b , c ;


   printf("entrer l nombre a");
   scanf("%d",&a);
   printf("entrer l nombre b");
   scanf("%d",&b);
  
   
   if (a != b || a < b ) {
       printf(" A=%d\n B=%d\n",b,a);
  }
  else if (a==b){
      printf("les valeur identique");
  }
  return 0;
  }