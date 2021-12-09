/**
    Author: Ahmed Elsayed Mohamed
    Date:   6/12/2021
**/
/**************************************************/
#include <stdio.h>
#include <malloc.h>
/**************************************************/
void Count_Longers_Consective_Number(int* arr, int Size, int* Num, int* Max_Count);
/**************************************************/
int main()
{
    int Num, Max_Count, Size, *arr, i;
    while(1){
        printf("Enter Your Array Size...\n");
        scanf("%d", &Size);
        arr = malloc(sizeof(int) * Size);
        for(i = 0; i < Size; i++){
            printf("Enter ARRAY[%d] = ", 1 + i);
            scanf("%d", arr + i);
        }
        Count_Longers_Consective_Number(arr, Size, &Num, &Max_Count);
        printf("Number = %d\t Repeated = %d\n", Num, Max_Count);
        printf("########################################");
    }

    printf("%d %d", Num, Max_Count);
    return 0;
}
/**************************************************/
void Count_Longers_Consective_Number(int* arr, int Size, int* Num, int* Max_Count){
    int Tmp_Count = 0, i, j;
    *Num = 0, *Max_Count = 0;
    for(i = 0; i < Size; i++){
        Tmp_Count = 1;
        for(j = 1 + i; j < Size; j++){
            if(arr[i] == arr[j]){
                Tmp_Count++;
            }else{
                break;
            }
        }
        if(Tmp_Count > *Max_Count){
            *Max_Count = Tmp_Count;
            *Num = arr[i];
        }
    }
}
/**************************************************/
