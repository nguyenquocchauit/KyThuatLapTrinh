#include <stdio.h>
#include "ToHop.h"	

int main() {
	int n,k;
	printf("\nNhap n\n");
	scanf("%d",&n);
	do{
		printf("\nNhap k\n");
		scanf("%d",&k);
	}while(!(0<k && k<n));
	printf("\nTo hop chap %d cua %d la %d",k,n,toHop(k,n));
	return 0;
}
