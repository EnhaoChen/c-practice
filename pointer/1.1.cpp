#include <stdio.h>

int main() {
	long double a[10];
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(a)=%ld\n", sizeof(a));
	int i = 0;
	int p;
//	p = (int)&i;
	printf("%x\n", &i);
	printf("%p\n", &i);
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(&i));
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	return 0;
}
