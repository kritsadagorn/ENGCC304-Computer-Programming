#include<stdio.h>

char DetectOperator( char[] );
int GetResult( int , int );

int main() {
    char operator[100] ;

    printf( "Input : " ) ;
    scanf( "%d %c %d" , &operator[0] , &operator[1] , &operator[2] ) ;

    DetectOperator( operator ) ;
    return 0 ;
}// end function

char DetectOperator( char operator[] ) {
    int number1 = operator[0] ;
    int number2 = operator[2] ;
    int answer = 0 ;

    switch (operator[1]) {
        case '+' :
            answer = number1 + number2 ;
            GetResult( number1, answer ) ;
            break;
        case '-' :
            answer = number1 - number2 ;
            GetResult( number1, answer ) ;
            break;
        case '*' :
            answer = number1 * number2 ;
            GetResult( number1, answer ) ;
            break;
        case '/' :
            answer = number1 / number2 ;
            GetResult( number1, answer ) ;
            break;
    }
}// end function

int GetResult( int number1 , int answer ) {
    printf( "Result : %d" , answer ) ;
}// end function
