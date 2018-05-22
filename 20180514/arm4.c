#include <stdio.h>
int main(void)
{
	int i;
	int f;
	int sum;
	printf("Enter hyun ik: ");
	scanf("%d", &i);

	for(f = 1; f <= i; f++)
	{
		sum = f + sum;
		
		printf("sum: %d\n", sum);
	}

	printf("sum is: %d\n", sum);

	return 0;
}
