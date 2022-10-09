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
    i = 0 ;
    while ( i < size )
    {
    	printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array_N[i]) ; 
        i++ ;
    }
    j = 0 ;
    while (  j < size  )
    {
        k = 0 ;
        while (  k < size)
        {
            if ( array_N[j] == array_N[k] )
                {
                    N++ ;
                } 
            k++;
        }
        if (N == 1) 
        {
            unique[ locat ] = array_N[j] ;
            locat++ ;
        }
        N = 0 ;
        j++ ;
    }
    printf( "Unique =" ) ;
    m = 0 ;
    while (m < locat)
    {
        printf( " %d", unique[m] ); 
        m++;
    }
}
