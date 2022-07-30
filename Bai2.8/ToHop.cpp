#include "ToHop.h"
int toHop(int k,int n)
{
	if(k==0 || k==n)
		return 1;
	if(k==1)
		return n;
	if(k>n)
		return 0;
	return toHop(k-1,n-1) + toHop(k,n-1);
}
