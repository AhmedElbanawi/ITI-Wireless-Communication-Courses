/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
#include <stdio.h>
#define MY_ARRAY_SIZE(ARRAY_ADDRESS) ((char*)(&(ARRAY_ADDRESS) + 1) -(char*)(&(ARRAY_ADDRESS)))
int main()
{
    char Array_Chars[5];
    short Array_Shors[5];
    int Array_Ints[5];
    long long Array_Long[5];
    printf("Tests are...\n");
    printf("Size = %hu Bytes\nSize = %hu Bytes\nSize = %hu Bytes\nSize = %hu Bytes\n", MY_ARRAY_SIZE(Array_Chars)
                                                             , MY_ARRAY_SIZE(Array_Shors)
                                                             , MY_ARRAY_SIZE(Array_Ints)
                                                             , MY_ARRAY_SIZE(Array_Long));
    return 0;
}
