/**
    Author: Ahmed Elsayed Elbanawi
    Date: 5/12/2021
**/
/*****************************************************/
#include <stdio.h>
/*****************************************************/
typedef unsigned long long ull;
typedef enum{
    FALSE = 0,
    TRUE
}BOOL_t;
/*****************************************************/
BOOL_t Is_Even(const ull NUMBER);
/*****************************************************/
int main()
{
    char Exit = 2;
    ull Sum = 0, Number;
    while(Exit){
        printf("Enter Your Number...\n");
        scanf("%I64u", &Number);
        if(TRUE == Is_Even(Number)){
            Sum += Number;
            Exit = 2;
        }else{
            Exit--;
        }
        printf("Sum = %I64u", Sum);
        if(0 == Exit){
            printf(", Bye");
        }
        printf("\n");
    }
    return 0;
}
/*****************************************************/
BOOL_t Is_Even(const ull NUMBER){
    BOOL_t Even = FALSE;
    if(FALSE == NUMBER % 2){
        Even = TRUE;
    }
    return Even;
}
/*****************************************************/
