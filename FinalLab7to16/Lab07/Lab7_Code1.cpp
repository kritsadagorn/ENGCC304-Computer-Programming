#include<stdio.h>
int main(){
    int num ; 
    //ค่าเริ่มต้นที่จะนับจนถึง0
    int j ; 
    //ค่าที่ใช้ในการเช็คค่าจำนวนเฉพาะ
    int rep = 0 ; 
    //จำนวนครั้งที่ค่าnum/ค่าjได้ลงตัว
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
