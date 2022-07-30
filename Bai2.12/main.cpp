#include <stdio.h>
#include "TongChuSo.h"

int main() {
	int n;	
    printf("\nNhap vao mot so n\n");
    scanf("%d", &n);
	printf("Tong cac chu so cua n(%d) la %3d",n, tinhTong(n));
	return 0;
}
