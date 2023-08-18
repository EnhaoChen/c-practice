//指针与数组
//进行数组索引,*(p+1)


//数组作为函数参数

//未使用指针的基础例子:
/*
#include <stdio.h>

int SumOfElements(int A[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + A[i];
	}
	return sum;
}

int main()
{
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);
	printf("%d", total);
	return 0;
}
*/

//使用指针
//传输数组给函数时,传输的确实是数组第一个数的指针
//所以在函数内无法使用size = sizeof(A) / sizeof(A[0])也就是使用数组

#include <stdio.h>

int SumOfElements(int *A, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + A[i];
	}
	return sum;
}

int main()
{
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);
	printf("%d", total);

	return 0;
}