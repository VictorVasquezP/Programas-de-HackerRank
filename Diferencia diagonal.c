#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int n,f,c,i,j,aux=0,aux2=0,aux3;
	scanf("%d",&n);
	f=n;
	c=n;
	int matriz[f][c];
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<f;i++){
		aux=aux+matriz[i][i];
		aux2=aux2+matriz[i][2-i];
	}
	aux3=fabs(aux-aux2);
	printf("%d",aux3);
	return 0;
}

