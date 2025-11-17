#include <stdio.h>

void isSort(int array[],int length){
    for(int i = 0; i < length - 1; i ++){
        for(int j = 0 ; j < length -1 -i; j ++){
            if(array[j] > array[j + 1]){
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
void printArray(int array[], int length){
    for(int i = 0; i < length; i ++){
        printf("\nNumbers[%d] = %d",i,array[i]);
    }
}

int main(){
    int numbers[]= {4,5,12,2,3,234,89,7,54,24,123,879};
    printf("\nMang truoc khi sap xep: \n");
    printArray(numbers,sizeof(numbers)/sizeof(int));
    
    printf("\nMang sau khi sap xep: \n");
    isSort(numbers,sizeof(numbers)/sizeof(int));
    printArray(numbers,sizeof(numbers)/sizeof(int));
    
}
