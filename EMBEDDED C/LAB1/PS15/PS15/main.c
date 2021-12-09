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
void Copy_Str(char* Src, char* Dest);
/***********************************************/
int main()
{
    char Src[100],Dest[100];
    while(1){
        printf("Enter Your String...\n");
        gets(Src);
        Copy_Str(Src, Dest);
        puts(Dest);
        printf("\n");
    }
    return 0;
}
/***********************************************/
void Copy_Str(char* Src, char* Dest){
    char Characters[256] = {0};
    while(*Src != NULL_CHAR){
        if(!Characters[*Src]){
            Characters[*Src] = 1;
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = NULL_CHAR;
}
/***********************************************/
