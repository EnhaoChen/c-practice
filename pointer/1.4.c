// 指向指针的指针
#include <stdio.h>

int main() {
	int x = 5;
	int *p = &x;
	*p = 6;
	int **q = &p;
	int ***r = &q;
	**q = *p + 2;


	return 0;
}
