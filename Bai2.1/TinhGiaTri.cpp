#include <stdio.h>
#include <math.h>
#include "TinhGiaTri.h"
double soMuKhongDQ (float x, int n)
{
	float result =1;
	int n2 =abs(n);
	if(x==0)
		return 0;
	if(n==0)
		return 1;
	if(n>0)
		for(int i=1;i<=n;i++)
		{
			result*=x;
		}
	else
	{
		for(int i=1;i<=n2;i++)
		{
			result*=x;
		}
		result=1/result;
	}	
	return result;
}
double soMuDQ (float x, int n)
{
	if(x==0)
		return 0;
	if(n==0)
		return 1;
	if(n>0)
		return soMuDQ(x,n-1) *x;
	else
	{
		return 1/(soMuDQ(x,abs(n)-1) *x);
	}
}
int giaiThuaKhongDQ(int n)
{
	int giaiThua=1;
	for(int i=1;i<=n;i++)
	{
		giaiThua*=i;
	}
	return giaiThua;
}
int giaiThuaDQ(int n)
{
	if(n==0)
		return 1;
	else
		return giaiThuaDQ(n-1) *n;
}
int tongSoNKhongDQ(int n)
{
	int tong=0;
	if(n==0)
		return 0;
	else
		for(int i=0;i<=n;i++)
		{
			tong+=i;
		}
	return tong;
}
int tongSoNDQ(int n)
{
	if(n==0)
		return 0;
	else
		return tongSoNDQ(n-1)+n;
}
int tongSoNLeKhongDQ(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			sum+=i;
		}
	}
	return sum;
}
int tongSoNLeDQ(int n)
{
	if (n==0) 
		return 0;
	if(n%2==0)
		return tongSoNLeDQ(n-1);
	else
		return tongSoNLeDQ(n-1) +n;
}
int tongSoNChanKhongDQ(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	return sum;
}
int tongSoNChanDQ(int n)
{
	if (n==0) 
		return 0;
	if(n%2==1)
		return tongSoNChanDQ(n-1);
	else
		return tongSoNChanDQ(n-1) +n;
}
bool kiemTraNguyenTo(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		 	return false;
	}
	return true;
}
int soNguyenToKhongDQ(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(kiemTraNguyenTo(i)==1)
		{
			sum+=i;
		}
	}
	return sum;
}
int soNguyenToDQ(int n)
{
	int sum=0;
	if(n==1)
		sum=0;
	else
		if(n==2)
			sum=2;
		else
			if(kiemTraNguyenTo(n)==0)
				sum = soNguyenToDQ(n-1);
			else
			    if( kiemTraNguyenTo(n)==1 ) 
					sum = n + soNguyenToDQ(n-1);
	return sum;
}
int tongSoNguyenToKhongDQ(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(kiemTraNguyenTo(i)==1)
		{
			sum++;
		}
	}
	return sum;
}
int tongSoNguyenToDQ(int n)
{
	if(n==1)
		return 0;
	else
		if(n==2)
			return 1;
		else
			if( kiemTraNguyenTo(n)==1 ) 
				return 1+ tongSoNguyenToDQ(n-1);
			else
				if( kiemTraNguyenTo(n)==0 ) 
					return tongSoNguyenToDQ(n-1);
}









