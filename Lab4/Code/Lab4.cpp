#include <stdio.h>
#include <string.h>

int main() {
    char employee_id[]  = "" ;
    int hours          = 0 ;
    int amount        = 0 ;

    while(1){
        printf("Input the Employees ID (Max. 10 chars) : ");
        scanf("%s", employee_id);
        if(strlen(employee_id) <= 10) break;
    }// end while

    printf("Input the working hrs : ");
    scanf("%d", &hours);
    printf("Salary amount/hr (Bath) : ");
    scanf("%d", &amount);


    // Show result and Calculating salary
    printf("----\n");
    printf("Excepted Output : \n");
    printf("Employees ID = %s\n", employee_id);
    printf("Amount/day = %.2f Bath(s)", (float)(amount * hours));

    return 0;

}//end function
