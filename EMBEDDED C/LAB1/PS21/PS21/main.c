#include <stdio.h>
#include <malloc.h>
#define NUM_OF_ROWS 3
#define NUM_OF_COLS 3
int main()
{
    short* Arr_Ptr[NUM_OF_ROWS], i, j, tmp, k;
    for(i = 0; i < NUM_OF_ROWS; i++){
        Arr_Ptr[i] = malloc(sizeof(short) * NUM_OF_COLS);
    }
    for(i = 0; i < NUM_OF_ROWS; i++){
       for(j = 0; j < NUM_OF_COLS; j++){
          printf("Enter Array[%d][%d] = ", i + 1, j + 1);
          scanf("%hd", &Arr_Ptr[i][j]);
       }
    }
    for(i = 0; i < NUM_OF_ROWS * NUM_OF_COLS; i++){

    }
    return 0;
}
