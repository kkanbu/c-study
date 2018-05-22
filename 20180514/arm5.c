#include <stdio.h>
int main (void)
{
	int i;
	int f;
	i = 10;
	for(i = 1; i <= 10; i++)
	{

		for(f = 0; f < i; f++ )
		{
			printf("*");
		
		}
		printf("\n");
 	}
	return 0;
}


