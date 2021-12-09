/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
/***********************************************/
#include <stdio.h>
#include <string.h>
/***********************************************/
#define NULL_CHAR '\0'
/***********************************************/
void Merg_Str(char* First, char* Second, char* Merged_Str);
/***********************************************/
int main()
{
    char First[100], Second[100], Merged[100];
    while(1){
        printf("Enter First Name...\n");
        scanf("%s", First);
        printf("Enter Second Name...\n");
        scanf("%s", Second);
        Merg_Str(First, Second, Merged);
        puts(Merged);
    }
    return 0;
}
/***********************************************/
void Merg_Str(char* First, char* Second, char* Merged_Str){
    while(*First != NULL_CHAR){
        *Merged_Str = *First;
        First++;
        Merged_Str++;
    }
    while(*Second != NULL_CHAR){
        *Merged_Str = *Second;
        Second++;
        Merged_Str++;
    }
    *Merged_Str = NULL_CHAR;
}
/***********************************************/
