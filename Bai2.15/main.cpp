#include <stdio.h>
#include "TongPhanSo.h"


int main() {
	int x;
	do{
		printf("\nNhap x\n");
		scanf("%d",&x);
	}while(!(x>0));
	printf("\nTong la %.1f (Khong de quy)\n",tinhTongKhongDQ(x));
	printf("\nTong la %.1f (De quy)\n",tinhTongDQ(x));
	return 0;
}
