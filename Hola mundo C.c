#include <stdio.h>

int main(int argc, char *argv[]) {
	char s[100];
	gets(s);
	printf("Hello, World!\n%s\n", s);
	return 0;
}

