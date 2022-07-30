#include "TimPhanTu.h"
#include <stdio.h>
void timPhanTuKhongDQ( int a[],int n,int x)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("\nPhan tu x(%d) nam tai vi tri %d\n",x,i+1);
			count++;
		}
	}
	if(count==0)
		printf("\nPhan tu x(%d) khong nam trong mang\n",x);
}
int timPhanTuDQ( int a[],int n,int x)
{
	if(n==0)
		return 0;
	else
		if(a[n-1]==x)
			return n; 
		else
			return timPhanTuDQ(a,n-1,x);
}
