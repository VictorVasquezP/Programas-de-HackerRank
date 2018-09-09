#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int num,*array,i;
	scanf("%d",&num);
	array=(int*)malloc(num*sizeof(int));
	for(i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	for(i=num-1;i>=0;i--){
		printf("%d",array[i]);
	}
	return 0;
}

