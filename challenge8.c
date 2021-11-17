#include <stdio.h>

int main()
{
  char c ;
  printf("entrer un caracter : \n");
  scanf("%c",&c);
  if (c<= 'z' && c>='a'){
  printf("le caracter %c est alphabet miniscule\n",c);
  }
   else if (c<= 'Z' && c>='A'){
  printf("le caracter %c est alphabet majiscule\n",c);
   }
    else {
  printf("le caracter %c n'est pas un alphabet \n",c);
   }
   return 0;
}