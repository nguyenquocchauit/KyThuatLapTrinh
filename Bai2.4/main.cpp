#include <stdio.h>
#include "TietKiem.h"

int main() {
	int n,m;
	float i=0.2;
	printf("Nhap so tien can gui!\n");
	scanf("%d",&m);
	printf("Nhap so nam can tien can gui!\n");
	scanf("%d",&n);
	printf("So tien %d gui vao sau %d nam voi lai suat %.1f la %.1f (Khong de quy)!\n",m,n,i,tietKiemKhongDQ(m,i,n));
	printf("So tien %d gui vao sau %d nam voi lai suat %.1f la %.1f (De quy)!\n",m,n,i,tietKiemDQ(m,i,n));
	return 0;
}
