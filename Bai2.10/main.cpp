#include<stdio.h>
#include "Mang.h"


int main() {
	int a[11] = {-3,1,15,-3,8,3,9,5,2,10,7};
	int n=11;
	printf("\nDanh sach cac phan tu trong mang la\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nTong cac phan tu trong mang la %d (Khong de quy)\n",tongPhanTuKhongDQ(a,n));
	printf("\nTong cac phan tu trong mang la %d (De quy)\n",tongPhanTuKhongDQ(a,n));
	printf("\nTong cac phan tu >0 trong mang la %d (Khong de quy)\n",tongPhanTuLonHonKhongKhongDQ(a,n));
	printf("\nTong cac phan tu >0 trong mang la %d (De quy)\n",tongPhanTuLonHonKhongDQ(a,n-1));
	printf("\nTong cac phan tu nguyen to trong mang la %d (Khong de quy)\n",demSLNguyenToKhongDQ(a,n));
	printf("\nTong cac phan tu nguyen to trong mang la %d (De quy)\n",demSLNguyenToDQ(a,n-1));
	printf("\nSo lon nhat trong mang la %d (Khong de quy)\n",maxKhongDQ(a,n));
	printf("\nSo lon nhat trong mang la %d (De quy)\n",maxDQ(a,n));
	return 0;
}
