#include<stdio.h>
int main(){
    int num ; 
    //���������鹷��йѺ���֧0
    int j ; 
    //��ҷ����㹡���礤�Ҩӹǹ੾��
    int rep = 0 ; 
    //�ӹǹ���駷����num/���j��ŧ���
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;
    while( num >= 2 )
    {
        j = num ;
        while ( j >= 2 )
        {
            if ( num%j == 0 )
            {
                rep++ ;
            }
            j-- ;
        }
        if ( rep <= 1 )
        {
            printf( "%d ", num ) ;
        }
        rep = 0 ;
        num-- ;
    }
}
