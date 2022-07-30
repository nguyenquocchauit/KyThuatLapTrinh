#include "Tong.h"
int tongSoNDQ(int n)
{
	if(n==0)
		return 0;
	else
		return tongSoNDQ(n-1)+n;
}
int tongDQ(int n)
{
	if(n==0)
		return 0;
	return tongDQ(n-1) + tongSoNDQ(n);
}
int tongKhongDQ(int n)
{
	int s = 0, t = 0;
	for(int i = 1; i <= n; i++)
	{
		t = t + i;
		s = s + t;
	}
	return s;
}

