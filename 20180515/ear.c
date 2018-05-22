#include <stdio.h>

int printstar(int x){
	int i, j;
	for(i = 0; i < x; i++){
		for(j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return -1;
}

int main(void)
{
	int i;
	int f;

	int k = printstar(3);
	printf("return val: %d\n", k);

	return 0;
}

