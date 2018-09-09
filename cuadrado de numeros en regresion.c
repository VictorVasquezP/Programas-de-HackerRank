#include <stdio.h>

int main() 
{
	int n,i=0,j=0,iaux=0,jaux=0;
	scanf("%d", &n);
	for(i=0;i<(2*n)-1;i++){
		for(j=0;j<(2*n)-1;j++){
			if(j<n-1)
			{
				jaux=j;
			}
			if(j>=n-1){
				jaux=(2*n-2)-j;
			}
			if(i<n-1){
				iaux=i;
			}
			if(i>=n-1){
				iaux=(2*n-2)-i;
			}
			if(iaux<jaux){
				printf("%i ",n-iaux);
			}
			if(iaux>=jaux){
				printf("%i ",n-jaux);
			}
		}
		printf("\n");
	}
	return 0;
}
