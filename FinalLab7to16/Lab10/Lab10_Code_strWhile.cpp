#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
    printf( "Input  : " );
	gets(name);
	int a = strlen(name)+1;
	int i ;
	char re_N[a] ;
	i = 0 ; 
    while ( i< a-1 )
    {
        re_N[i] = name[a-2-i] ;
        i++;
    }
    
	re_N[a-1] = '\0';
	printf( "Result : %s", re_N) ;
}
