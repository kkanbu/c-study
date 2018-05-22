#include<stdio.h>

int sc(int n){

	if (95<=n&&n<=100)
		printf("score is A+\n");
	else if (90<=n&&n<95)
		printf("score is A\n");
	else if (85<=n&&n<=89)
		printf("score is B+\n");
	else if (80<=n&&n<85)
		printf("score is B\n");	
	else if (75<=n&&n<80)
		printf("score is C+\n");
	else if (70<=n&&n<75)
		printf("score is C\n");	
	else if (65<=n&&n<70)
		printf("score is D+\n");
	else if (60<=n&&n<65)
		printf("score is D\n");
	else if (0<=n&&n<60)
		printf("score is F\n");	

return 3;
}

int main(void){

	int n;
	scanf("%d", &n);
	n = sc(n);
return 0;
}
