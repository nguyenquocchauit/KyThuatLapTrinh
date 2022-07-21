#include "SinhVien.h"
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int sl,m,key;
	bool daNhap = false;
	sinhVien sv[100];
	while(true){
		system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach sinh vien       **\n");
        printf("**      3. Sap xep sinh vien theo DTB   **\n");
        printf("**      4. Tim kiem sinh vien theo MSSV **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap DS sinh vien!\n");
                do{
					printf("Nhap so luong sinh vien can nhap\n");
					scanf("%d",&sl);
				}while(sl<=0 || sl>=100);
				nhapDSSSinhVien(sv,sl);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatDSSSinhVien(sv,sl);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon sap xep SV theo diem TB!");
                    printf("Nhap 0 (tang)| 1 (giam) \n");
					scanf("%d",&m);
					sapXepSinhVien(sv,sl,m);
					xuatDSSSinhVien(sv,sl);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                if(daNhap){
                    printf("\nBan da chon tim kiem SV theo diem MSSV!");
                    timKiemSinhVien(sv,sl);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
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
