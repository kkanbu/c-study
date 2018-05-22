#include <stdio.h>

int printstar(void){
	int i, j;
	for(i = 0; i < 10; i++){
		for(j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main(void)
{
	int i;
	int f;
	
	for(i = 0; i < 4; i++)
	{
		for(f = 0; f <= i; f++)
		{ 
			printf("*");
		}
	printf("\n");
	}

	for(i = 0; i < 3; i++)
	{
		for(f = 2; f >= i; f--)
		{
			printf("*");
		}
	printf("\n");
	}

	int k = printstar();
	printf("return val: %d\n", k);
		return 0;
}

