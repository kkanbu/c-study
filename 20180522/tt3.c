#include<stdio.h>

int time(int n){

	int hour;
	int min;
	int sec;

	hour = n / 3600;
	min  = (n % 3600) / 60;
	sec = (n % 3600) % 60;

	printf("%dh %dm %ds\n", hour, min, sec);

return 1;
}

int main(void){

	int n;
	scanf("%d", &n);
	n = time(n);

return 0;
}
