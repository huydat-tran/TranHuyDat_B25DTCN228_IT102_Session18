#include <stdio.h>

void removeIndex(int array[100],int *currentIndex){
    int indexRemove;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d",&indexRemove);
    for(int i = indexRemove; i < *currentIndex - 1;i ++){
        array[i] = array[i + 1];
    }array[*currentIndex - 1] = 0;
    (*currentIndex)--;
}

void printArray(int array[100],int *currentIndex){
    printf("Cac gia tri trong mang la: \n");
    for(int i = 0 ; i < *currentIndex ; i ++){
        printf("\nNumbers[%d] = %d",i,array[i]);
    }
}

int main(){
    int numbers[100];
    int currentIndex = 0;
    int size;
    printf("Nhap so phan tu muon nhap vao: ");
    scanf("%d",&size);
    printf("nhap cac gia tri vao mang: \n");
    for(int i = 0; i < size; i++){
        printf("Numbers[%d] = ",currentIndex);
        scanf("%d",&numbers[i]);
        currentIndex ++;
    }
    removeIndex(numbers,&currentIndex);
    printArray(numbers,&currentIndex);
    
}
