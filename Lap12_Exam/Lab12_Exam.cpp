#include <stdio.h>
#include <string.h>

int tick_emp(char tick , int a) ;
void avgresult(int q) ;
void mostxp(q) ;

struct employee {
        char name[100] ;
        float salary ;
        int duration ;
};

struct employee e[100];

int main() {
    int q = 0 ;
    int ds = 1 ;
    char tick ;
    while(ds){
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf (" %c", &tick) ;
        ds = tick_emp(tick, q) ;
        q++ ;
    }//End While
    avgresult(q) ;
    mostxp(q) ;
}

int tick_emp (char tick, int a){
    char name[100] ;
    switch(tick){
      case 'y' :
        getchar();
        printf ("Employee Name : ") ;
        gets(e[a].name);
        printf ("Salary (Bath/Month) : ") ;
        scanf ("%f" , &e[a].salary) ;
        printf ("Duration (Year) : ") ;
        scanf ("%d" , &e[a].duration) ;
        break;
      case 'n' :
        return 0 ;
      default :
        getchar();
        printf ("Employee Name : ") ;
        gets(e[a].name);
        printf ("Salary (Bath/Month) : ") ;
        scanf ("%f" , &e[a].salary) ;
        printf ("Duration (Year) : ") ;
        scanf ("%d" , &e[a].duration) ;
        break;
    }//End SwitchCase
}//End Function

void avgresult(int q){
    q = q - 1 ;
    float avg , result = 0 ;
    int i = 0 ;
    
    while(i <= q) {
        result = e[i].salary + result ;
        i++ ;
    }//End While

    avg = result / q ;

    printf("Average of Salary : %.2f Bath \n" , avg) ;
    printf("Payment of every month : %.2f Bath \n" , result) ;
    printf("** Most salary in this business ** \n") ;
}//End Fucntion

void mostxp(int q){
    q = q - 1 ;
    float sum_ys[q] ;
    int i = 0 ;

    while(i <= q){
        sum_ys[i] = e[i].salary * (e[i].duration) ;
        i++ ;
    }//End While

    int max = sum_ys[0] ;
    int icount = 0 ;
    int check_i = 0 ;

    while (check_i <= q) {
        int check_max = sum_ys[check_i] > max ;    
        switch (check_max) {
            case 1 :
                max = sum_ys[check_i] ;
                icount = check_i ;
                check_i++ ;
                break ;
            case 0 :
                check_i++ ;
                break ;
        }//End SwitchCase
    }//End While

    printf("Name : %s (%d Years)\n" , e[icount].name , e[icount].duration) ;
    printf("Salary : %.2f Bath \n" , e[icount].salary) ;
}//End Fucntion
