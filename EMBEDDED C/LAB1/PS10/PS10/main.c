/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/*********************************************************/
#include <stdio.h>
/*********************************************************/
typedef unsigned long long ull;
/*********************************************************/
ull Get_Sum(ull Num1, ull Num2);
/*********************************************************/
int main()
{
    ull Num1, Num2, Sum;
    while(1){
        printf("Enter Num1...\n>> ");
        scanf("%I64u", &Num1);
        printf("Enter Num2...\n>> ");
        scanf("%I64u", &Num2);
        Sum = Num2 > Num1 ? Get_Sum(Num1, Num2) : Get_Sum(Num2, Num1);
        printf("Sum = %I64u\n", Sum);
    }
    return 0;
}
/*********************************************************/
ull Get_Sum(ull Num1, ull Num2){
    ull Sum1, Sum2;
    Sum1 = (Num1 * (Num1 + 1)) / 2;
    Sum2 = (Num2 * (Num2 + 1)) / 2;
    return Sum2 - Sum1 - Num2;
}
/*********************************************************/
