#include <stdio.h>

int main(){
	
	int years,rs;
	
	printf("Input years :  ");
	scanf("%d",&years);
	
	rs = years % 400 == 0 || years % 100 == 0 || years % 4 == 0;
	
	switch (rs){
		case 0:
			printf("29 days");
			break;
		case 1:
			printf("28 days");
			break;
		default:
			printf("28 days");
			break;
	}
}
