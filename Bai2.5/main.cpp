#include <stdio.h>
#include "TimPhanTu.h"


int main() {
	int a[]={1,2,3,4,5,6,7,11};
	int n=8,x;
	printf("Nhap so can tim!\n");
	scanf("%d",&x);
	timPhanTuKhongDQ(a,n,x);
	if(timPhanTuDQ(a,n,x)==0)
		printf("\nPhan tu x(%d) khong nam trong mang\n",x);
	else
		printf("\nPhan tu x(%d) nam tai vi tri %d",x,timPhanTuDQ(a,n,x));
	return 0;
}
