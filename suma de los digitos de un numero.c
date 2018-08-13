#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,suma=0;
	scanf("%d",&n);
	while(n>0){
		suma=suma+n%10;
		n=n/10;
	}
	printf("%d\n",suma);
	return 0;
}

