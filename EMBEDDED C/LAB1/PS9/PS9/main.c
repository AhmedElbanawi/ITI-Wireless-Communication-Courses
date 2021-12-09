#include <stdio.h>
typedef unsigned long long ull;
short Max_Zeros_Bet_Ones(ull Num, short Left, short Right);
unsigned char Get_No_Of_Bits(ull Num);
int main()
{
    ull Num;
    while(1){
        printf("Enter Your Number...\n>> ");
        scanf("%I64u", &Num);

    }

    return 0;
}
short Max_Zeros_Bet_Ones(ull Num, short Left, short Right){
    short Max = -1;
    ull x;
    if(Left < Right){
        x = (1 << Left) | (1 << Right);
    }
    return Max;
}
unsigned char Get_No_Of_Bits(ull Num){
    unsigned char Bits = 0;
    while(Num){
        Bits++;
        Num >>= 1;
    }
    return Bits;
}
