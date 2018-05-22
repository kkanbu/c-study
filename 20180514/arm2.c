#include <stdio.h>
int main(void)
{
	int i;
	int f;

	printf("Enter gugudan: ");
	scanf("%d", &i);
	for(f = 1; f < 10; f++){
		printf("%d*%d=%d\n", i, f, i*f);
	}

	return 0;
}
