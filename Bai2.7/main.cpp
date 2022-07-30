#include <stdio.h>
#include "Pascal.h"


int main() {
	int n;
	printf("\nNhap n!\n");
	scanf("%d",&n);
    printf("\N---------PASCAl DE QUY---------\n");
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 0; j <= i; j++) {
        	printf("%d ",PascalDQ(j, i));
        }
        printf("\n");
    }
    printf("\N---------PASCAl KHONG DE QUY---------\n");
    PascalKhongDQ(n);
	return 0;
}
