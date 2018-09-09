#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	long int j, i, suma = 0;
	scanf("%ld", &j);
	long int array[j];
	for(i =0; i < j; i++) {
		scanf("%ld",&array[i]);
		suma+=array[i];
	}
	printf("%ld\n",suma);
return 0;
}
