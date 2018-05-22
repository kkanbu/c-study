#include <stdio.h>
int main(void)
{
	int i;
	int f;
	f=1;

	printf("Enter gugudan: ");
	scanf("%d", &i);
	while(f < 10)
	{
		printf("%d*%d=%d\n", i,f, i*f  );
		f++;
	}

	return 0;
}
