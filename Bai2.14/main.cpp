#include <stdio.h>
#include "UCLN.h"

int main() {
	int a=91,b=287;
	printf("UCLN cua a(%d) va b(%d) la %d (Khong de quy)\n",a,b,UCLNKhongDQ(a,b));
	printf("UCLN cua a(%d) va b(%d) la %d (De quy)",a,b,UCLNDQ(a,b));
	return 0;
}
