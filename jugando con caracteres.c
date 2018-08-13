#include <stdio.h>

int main() {
	char ch;
	char s[20], sen[100];
	scanf("%c", &ch);
	scanf("%s", s);
	scanf("\n");
	gets(sen);
	printf("%c\n%s\n%s\n", ch,s,sen);
	return 0;
}
