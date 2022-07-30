#include <stdio.h>
#include "TinhGiaTri.h"
#include <conio.h>
#include <stdlib.h>
int main() {
	int key;
	float x;
	int n;
	bool daNhap = false;
	while(true){
		system("cls");
        printf("**********************************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN                    **\n");
        printf("**      1. Tinh luy thua x^n                            **\n");
        printf("**      2. Tinh giai thua n! (n>=0)                     **\n");
        printf("**      3. Tinh tong so nguyen toi n (n>=0)             **\n");
        printf("**      4. Tinh tong so nguyen le toi n (n>=0)          **\n");
        printf("**      5. Tinh tong so nguyen chan toi n (n>=0)        **\n");
        printf("**      6. Tinh tong so nguyen to <=n (n>0)             **\n");
        printf("**      7. Dem so nguyen to <=n (n>0)                   **\n");
        printf("**      0. Thoat                                        **\n");
        printf("**********************************************************\n");
        printf("**       Nhap lua chon cua ban                          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon Tinh luy thua x^n !\n");
                printf("Nhap x!\n");
				scanf("%f",&x);
				printf("Nhap n!\n");
				scanf("%d",&n);
				printf("Ket qua khong de quy %.3f\n",soMuKhongDQ(x,n));
				printf("Ket qua de quy %.3f\n",soMuDQ(x,n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                printf("\nBan da chon Tinh giai thua n! (n>=0)!\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>=0));
				printf("Ket qua giai thua khong de quy %d! = %d\n",n,giaiThuaKhongDQ(n));
				printf("Ket qua giai thua de quy %d! = %d\n",n,giaiThuaDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                printf("\nBan da chon Tinh tong so nguyen toi n (n>=0)!\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>=0));
				printf("Ket qua tong so nguyen khong de quy S(%d) = %d\n",n,tongSoNKhongDQ(n));
				printf("Ket qua tong so nguyen de quy S(%d) = %d\n",n,tongSoNDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                printf("\nBan da chon Tinh tong so nguyen le toi n (n>=0) !\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>=0));
				printf("Ket qua tong so nguyen le toi S(%d) = %d khong de quy\n",n,tongSoNLeKhongDQ(n));
				printf("Ket qua tong so nguyen de quy S(%d) = %d\n",n,tongSoNLeDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 5:
                printf("\nBan da chon Tinh tong so nguyen chan toi n (n>=0)  !\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>=0));
				printf("Ket qua tong so nguyen chan toi S(%d) = %d khong de quy\n",n,tongSoNChanKhongDQ(n));
				printf("Ket qua tong so nguyen chan de quy S(%d) = %d\n",n,tongSoNChanDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 6:
                printf("\nBan da chon tinh tong so nguyen to <=n (n>0) !\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>0));
				printf("Ket qua tong so nguyen to <=n(%d) = %d khong de quy\n",n,soNguyenToKhongDQ(n));
				printf("Ket qua tong so nguyen to de quy <=n(%d) = %d\n",n,soNguyenToDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 7:
                printf("\nBan da chon dem so nguyen to <=n (n>0)  !\n");
                do
                {
                	printf("Nhap n!\n");
					scanf("%d",&n);
				}while(!(n>0));
				printf("Ket qua tong so nguyen to <=n(%d) = %d khong de quy\n",n,tongSoNguyenToKhongDQ(n));
				printf("Ket qua tong so nguyen to de quy <=n(%d) = %d\n",n,tongSoNguyenToDQ(n));
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
		}
	}

	
	return 0;
}
