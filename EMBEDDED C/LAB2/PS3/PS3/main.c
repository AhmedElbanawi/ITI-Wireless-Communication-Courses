#include <stdio.h>
#define TIME (120 * (unsigned int)1e6)
void Software_Delay(volatile unsigned long long Delay);
void Display(void);
int main()
{
    while(1){

      Display();
    }
    return 0;
}
void Software_Delay(volatile unsigned long long Delay){
    while(Delay--);
}
void Display(void){
    printf("HELLO ITI\n");
    Software_Delay(TIME);
}
