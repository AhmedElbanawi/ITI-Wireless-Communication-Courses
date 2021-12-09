/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/********************************************************/
#include <stdio.h>
/********************************************************/
typedef enum{
    FALSE = 0,
    TRUE
}BOOL_t;
typedef unsigned long long ull;
/********************************************************/
BOOL_t Is_Base2(ull Num);
/********************************************************/
int main()
{
    ull Num;
    while(1){
        printf("Enter Your Number...\n");
        scanf("%I64u", &Num);
        if(TRUE == Is_Base2(Num)){
            printf("Yes, Number Is Base Of 2");
        }else{
            printf("No, Number Is Not Base Of 2");
        }
        printf("\n");
    }
    return 0;
}
/********************************************************/
BOOL_t Is_Base2(ull Num){
    unsigned char Cnt = 0;
    BOOL_t Base = TRUE;
    while(Num){
        if(Num & 1){
            Cnt++;
            if(Cnt > 1){
                Base = FALSE;
                Num = 0;
            }
        }
        Num >>= 1;
    }
    if(0 == Cnt){
        Base = FALSE;
    }
    return Base;
}
/********************************************************/
