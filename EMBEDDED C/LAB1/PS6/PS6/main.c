#include <stdio.h>
#define TOGGLE(NUM, BIT) (NUM ^= (1 << (BIT)))
int main()
{
    unsigned int Num;
    unsigned short Bit;
    while(1){
        printf("Enter Your Number...\n");
        scanf("%u", &Num);
        printf("Enter Bit Number You Want To Toggle...\n");
        scanf("%hu", &Bit);
        TOGGLE(Num, Bit);
        printf("Number = %u\n", Num);
    }

    return 0;
}
