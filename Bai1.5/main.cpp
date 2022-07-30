<<<<<<< HEAD
#include <stdio.h>
#include "TronMang.h"


int main() 
{
	int a[] ={1,8,25,39,80};
	int b[] ={0,10,15,25,200,200,300};
	int c[100];
	int k=0;
	int aSize = sizeof(a)/sizeof(a[0]);
	int bSize = sizeof(b)/sizeof(b[0]);
	printf("Mang a\n");
	xuatMang(a,aSize);
	printf("\n");
	printf("Mang b\n");
	xuatMang(b,bSize);
	printf("\n");
	tronMang(a,b,c,aSize,bSize,k);
	printf("Mang c\n");
	xuatMang(c,k);
	return 0;
	
	
}
=======
#include <stdio.h>
#include "TronMang.h"


int main() 
{
	int a[] ={1,8,25,39,80};
	int b[] ={0,10,15,25,200,200,300};
	int c[100];
	int k=0;
	int aSize = sizeof(a)/sizeof(a[0]);
	int bSize = sizeof(b)/sizeof(b[0]);
	printf("Mang a\n");
	xuatMang(a,aSize);
	printf("\n");
	printf("Mang b\n");
	xuatMang(b,bSize);
	printf("\n");
	tronMang(a,b,c,aSize,bSize,k);
	printf("Mang c\n");
	xuatMang(c,k);
	return 0;
	
	
}
>>>>>>> 3a48ab6e9ba49582255d02c021098351483ef82a
