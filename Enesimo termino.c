#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int termino(int n, int a, int b, int c) {
	if (n == 1)
		return a;
	if (n == 2)
		return b;
	if (n == 3)
		return c;
	if (n == 4){
		return a+b+c;
	}
	return termino(n-1, b, c, a+b+c);
}

int main() {
	int n, a, b, c,enes;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	enes = termino(n, a, b, c);
	printf("%d", enes); 
	return 0;
}
