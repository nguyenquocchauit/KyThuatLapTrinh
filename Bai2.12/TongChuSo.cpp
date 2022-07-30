#include "TongChuSo.h"
int tinhTong(int n)
{
	if(n==0)
		return 0;
	else
		return n%10 + tinhTong(n/10);
}
