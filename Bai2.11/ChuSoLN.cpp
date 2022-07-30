#include<stdio.h>
#include "ChuSoLN.h"
int chuSoLN(int n,int &max)
{
	int m;
	if(n==0)
		return max;
	else
	{
		m=n%10;
		if(m>max)
			max=m;
	}
	return chuSoLN(n/10,max);
}
