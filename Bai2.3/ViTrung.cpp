#include "ViTrung.h"
/*
n: so con
k: so lan
h: so gio
*/
int soViTrungDQ(int n,int k,int h)
{
	if(h==0)
		return n;
	if(n==0)
		return 0;
	return k * soViTrungDQ(n,k,h-1);
}
int soViTrungKhongDQ(int n,int k,int h)
{
	int sum=0;
	if(h==0)
		return n;
	if(n==0)
		sum=0;
	for(int i=1;i<=h;i++)
	{
		sum+= k*n;
	}
	return sum;
}
