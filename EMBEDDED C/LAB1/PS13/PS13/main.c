/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
/***********************************************/
#include <stdio.h>
/***********************************************/
#define ARRAY_MAX_ROW 3
#define ARRAY_MAX_COL 3
/***********************************************/
void Get_Array(int Array[ARRAY_MAX_ROW][ARRAY_MAX_COL]);
void Multiply_Array(int Array1[ARRAY_MAX_ROW][ARRAY_MAX_COL],
                    int Array2[ARRAY_MAX_ROW][ARRAY_MAX_COL],
                    int Mult_Array[ARRAY_MAX_ROW][ARRAY_MAX_COL]);
/***********************************************/
int main()
{
    int Array1[ARRAY_MAX_ROW][ARRAY_MAX_COL],Array2[ARRAY_MAX_ROW][ARRAY_MAX_COL];
    int Mult_Array[ARRAY_MAX_ROW][ARRAY_MAX_COL];
    int r, c;
    printf("---------------- Enter First Array Elements with size (%d * %d) ----------------\n", ARRAY_MAX_ROW, ARRAY_MAX_COL);
    Get_Array(Array1);
    printf("---------------- Enter Second Array Elements with size (%d * %d) ----------------\n", ARRAY_MAX_ROW, ARRAY_MAX_COL);
    Get_Array(Array2);
    Multiply_Array(Array1, Array2, Mult_Array);
    printf("---------------- Multiplication is ----------------\n");
    for(r = 0; r < ARRAY_MAX_ROW; r++){
        for(c = 0; c < ARRAY_MAX_COL; c++){
            printf(">> Element[%d][%d] = %d\n", 1 + r, 1 + c, Mult_Array[r][c]);
        }
    }
    return 0;
}
/***********************************************/
void Get_Array(int Array[ARRAY_MAX_ROW][ARRAY_MAX_COL]){
    int r, c;
    for(r = 0; r < ARRAY_MAX_ROW; r++){
        for(c = 0; c < ARRAY_MAX_COL; c++){
            printf(">> Enter Element[%d][%d] = ", 1 + r, 1 + c);
            scanf("%d", &Array[r][c]);
        }
    }
}
/***********************************************/
void Multiply_Array(int Array1[ARRAY_MAX_ROW][ARRAY_MAX_COL],
                    int Array2[ARRAY_MAX_ROW][ARRAY_MAX_COL],
                    int Mult_Array[ARRAY_MAX_ROW][ARRAY_MAX_COL])
{
    int r, c, i;
    for(r = 0; r < ARRAY_MAX_ROW; r++){
        for(c = 0; c < ARRAY_MAX_COL; c++){
                Mult_Array[r][c] = 0;
            for(i = 0; i < ARRAY_MAX_COL; i++){
                Mult_Array[r][c] += (Array1[r][i] * Array2[i][c]);
            }
        }
    }
}
/***********************************************/
