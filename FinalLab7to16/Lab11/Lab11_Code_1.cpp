#include<stdio.h>

int sum( int );

int main() {
    int number1 = 10 ;
    int number2 = 20 ;

    sum(number1,number2);
}// end function

int sum( int number1, int number2 ) {
    int sum = number1 + number2 ;
    printf( "%d" , sum ) ; 
}// end function
