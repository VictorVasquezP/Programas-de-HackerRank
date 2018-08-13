#include <stdio.h>
#include<math.h>
void suma (int a, int b, int *resultado1,int *resultado2)  
{
	*resultado1 = a + b; 
	*resultado2=fabs(a-b);
}
int main ()
{
	int a, b, resultado1=0,resultado2=0;
	scanf("%d", &a);
	scanf("%d", &b);
	suma(a, b, &resultado1,&resultado2);
	
	printf("%d\n", resultado1);
	printf("%d\n", resultado2);
	
	return 0;
}
