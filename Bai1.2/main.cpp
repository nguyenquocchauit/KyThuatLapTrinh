#include<stdio.h>
#include "SoNguyen.h"
#include <conio.h>
#include <stdlib.h>

int main() { 
	int n, a[max],key;
	bool daNhap = false;
	while(true){
		system("cls");
        printf("**********************************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN                    **\n");
        printf("**      1. Nhap du lieu mang                            **\n");
        printf("**      2. In danh sach mang                            **\n");
        printf("**      3. Danh sach so nguyen to                       **\n");
        printf("**      4. Danh sach so chinh phuong                    **\n");
        printf("**      5. Danh sach phan tu lon hon trung binh mang    **\n");
        printf("**      6. Phan tu lon nhat trong mang                  **\n");
        printf("**      7. Kiem tra mang da tang dan                    **\n");
        printf("**      8. Sap xep mang tang dan                        **\n");
        printf("**      9. Sap xep mang giam dan                        **\n");
        printf("**      0. Thoat                                        **\n");
        printf("**********************************************************\n");
        printf("**       Nhap lua chon cua ban                          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap du lieu mang !\n");
                do{
					printf("Nhap so phan tu can nhap!\n");
					scanf("%d",&n);
				}while(!(n>0 && n<=max));
                nhapMang(a,n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatMang(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon danh sach so nguyen to !");
                    xuatMang(a,n);
                    xuatNguyenTo(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                if(daNhap){
                    printf("\nBan da chon danh sach so chinh phuong!");
                    xuatMang(a,n);
                    xuatChinhPhuong(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
			case 5:
                if(daNhap){
                    printf("\nBan da chon danh sach phan tu lon hon trung binh mang!");
                    xuatMang(a,n);
                    trungBinhMang(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 6:
                if(daNhap){
                    printf("\nBan da chon phan tu lon nhat trong mang!");
                    xuatMang(a,n);
                    soLonNhat(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 7:
                if(daNhap){
                    printf("\nBan da chon kiem tra mang da tang dan!");
                    xuatMang(a,n);
                    kQKiemTraTangDan(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 8:
                if(daNhap){
                    printf("\nBan da chon sap xep mang tang dan!");
                    xuatMang(a,n);
                    sapXepTangDan(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 9:
                if(daNhap){
                    printf("\nBan da chon sap xep mang giam dan!");
                    xuatMang(a,n);
                    sapXepGiamDan(a,n);
                }else{
                    printf("\nNhap danh sach mang truoc!!!!");
                }
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
