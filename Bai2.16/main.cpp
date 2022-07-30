#include <stdio.h>
#include "Tong.h"


int main() {
	int n;
	do{
		printf("\nNhap n (n>0)!\n");
		scanf("%d",&n);
	}while(!(n>0));
	printf("\nTong cua 1 + (1+2+3+...+n) = %d (Khong de quy)!\n",tongKhongDQ(n));
	printf("\nTong cua 1 + (1+2+3+...+n) = %d (De quy)!\n",tongDQ(n));
	
	
	
	return 0;
}
