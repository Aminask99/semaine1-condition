 #include <stdio.h>
 #include <stdlib.h> 
 int main()
 {

char mot[20] , rmot[20];
 

  printf("entrer mot");
    scanf("%s",&mot);
  strcpy(rmot,mot);
  strrev(rmot);
  int A=strcmp(mot,rmot);
  if(A==0){
      printf("le mot %s est un palindrome\n",mot);
}
  else if {
      printf("le mot %s n'est pas un palindrome",mot);
  }
 

  return 0;
}