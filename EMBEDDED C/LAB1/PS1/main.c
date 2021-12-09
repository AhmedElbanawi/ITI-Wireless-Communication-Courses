/**
    Author: Ahmed Elsayed Elbanawi
    Date:   5/12/2021
**/
/*******************************************************/
#include <stdio.h>
typedef enum{
    FALSE = 0,
    TRUE
}BOOL_t;
/*******************************************************/
BOOL_t Is_Digit(const char CHARACTER);
BOOL_t Is_Capital(const char CHARACTER);
BOOL_t Is_Small(const char CHARACTER);
void Display_Message(const char CHARACTER);
/*******************************************************/
int main()
{
    char Character;
    while(1){
        printf("Enter Your Character...\n");
        scanf(" %c", &Character);
        Display_Message(Character);
    }
    return 0;
}
/*******************************************************/
BOOL_t Is_Digit(const char CHARACTER){
    BOOL_t Ret = FALSE;
    if(CHARACTER >= '0' && CHARACTER <= '9'){
        Ret = TRUE;
    }
    return Ret;
}
/*******************************************************/
BOOL_t Is_Capital(const char CHARACTER){
    BOOL_t Ret = FALSE;
    if(CHARACTER >= 'A' && CHARACTER <= 'Z'){
        Ret = TRUE;
    }
    return Ret;
}
/*******************************************************/
BOOL_t Is_Small(const char CHARACTER){
    BOOL_t Ret = FALSE;
    if(CHARACTER >= 'a' && CHARACTER <= 'z'){
        Ret = TRUE;
    }
    return Ret;
}
/*******************************************************/
void Display_Message(const char CHARACTER){
    if(TRUE == Is_Digit(CHARACTER)){
        printf("The Input Is Digit");
    }else if(TRUE == Is_Small(CHARACTER)){
        printf("The Input Is Small Character");
    }else if(TRUE == Is_Capital(CHARACTER)){
        printf("The Input Is Capital Character");
    }else{
        printf("The Input Is Special Character");
    }
    printf("\n");
}
/*******************************************************/
