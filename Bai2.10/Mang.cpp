#include<stdio.h>
#include<math.h>
#include "Mang.h"

int tongPhanTuDQ(int a [],int n)
{
	return tongPhanTuDQ(a,n) + tongPhanTuDQ(a,n-1);
}
int tongPhanTuKhongDQ(int a [],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int tongPhanTuLonHonKhongDQ(int a[],int n)
{
	if(n==0)
	{
		if(a[n]>0)
			return a[n];
		else
			return 0;
	}
	else
		if(a[n]>0)
			return a[n] + tongPhanTuLonHonKhongDQ(a,n-1);
		else
			return tongPhanTuLonHonKhongDQ(a,n-1);
}
int tongPhanTuLonHonKhongKhongDQ(int a [],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			sum+=a[i];
	}
	return sum;
}
bool checkNguyenTo(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%2==0)
			return false;
	}
	return true;
}
int demSLNguyenToDQ( int a[],int n)
{
	if(n==0)
		if(checkNguyenTo(a[n]))
			return 1;
		else
			return 0;
	else
		if(checkNguyenTo(a[n]))
			return 1+ demSLNguyenToDQ(a,n-1);
		else
			return demSLNguyenToDQ(a,n-1);
}
int demSLNguyenToKhongDQ( int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(checkNguyenTo(a[i]))
		{
			printf("%d \t",a[i]);
			sum++;
		}
	}
	return sum;
}
int maxKhongDQ( int a[],int n)
{
	int max = a[0];
	for(int i=1;i<n;i++)
		if(max <a[i])
			max = a[i];
	return max;
}
int maxDQ( int a[],int n)
{
	if(n==0)
		return a[n];
	if(a[n-1]>maxDQ(a,n-1))
		return a[n-1];
	else
		return maxDQ(a,n-1);
}
