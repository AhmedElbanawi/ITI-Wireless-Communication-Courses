/**
    Author: Ahmed Elsayed Elbanawi
    Date:   6/12/2021
**/
/****************************************/
#include <stdio.h>
/****************************************/
#define NULL_CHAR '\0'
#define STR_SIZE 100
/****************************************/
void Str_Reverse(char* Str);
unsigned int Str_Length(char* Str);
/****************************************/
int main()
{
    char Str[STR_SIZE];
    while(1){
        printf("Enter Your String...\n");
        scanf("%s", Str);
        Str_Reverse(Str);
        printf("%s\n", Str);
    }
    return 0;
}
/****************************************/
unsigned int Str_Length(char* Str){
    unsigned int Length = 0;
    while(*Str != NULL_CHAR){
        Length++;
        Str++;
    }
    return Length;
}
/****************************************/
void Str_Reverse(char* Str){
    unsigned int Right, Left = 0;
    char Tmp;
    Right = Str_Length(Str);
    Right--;
    while(Left < Right){
        Tmp = Str[Left];
        Str[Left] = Str[Right];
        Str[Right] = Tmp;
        Left++;
        Right--;
    }
}
/****************************************/
