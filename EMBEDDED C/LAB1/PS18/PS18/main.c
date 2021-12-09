/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
#include <stdio.h>
#define MY_SIZE_OF(TYPE) (sizeof(TYPE))
int main()
{
    printf("Size Of Char    is %hu Byte\n", MY_SIZE_OF(char));
    printf("Size Of Short   is %hu Bytes\n", MY_SIZE_OF(short));
    printf("Size Of Int     is %hu Bytes\n", MY_SIZE_OF(int));
    printf("Size Of Long    is %hu Bytes\n", MY_SIZE_OF(long long));
    return 0;
}
