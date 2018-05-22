#include <stdio.h>
int main(void)
{
	int i;
	int f;
	int sum;
	f = 1;
	printf("Enter hyun ik: ");
	scanf("%d", &i);

	while(f <= i)
	{
		sum = f + sum;
		f++;
		printf("sum: %d\n", sum);
	}

	printf("sum is: %d\n", sum);

	return 0;
}
