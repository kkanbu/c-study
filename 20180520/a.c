#include<stdio.h>

int printmul(int n)
{
	int a;
	a = 1;

	while(a<=9)
	{
		printf("%d x %d = %d\n", n, a, n*a);
		
		a++;
	}
	return 3;
}

int main(void)
{
	int b;
	int n;

	scanf("%d", &b);
	printf("number:%d\n", b);
	b = printmul(b);
	printf("return value:%d\n", b);
return 0;
}
