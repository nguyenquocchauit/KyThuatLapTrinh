#include<stdio.h>
#include<cstring>
#include "SinhVien.h"
void nhapSinhVien(SV &sv)
{
	printf("Nhap MSSV\n");
	scanf("%s", &sv.mssv);
	fflush(stdin);
	printf("Nhap Ten sinh vien\n");
	scanf("%s", &sv.name);
	fflush(stdin);
	do{
		printf("Nhap Diem trung binh\n");
		scanf("%f", &sv.diemtb);
	}while( (sv.diemtb<0 )|| (sv.diemtb>10 ));
	
	
}

void nhapDSSSinhVien(SV sv[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap sinh vien thu %d\n",i+1);
        nhapSinhVien(sv[i]);
    }
}
void xuatSinhVien(SV sv)
{
	printf("MSSV: %s\n",sv.mssv);
	printf("Ten sinh vien: %s\n",sv.name);
	printf("Diem trung binh: %.2f\n",sv.diemtb);
}
void xuatDSSSinhVien(SV sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Sinh vien thu %d\n",i+1);
		printf("Ma sinh vien: %s\tTen sinh vien: %s\tDiem trung binh: %.1f\n", sv[i].mssv, sv[i].name, sv[i].diemtb);
		printf("\n");
	}
}
void timKiemSinhVien(SV sv[], int n)
{
	char lc[10],cpmssv[10];
	printf("Nhap MSSV can tim \n");
    scanf("%s",&lc);
    fflush(stdin);
	for(int i=0;i<n;i++)
	{
		int result = strcmp(sv[i].mssv,lc);
		if(result == 0)
			xuatSinhVien(sv[i]);
	}	 
}
void sapXepSinhVien(SV sv[], int n, int m)
{
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
        	if( m ==0)
        	{
	            if (sv[i].diemtb > sv[j].diemtb) 
				{
	                SV tmp =  sv[j];
	                sv[j] =  sv[i];
	                sv[i] = tmp;
	            }
        	}
        	else
        	{
        		if (sv[i].diemtb < sv[j].diemtb) 
				{	
                SV tmp =  sv[i];
                sv[i] =  sv[j];
                sv[j] = tmp;
            	}
			}
    }
}
