#include <stdio.h>
#include "Fibonacci.h"

int main() {
	int n;
	do{
		printf("Nhap n!\n");
		scanf("%d",&n);
	}while(!(n>2));
	printf("Fibonacci de quy n(%d) = %d\n",n,FibonacciDQ(n));
	printf("Fibonacci khong de quy n(%d) = %d\n",n,FibonacciKhongDQ(n));
	return 0;
}
