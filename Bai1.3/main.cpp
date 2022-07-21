#include <stdio.h>
#include "MaTran.h"
#include <conio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[max][max];
	int n,m,key;
	bool daNhap = false;
	while(true){
		system("cls");
        printf("**********************************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN                    **\n");
        printf("**      1. Nhap du lieu ma tran                         **\n");
        printf("**      2. In danh sach ma tran                         **\n");
        printf("**      3. Tinh trung binh cong ma tran                 **\n");
        printf("**      4. Phan tu lon nhat trong ma tran               **\n");
        printf("**      5. Phan tu lon nhat tren dong trong ma tran     **\n");
        printf("**      6. Phan tu lon nhat tren cot trong ma tran      **\n");
        printf("**      7. Dem so phan tu nguyen to trong ma tran       **\n");
        printf("**      8. Sap xep tang dan tung hang cua ma tran       **\n");
        printf("**      9. Sap xep tang dan theo dong cua ma tran       **\n");
        printf("**      0. Thoat                                        **\n");
        printf("**********************************************************\n");
        printf("**       Nhap lua chon cua ban                          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap du lieu ma tran !\n");
                do{
					printf("Nhap so dong!\n");
					scanf("%d",&n);
				}while(!(n<max && n>0));
				do{
					printf("Nhap so cot!\n");
					scanf("%d",&m);
				}while(!(m<max && m>0));
                nhapMaTran(a,n,m);
                printf("\nBan da nhap thanh cong!\n");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat ma tran!\n");
                    xuatMaTran(a,n,m);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon tinh trung binh cong ma tran !\n");
                    xuatMaTran(a,n,m);
					printf("Trung binh cong cua mang la %.1f\n",trungBinhCong(a,n,m));
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 4:
                if(daNhap){
                    printf("\nBan da chon phan tu lon nhat trong ma tran !\n");
                    xuatMaTran(a,n,m);
                    soLonNhat(a,n,m);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
			case 5:
                if(daNhap){
                    printf("\nBan da chon phan tu lon nhat tren dong trong ma tran !\n");
                    xuatMaTran(a,n,m);
                    soLonNhatTrenDong(a,n,m);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 6:
                if(daNhap){
                    printf("\nBan da chon phan tu lon nhat tren cot trong ma tran!\n");
                    xuatMaTran(a,n,m);
                    soLonNhatTrenCot(a,n,m);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 7:
                if(daNhap){
                    printf("\nBan da chon dem so phan tu nguyen to trong ma tran  !\n");
                    xuatMaTran(a,n,m);
                    soNguyenTo(a,n,m);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 8:
                if(daNhap){
                    printf("\nBan da chon sap xep mang tang dan!\n");
                    printf("\nMang ban dau!\n");
                    xuatMaTran(a,n,m);
                    printf("\nMang sau khi duoc sap xep tang dan theo tung hang!\n");
                    sapXepTangDan(a,n,m);
                    
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 9:
                if(daNhap){
                    printf("\nBan da chon sap xep tang dan theo dong cua ma tran!\n");
                    printf("\nMang ban dau!\n");
                    xuatMaTran(a,n,m);
                    printf("\nNhap dong can sap xep!\n");
                    int vitri;
                    scanf("%d",&vitri);
                    printf("\nMang sau khi duoc sap xep tang dan theo tung hang!\n");
                    sapXepTangDanTranDong(a,n,m,vitri);
                    
                }else{
                    printf("\nNhap danh sach mang truoc!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!\n");
                getch();
                
                return 0;
            default:
                printf("\nKhong co chuc nang nay!\n");
                printf("\nBam phim bat ky de tiep tuc!\n");
                getch();
                break;
		}
	}
	soLonNhat(a,n,m);
	soLonNhatTrenDong(a,n,m);
	soLonNhatTrenCot(a,n,m);
	return 0;
}
