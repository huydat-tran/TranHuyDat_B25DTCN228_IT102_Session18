#include <stdio.h>
 void addElement(int array[100],int *currentIndex){
     int indexInsert, valueInsert;
     printf("Nhap vi tri can chen vao: ");
     scanf("%d",&indexInsert);
     printf("Nhap gia tri can chen vao: ");
     scanf("%d",&valueInsert);
     for(int i = *currentIndex ; i > indexInsert; i --){
         array[i] = array[i - 1];
         
     }array[indexInsert] = valueInsert;
       (*currentIndex) ++;
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
    addElement(numbers,&currentIndex);
    printArray(numbers,&currentIndex);
}
