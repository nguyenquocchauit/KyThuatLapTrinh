#include <stdio.h>
#include "ViTrung.h"


int main() {
	int n,k,h;
	printf("Nhap so luong vi trung (n>=0)!\n");
	scanf("%d",&n);
	printf("Nhap so lan de sau 1h!\n");
	scanf("%d",&k);
	printf("Nhap so gio (h>=0)!\n");
	scanf("%d",&h);
	printf("%d vi trung sau %dh (%d/h) co tong la %d (de quy)\n",n,h,k,soViTrungDQ(n,k,h));
	printf("%d vi trung sau %dh (%d/h) co tong la %d (khong de quy)\n",n,h,k,soViTrungDQ(n,k,h));
	return 0;
}
