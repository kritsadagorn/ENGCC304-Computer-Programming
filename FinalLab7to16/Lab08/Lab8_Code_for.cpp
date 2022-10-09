#include<stdio.h>
int main(){
    int size;
    int locat = 0;
    int i, j, k, m; 
    int N = 0;
    printf( "Input Array Size : " );
    scanf( "%d", &size ) ;
    int array_N[ size ] ;
    int unique[ size ] ;
    for (i = 0 ; i < size ; i++)
    {
    	printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array_N[i]) ;
    }
    for ( j = 0 ; j < size ; j++)
    {
        for ( k = 0; k < size; k++)
        {
            if ( array_N[j] == array_N[k] )
                {
                    N++ ;
                }
        }
        if (N == 1) 
        {
            unique[ locat ] = array_N[j] ;
            locat++ ;
        }
        N = 0 ;
    }
    printf( "Unique =" ) ;
    for ( m = 0; m < locat; m++)
    {
        printf( " %d", unique[m] );
    }
}
