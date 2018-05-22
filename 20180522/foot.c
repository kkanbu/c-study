#include <stdio.h>

int fact(int n){
	if(n == 1)
		return 1;
	else
		return n * fact(n-1);
}

int main(void){

	int x;
	scanf("%d", &x);
	if(x == 10){
		printf("It is ten\n");
	}
	else if(x == 5){
		printf("it is five\n");
	}
	else{
		printf("it is not ten nor five\n");
	}


	return 0;
}
