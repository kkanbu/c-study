#include <stdio.h>

int fibo(int n){

	if( n <= 0){
		return -1;
	}
	
	if (n<=2)
		return 1;
	else 
		return fibo(n-1) + fibo(n-2);
	

}



int main (void)
{
	int n;
	scanf("%d", &n);
	printf("f(%d) is", n);
	
	n = fibo(n);
	printf("%d\n", n);

return 0;
}
