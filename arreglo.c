#include <stdio.h>

int main(int argc, char *argv[]) {
	{
		int j, *array, i, suma = 0;
		scanf("%d", &j);
		array = (int*) malloc(j*sizeof(int));
		for(i = 0; i < j; i++) {
			scanf("%d", array + i);
		}
		for(i = 0; i < j; i++) {
			suma+= *(array+ i);
		}
		printf("%d\n", suma);
		free(array);
		return 0;
	}
	return 0;
}

