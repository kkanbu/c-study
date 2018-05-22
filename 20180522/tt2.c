#include<stdio.h>

int sc(int n){

	int grade;
	int plus;

	grade = n / 10;
	plus = n % 10 / 5;

	printf("Your grade is: ");
	if(n == 100){
		printf("A+\n");
		return 1;
	}
	else if(n < 60){
		printf("F\n");
		return 2;
	}
	else if(grade == 9)
		printf("A");
	else if(grade == 8)
		printf("B");
	else if(grade == 7)
		printf("C");
	else if(grade == 6)
		printf("D");

	if(plus)
		printf("+");

	printf("\n");

	return 3;
}

int main(void){

	int n;
	scanf("%d", &n);
	n = sc(n);
return 0;
}
