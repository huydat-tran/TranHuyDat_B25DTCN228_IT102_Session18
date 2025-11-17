#include <stdio.h>

void swapNumber(int *numberA,int *numberB){
	int tmp = *numberB;
	*numberB = *numberA;
	*numberA = tmp;
}

int main(){
	int a,b;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d %d",&a,&b);
	printf("\n2 so truoc khi hoan doi vi tri\na: %d\nb: %d",a,b);
	swapNumber(&a,&b);
	printf("\n2 so sau khi hoan doi la: \na: %d\nb: %d",a,b);
	
}
