#include <stdio.h>
#include <string.h>

void reverse(char string[1000],int length,char *str){
    char reverseString[1000];
    for (int i = 0; i < length ; i ++){
        *(str + i) = string[length - 1 - i];
    }*(str + length) = 0;
    
}

int main(){
    char inputString[1000];
    char reverseString[1000];
    
    printf("Nhap 1 chuoi ki tu vao: ");
    fgets(inputString,sizeof(inputString),stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    
    char *str = reverseString;
    reverse(inputString,strlen(inputString),reverseString);
    
    printf("Chuoi ki tu dao nguoc la: %s",reverseString);
    
    
}
