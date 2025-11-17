#include <stdio.h>
#include <stdlib.h>

void addIndex(int array[100],int *currentIndex){
	int size;
	printf("Nhap so phan tu muon add vao mang: ");
	scanf("%d",&size);
	printf("Nhap cac gia tri vao mang: \n");
	for(int i = 0 ; i < size; i ++){
		printf("numbers[%d]  = ",*currentIndex);
		scanf("%d",&array[i]);
		(*currentIndex)++;
	}		
}

void addElement(int array[100], int *currentIndex){
	int indexInsert,valueInsert;
	printf("Nhap vi tri muon them vao mang: ");
	scanf("%d",&indexInsert);
	printf("Nhap gia tri muon them vao mang: ");
	scanf("%d",&valueInsert);
	for(int i = *currentIndex; i > indexInsert ; i--){
		array[i] = array[i - 1];
	}array[indexInsert] = valueInsert;
	(*currentIndex)++;
	printf("Them phan tu thanh cong!");
}

void removeIndex(int array[100],int *currentIndex){
	int indexRemove;
	printf("Nhap vi tri muon xoa: ");
	scanf("%d",&indexRemove);
	for(int i = indexRemove; i < *currentIndex - 1;i ++){
		array[i] = array[i + 1];
	}array[*currentIndex - 1] = 0;
	(*currentIndex) --;
	printf("Xoa phan tu thanh cong!");
}

void updateIndex(int array[100]){
	int indexUpdate,valueUpdate;
	printf("Nhap vi tri muon upate: ");
	scanf("%d",&indexUpdate);
	printf("Nhap gia tri muon update: ");
	scanf("%d",&valueUpdate);
	array[indexUpdate] = valueUpdate;
}

void printArray(int array[100],int *currentIndex){
	printf("Cac phan tu trong mang la: \n");
	for(int i = 0; i < *currentIndex; i ++){
		printf("\nNumbers[%d] = %d",i,array[i]);
	}

}

int main(){
	int numbers[100];
	int choice;
	int currentIndex = 0;
	int flag = 0;
	do{
	printf("+-------------------------------------+");
	printf("\n*************MENU CHUC NAG*************\n");
	printf("\n1. Nhap phan tu vao");
	printf("\n2. Them phan tu vao vi tri bat ki");
	printf("\n3. Xoa phan tu o vi tri bat ki");
	printf("\n4. Cap nhap gia tri vao vi tri bat ki");
	printf("\n5. Hien thi mang");
	printf("\n6. Thoat");
	printf("\nMoi ban chon chuc nang: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			addIndex(numbers,&currentIndex);
			flag = 1;
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			if(flag==0){
				printf("Yeu cau nhap cac gia tri vao mang truoc!! Chon chuc nang 1");
				
			}else{
				switch(choice){
					case 2:
						addElement(numbers,&currentIndex);
						break;
					case 3:
						removeIndex(numbers,&currentIndex);
						break;
					case 4:
						updateIndex(numbers);
						break;
					case 5:
						printArray(numbers,&currentIndex);
						break;
				}
			}
		break;
		case 6: 
			printf("Tam biet va hen gap lai!!");
			exit(0);
		default:
			printf("Chon sai chuc nang yeu cau chon lai!");
			
	}
}while(1);	
}
