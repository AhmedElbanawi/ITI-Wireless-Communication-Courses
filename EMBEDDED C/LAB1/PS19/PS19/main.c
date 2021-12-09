/**
    Author: Ahmed Elsayed Elbanawi
    Date:   7/12/2021
**/
/********************************************/
#include <stdio.h>
/********************************************/
#define NULL_CHAR '\0'
#define SIZE 100
/********************************************/
int Get_Most_Repeated_Char(char* Str);
/********************************************/
int main()
{
    char Str[SIZE];
    while(1){
        printf("Enter Array 0 To 9...\n");
        scanf("%s", Str);
        printf("Most Repeated Number is [ %d ]\n", Get_Most_Repeated_Char(Str));
    }
    return 0;
}
/********************************************/
int Get_Most_Repeated_Char(char* Str){
    char Freq[10] = {0}, i;
    int Max = 0, Ret_Num;
    while(*Str != NULL_CHAR){
        Freq[*Str - '0']++;
        Str++;
    }
    for(i = 0; i < 10; i++){
        if(Max < Freq[i]){
            Max = Freq[i];
            Ret_Num = i;
        }
    }
    return Ret_Num;
}
/********************************************/
