#include <stdio.h>

int factorial(int n)
{
	int a;
	int b;
	a = 1;
	b = 1;
	while(a<=n){
		
		b = a*b;
		a++;
	}

 
return b;
}

int main(void)
{
	int c;
	int b;
	
	scanf("%d", &c);
	printf("%d!=", c);
		
	c = factorial(c);
		
	printf("%d\n", c); 
 

return 0;
}
		
