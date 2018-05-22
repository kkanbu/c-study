#include <stdio.h>
int sum(int k)
{
	int i;
	int j;
	j = 0;
	for(i = 1;  i <= k; i++)
	{
		j = i + j;
	}
return j;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	a = sum(a);
	printf("value: %d\n", a);
return 0;
}	 
