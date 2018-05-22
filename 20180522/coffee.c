#include<stdio.h>

int acker(int m, int n){


	if (m==0)
		return (n+1);
	else if (m>0&&n==0)
		return acker(m-1,1);
	else if (m>0&&n>0)
		return acker(m-1,acker(m,n-1));
}

int main(void){

	int x;
	int y;
	scanf("%d %d", &x, &y);
	printf("acker(%d,%d) is %d", x, y, acker(x, y));

return 0;
}


	
