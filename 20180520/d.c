#include <stdio.h>

int fibo(int n)
{	
	int a;
	int b;
	int c;
	a=1;
	b=1;
	c=1;
		while(n>2){
			a = b;
			b = c;
			c = a + b;			
			n--;
	}	
	
return c;
}

int main(void)
{

	int n;
	scanf("%d", &n);
	printf("f(%d)=", n);
	n = fibo(n);
	printf("%d\n", n);
	
	
return 0;

}

