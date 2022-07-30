#include "TietKiem.h"
#include <stdio.h>

/*
n: so nam
m: so tien
i: lai suat
*/
double tietKiemDQ(int m,float i,int n)
{
	if(n==0)
		return m;
	return tietKiemDQ((m+(m*i)),i,n-1);
}
double tietKiemKhongDQ(int m,float i,int n)
{
	int sum=m;
	for(int j=1;j<=n;j++)
	{
		sum=(float)sum + (sum*i);
	}
	return sum;
}
