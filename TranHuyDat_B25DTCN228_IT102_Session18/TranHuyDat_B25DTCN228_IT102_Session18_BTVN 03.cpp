#include <stdio.h>

void sumNumbers(int number1,int number2,int *sum){
	 *sum = number1 + number2;
	
}

int main(){
	int a,b;
	int summary = 0;
	
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	sumNumbers(a,b,&summary);
	
	printf("Tong 2 so: %d",summary);
	
}
