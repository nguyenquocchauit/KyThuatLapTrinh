#include <stdio.h>
#include "DaoNguocSo.h"
void sodaonguoc( int n)
{
   	int t=n%10;
    if(n>0)
		printf("%d",t);  		
	sodaonguoc(n/10);
}
