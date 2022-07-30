#include <stdio.h>
#include "TongPhanSo.h"
float tinhTongKhongDQ(int n)
{
	float s=0, t=0;
	for(int i=1; i<=n; i++)
	{
		t=t+i;
		s=s+(float)1/t;
	}
	return s;
}
int tongSoNDQ(int n)
{
	if(n==1)
		return 1;
	else
		return tongSoNDQ(n-1)+n;
}
float tinhTongDQ(int n)
{
	if(n==1)
		return 1;
	return ((float)1/ tongSoNDQ(n)) + tinhTongDQ(n-1);
}
