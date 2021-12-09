/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/**************************************************/
#include <stdio.h>
/**************************************************/
#define MAX_BITS 65
/**************************************************/
typedef unsigned long long int ull;
/**************************************************/
void Display_Binary(ull Decimal_Num);
/**************************************************/
int main()
{
    ull Number;
    while(1){
        printf("Enter Your Number...\n");
        scanf("%I64u", &Number);
        Display_Binary(Number);
    }
    return 0;
}
/**************************************************/
void Display_Binary(ull Decimal_Num){
    char Key = 0;
    ull Tmp = Decimal_Num;
    if(0 == Decimal_Num){
        printf("0");
    }else{
        while(Tmp){
            Key++;
            Tmp >>= 1;
        }
        Key--;
        while(Key > -1){
            if((1 << Key) & Decimal_Num){
                printf("1");
            }else{
                printf("0");
            }
            Key--;
        }
    }
    printf("\n");
}
/**************************************************/
