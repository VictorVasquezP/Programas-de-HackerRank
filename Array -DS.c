#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int *vec,n,i;
	scanf("%d",&n);
	vec=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&vec[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",vec[i]);
	}
	return 0;
}

