#include <stdio.h>

int main() {
	
	int years;
	
	printf("Input years :  ");
	scanf("%d",&years);

	if(years%100==0){
		if(years%400==0)
			printf("29 days");
		else
			printf("28 days");
	}
	else{
		if(years%4==0)
			printf("29 days");
		else
			printf("28 days");
		}	
}
