#include <stdio.h>

int main(void){
	int i;
	i = 0;

	/*while(i < 10){
		printf("Current number: %d\n", i);
		i++;
	}*/

/*	for(i = 0; i < 10; i++){
		printf("Current number: %d\n", i);
	} */
	i = 10;
	do{
		printf("Current number: %d\n", i);
		i++;
	}while(i < 10);

	return 0;
 }
