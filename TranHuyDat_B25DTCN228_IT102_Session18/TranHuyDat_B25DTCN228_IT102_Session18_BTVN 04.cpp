#include <stdio.h>

void printArray(int *arr,int length){
	printf("cac gia tri trong mang la: \n");
	for(int i = 0 ; i < length; i ++){
		printf("\nNumbers[%d] = %d",i,arr[i]);
	}
}

void indexInsert(int *numbers,int *length){

	printf("Nhap so phan tu muon nhap vao: ");
	scanf("%d",length);
	printf("Nhap cac gia tri vao mang: \n");
	for(int i = 0 ;i < *length ;i ++){
		printf("Numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
}

int main(){
	int numbers[100];
	int size = 0;
	
	indexInsert(numbers,&size);
	printArray(numbers,size);
	
}
