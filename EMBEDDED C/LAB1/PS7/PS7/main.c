/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/*********************************************************/
#include <stdio.h>
/*********************************************************/
typedef unsigned long long ull;
/*********************************************************/
ull Get_Sum_Of_Digits(ull Num);
/*********************************************************/
int main()
{
    ull Num;
    while(1){
        printf("Enter Your Number...\n");
        scanf("%I64u", &Num);
        printf("Sum = %I64u\n", Get_Sum_Of_Digits(Num));
    }
    return 0;
}
/*********************************************************/
ull Get_Sum_Of_Digits(ull Num){
    ull Sum = 0;
    while(Num){
        Sum += (Num % 10);
        Num /= 10;
    }
    return Sum;
}
/*********************************************************/
