#include <stdio.h>
 void updateIndex(int array[100]){
     int indexUpdate, valueUpdate;
     printf("Nhap vi tri can cap nhap: ");
     scanf("%d",&indexUpdate);
     printf("Nhap gia tri can cap nhap: ");
     scanf("%d",&valueUpdate);
    array[indexUpdate] = valueUpdate;
     
     
       printf("Chen gia tri thanh cong!\n");
 }
 
 void printArray(int array[100],int *currentIndex){
     printf("Cac gia tri trong mang la: \n");
     for(int i = 0 ; i < *currentIndex; i ++){
         printf("numbers[%d] = %d\n",i,array[i]);
     }
 }
 
int main(){
    int numbers[100];
    int currentIndex = 0;
    int size;
    printf("Nhap so phan tu muon chen vao mang: ");
    scanf("%d",&size);
    printf("Nhap cac gia tri vao mang: \n");
    for(int i = 0; i < size; i ++){
        printf("numbers[%d] = ",i);
        scanf("%d",&numbers[i]);
        currentIndex++;
    }
    updateIndex(numbers);
    printArray(numbers,&currentIndex);
}
