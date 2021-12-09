/**
    Author: Ahmed Elsayed Elbanawi
    Date:   7/12/2021
**/
/***************************************/
#include <stdio.h>
#include <malloc.h>
/***************************************/
int* Create_Array(int Start, int End);
/***************************************/
int main()
{
    int Start, End, Tmp, *arr, Size, i;
    while(1){
        printf("Enter Start Number...\n");
        scanf("%d", &Start);
        printf("Enter End Number...\n");
        scanf("%d", &End);
        if(End < Start){
            Tmp = Start;
            Start = End;
            End = Tmp;
        }
        arr = Create_Array(Start, End);
        Size = End - Start - 1;
        for(i = 0; i < Size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
/***************************************/
int* Create_Array(int Start, int End){
    int Size = End - Start - 1, *arr, i;
    if(Size > 0){
        arr = malloc(sizeof(int) * Size);
        for(i = 0; i < Size; i++){
            arr[i] = Start + 1 + i;
        }
    }
    return arr;
}
/***************************************/
