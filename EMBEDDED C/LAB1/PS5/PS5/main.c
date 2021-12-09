/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/*************************************************/
#include <stdio.h>
/*************************************************/
typedef unsigned long long ull;
/*************************************************/
unsigned char Get_No_Of_Set_Bits(unsigned int Num);
/*************************************************/
int main()
{
    ull Num;
    while(1){
        printf("Enter Your Number...\n");
        scanf("%I64u", &Num);
        printf("No Of Bits = %hu\n", Get_No_Of_Set_Bits(Num));
    }
    return 0;
}
/*************************************************/
unsigned char Get_No_Of_Set_Bits(unsigned int Num){
   unsigned char Bits = 0;
   while(Num){
        if(Num & 1){
            Bits++;
        }
        Num >>= 1;
   }
   return Bits;
}
/*************************************************/
