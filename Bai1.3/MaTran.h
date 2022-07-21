#include<stdio.h>
#define max 50
void nhapMaTran(int a[max][max],int &n,int &m);
void xuatMaTran(int a[max][max],int n,int m);
int tongGiaTriMaTran(int a[max][max],int n,int m);
double trungBinhCong(int a[max][max],int n,int m);
void soLonNhat(int a[max][max],int n,int m);
void soLonNhatTrenDong(int a[max][max],int n,int m);
void soLonNhatTrenCot(int a[max][max],int n,int m);
bool kiemTraNguyenTo(int a);
void soNguyenTo(int a[max][max],int n,int m);
void sapXepTangDan(int a[max][max],int n,int m);
void sapXepTangDanTranDong(int a[max][max],int n,int m,int vitri);
