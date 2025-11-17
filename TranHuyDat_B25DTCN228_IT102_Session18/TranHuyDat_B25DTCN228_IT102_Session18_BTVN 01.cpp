#include <stdio.h>

int main(){
	
	int x = 5;
	int *ptr = &x;
	
	printf("Dia chi cua bien x la : %lu",ptr);
	printf("\nDia chi cua bien x cach 2 la: %lu",&x);
	printf("\nGia tri cua bien la: %d",x);
	printf("Gia tri cua bien cah 2 la: %d",*ptr);
}
