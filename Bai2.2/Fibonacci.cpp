#include "Fibonacci.h"
int FibonacciDQ(int n)
{
	if((n==1)||(n==2))
		return 1;
	return FibonacciDQ(n-1) + FibonacciDQ(n-2);
}
int FibonacciKhongDQ(int n)
{
	int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
