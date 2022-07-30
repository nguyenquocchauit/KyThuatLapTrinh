#include <stdio.h>
#include "ChuyenDoiCoSo.h"


int main() {
	int x;
	printf("\nNhap so thap phan\n");
	scanf("%d",&x);
	printf("Thap phan %d chuyen sang nhi phan la %d (Khong de quy)\n",x,chuyenDoiKhongDQ(x));
	printf("Thap phan %d chuyen sang nhi phan la (De quy)",x);
	chuyenDoiDQ(x);
	return 0;
}
