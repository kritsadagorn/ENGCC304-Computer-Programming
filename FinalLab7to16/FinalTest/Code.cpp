#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Information {
	char name [100] ; 
	int  years  ; 
	int  month  ; 
	int  day  ;
}

typedef Info ;

int  importInfo (Info [] ) ; 
void sumData (Info [], int ) ;

int main(){
	Info result[100] ;
	int pp  = importInfo(result) ;
	sumData (result,pp) ;
}//end function main

int importInfo (Info result[]){
	FILE *Filea ; 
	int pp = 0 ;
	int kick ;
	char del [100] ;
	Filea = fopen( "a.txt" , "r" ) ;
	if(Filea == NULL){
		printf("File not found please check your file name.") ;
		exit (0) ;
	}//end if
	
	fscanf(Filea, "%s\t%s\t\t%s\n",del,del,del) ;
	
	for (int i = 0; i < 100 ; i++){
		if (fscanf(Filea, "%d\t%s\t\t%d-%d-%d\n",&kick,result[i].name, &result[i].years,&result[i].month,&result[i].day) != EOF ){
			pp++ ;	
		}
		else {
			break ;
		}//end if
	}//end for
	fclose (Filea) ;
	return pp ; 
}//end func importInfo

void sumData (Info result[], int pp ) {
	int age [100] ;
	int Mm	 = -99999999 ;
	char *Mmx;
	int Mn = 999999999;
	char *Mnm ;
	for(int i = 0 ; i < pp ;i++){
		age [i] = (2018-result[i].years) * 365 + (6-result[i].month) * 30 + (21-result[i].day) ;
		printf("%s %d Years, %d Months\n",result[i].name,age[i]/365,(age[i]%365)/30) ;
			
	}//end for
	for(int j = 0 ; j < pp ; j++) {
		if(age[j] > Mm){
			Mm = age [j] ;
			Mmx = result[j].name ;	
		}//end if 
		if(age[j] < Mn){
			Mn = age [j] ;
			Mnm = result[j].name ;	
		}//end if 
	}//end for
	printf("\nMax : %s[%d Years, %d Months]\n" ,Mmx,Mm/365,(Mm%365)/30) ;
	printf("Min : %s[%d Years, %d Months]\n", Mnm,Mn/365,(Mn%365)/30) ;
	
}//end void sumData
	

	
	
