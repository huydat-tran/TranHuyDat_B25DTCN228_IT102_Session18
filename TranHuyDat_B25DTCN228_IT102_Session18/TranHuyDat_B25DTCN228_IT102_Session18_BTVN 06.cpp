#include <stdio.h>

void searchValue(int array[],int length){
    int value,isExist = 0;
    int index;
    printf("Nhap gia tri can tim: ");
    scanf("%d",&value);
    for(int i = 0 ; i < length ; i++){
        if(array[i] == value){
            isExist = 1;
            index = i;
            break;
        }
    }if(isExist){
        printf("%d nam o vi tri %d",value,index);
    }else{
        printf("Khong tim thay gia tri");
    }
}

int main(){
    int numbers[]= {1,2,3,4,5,6,7,8,9,123,12,456,78};
    searchValue(numbers,sizeof(numbers)/sizeof(int));
}
