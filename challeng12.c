#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   float xa, xb, xc, ya, yb, yc, xA,xAB ,yAC ,yAB ,resultat ;
   printf("entrer xa");
   scanf("%f",&xa);
   printf("entrer ya");
   scanf("%f",&ya);
   printf("entrer xb");
   scanf("%f",&xb);
   printf("entrer yb");
   scanf("%f",&yb);
   printf("entrer xc");
   scanf("%f",&xc);
   printf("entrer yc");
   scanf("%f",&yc);
   
   xAC = (xc - xa );
   yAC = (yc - ya );
   xAB = (xb - xa );
   yAB = (yb - ya );
   resultat = ((xAC * yAB) - (xAB * yAC));

   if (resultat==0) {
       printf(" appartient au segement [AB]");
   }
   else  {
       printf(" appartient pas au segement [AB]");
       
   }
   
    return 0;
}
