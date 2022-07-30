#include <stdio.h>
#include <math.h>
#include "ChuyenDoiCoSo.h"
void chuyenDoiDQ(int number)
{
	if(number==0)
		return ;
	else
	{
		int r=number%2;
		chuyenDoiDQ(number/2);
		printf("%d", r);
		
	}
}
long chuyenDoiKhongDQ(int number)
{
	long numb =0;
	int p=0;
	while(number>0)
	{
		numb += (number % 2) * pow(10, p);
        ++p;
        number /= 2;
	}
	return numb;
}
