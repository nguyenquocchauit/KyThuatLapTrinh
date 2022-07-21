#ifndef sinhVien_h
#define sinhVien_h
typedef struct sinhVien
{
	char mssv[10];
	char name[50];
	float diemtb;
}SV;
void nhapSinhVien(SV &sv);
void nhapDSSSinhVien(SV sv[],int n);
void xuatSinhVien(SV sv);
void xuatDSSSinhVien(SV sv[],int n);
void timKiemSinhVien(SV sv[],int n);
void sapXepSinhVien(SV sv[], int n, int m);
#endif

