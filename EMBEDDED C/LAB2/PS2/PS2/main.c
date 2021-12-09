#include <stdio.h>
int main()
{
    unsigned short Number = 1;
    char* Number_Ptr = (char*)&Number;
    if(1 == *Number_Ptr){
        printf("Machine is Little Endian...");
    }else{
        printf("Machine is Big Endian...");
    }

    return 0;
}
