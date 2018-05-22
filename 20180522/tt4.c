#include<stdio.h>

int fuck(int x){

	int a;
	int b;
	
	a=1;
	if(x==0)
		return 1;
	else if(x>0)
		return 2*fuck(x-1);
}




int main(void){

	
	int x;
	int y;
	scanf("%d", &y);
	
	for(x=1; fuck(x)<=y; x++){
	
	
} printf("maximum is %d\n", x-1);

return 0;
}
