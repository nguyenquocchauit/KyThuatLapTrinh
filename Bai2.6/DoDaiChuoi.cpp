#include "DoDaiChuoi.h"
#include <stdio.h>

int doDaiChuoi( char s[],int n)
{
	if(s[n]==NULL)
		return 0;
	else
		return 1+doDaiChuoi(s,n+1);
	
}
