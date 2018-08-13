#include <stdio.h>
int fun(int a, int b, int c, int d) {
	if(a>b){
		if(a>c){
		if(a>d){
		return a;
		}
		else{
			return d;
		}
		}
		else{
			if(c>d){
			return c;
			}
		else {
			return d;
		}
		}
	}
	else{
		if(b>c){
		if(b>d){
		return b;
		}
		else{
			return d;
		}
		}
	else{
		if(c>d){
		return c;
	}
		else{
			return d;
		}
	}
	}
}

int main() {
	int a, b, c, d, ans;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	ans = fun(a, b, c, d);
	printf("%d", ans);
	
	return 0;
}
