 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main (int argc, char *argv[])
{


	float a, b, c, x1, x2, x, r;
	printf("entrer la valeur de A : ");
	scanf("%d", &a);
    printf("entrer la valeur de B : ");
	scanf("%d", &b);
	printf("entrer la valeur de C : ");
	scanf("%d", &c);
   
	r = pow(b, 2) - 4 * a * c;
	printf(" resultat  : %.f", r);
	if (r < 0)
	{
		printf("pas de solution \n");
	}
	else if (r > 0)
	{
		x1 = (-b - sqrt(r)) / (2 * a);
		x2 = (-b + sqrt(r)) / (2 * a);
		printf("x1:%d", x1);
		printf("x2:%d", x2);
	}
	else
	{
		x = (-b) / (2 * a);
		printf("SOLUTION : %d", x);
	}
   
    return 0;
}