#include "Pascal.h"
#include <stdio.h>
int PascalDQ(int k,int n)
{
	if(k==0 || k==n)
		return 1;
	if(k==1)
		return n;
	return PascalDQ(k-1,n-1) + PascalDQ(k,n-1);
}
void PascalKhongDQ(int n)
{
	int A[10][10];
	for(int i = 0;i < n;i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i == j || j == 0)
            {
                A[i][j] = 1;
                printf("%d\t", A[i][j]);
            }
            else
            {
                A[i][j] = A[i-1][j-1] + A[i-1][j];
                printf("%d\t", A[i][j]);
            }
        }
        printf("\n");
    }
}
