/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
/***************************************************/
#include <stdio.h>
/***************************************************/
#define CLEAR_BIT(X,B) ((X) &= ~(1 << (B)))
/***************************************************/
#define SET_BIT(X,B) ((X) |= (1 << (B)))
/***************************************************/
#define READ_BIT(X,B) (((X) & (1 << (B))) >> (B))
/***************************************************/
#define TOGGLE_BIT(X,B) ((X) ^= (1 << (B)))
/***************************************************/
int main()
{

    return 0;
}
