#include <stdio.h>
 #include <stdlib.h> 
 int main()
 {

float moyenne ;
  printf("tapy la moyenne\n");
  scanf("%f",&moyenne);
   if (moyenne>=10 && moyenne<=12){
       printf("passable");
   }
    else if (moyenne>=12 && moyenne<=14){
       printf("assez bien");
   }
    else if (moyenne>=14 && moyenne<=16){
       printf("bien");
   }
    else {
       printf("tres bien");
   }
   return 0;
 }