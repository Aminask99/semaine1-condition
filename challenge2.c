#include <stdio.h>


int main ()
{

int nombre ;

  printf("entrer le nombre \n");
  scanf("%d",&nombre);

  if (nombre%2==0) {
    printf("paire");
  }
  else {
   printf("impaire");
}
   return 0 ;
   }