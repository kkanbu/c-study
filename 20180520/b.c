#include <stdio.h>

void printmul(void)
{
	int a;
	int c;
	a = 1;
	c = 1;
	
	while(a<=9){
		printf("%d x %d = %d\n", c, a, c*a);
		a++;
		
		while(a==10&&c<9){
	
		c++;
		a = 1;
		}
	}
}


void printmul2(void){
	int i, j;

	i = 1;
	while(i < 10){
		j = 1;
		while(j < 10){
			printf("%d x %d = %d\n", i, j, i*j);
			j++;
		}
		i++;
	}
}

int main(void)
{

printmul2();



	
}
			
		 
