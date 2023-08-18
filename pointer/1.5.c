//函数的传送值,传引用
#include <stdio.h>
//函数的形参实参:
/*
void addone(int a)
{
	a=a+1;
}
int main() {
	int a;
	a=10;
	addone(a);
	printf("a=%d\n",a);
	return 0;
}
*/
#include <stdio.h>

void addone(int *a) {
	*a = (*a) + 1;
}

int main() {
	int a;
	a = 10;
	addone(&a);
	printf("a=%d\n", a);
	return 0;
}


