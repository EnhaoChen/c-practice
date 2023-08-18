#include <stdio.h>

int main() {
	int a = 1025;
	int *p;
	p = &a;
	printf("%d\n", *p);
//	char *b;
//	b = (char *)  a;
//	printf("%d\n", sizeof(char));
//	printf("%d\n", *b);
//	printf("%d\n", b);
	int **p1;
	p1 = &p;
	printf("%d\n", *p1);
	printf("%d\n", **p1);
	//printf("%d\n", sizeof(int (*));
}
