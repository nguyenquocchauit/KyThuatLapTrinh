#include "UCLN.h"
#include <stdio.h>
int UCLNKhongDQ(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int UCLNDQ(int a, int b)
{
	if(b==0)
		return a;
	if(a%b==0)
		return b;
	return UCLNDQ(b,a%b);
}
