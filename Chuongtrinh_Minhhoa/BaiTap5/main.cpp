/*
doc file txt sinhvien quan ly sap xep theo diem trung binh
*/
#include <stdio.h>
#include<math.h>
FILE *fp;

typedef struct sinhVien
{
	char mssv[20];
	char name[50];
	float diemtb;
}SV;
void ReadText(char text_file[], SV sv[],int &count)
{
	fp=fopen(text_file,"r");
	if(fp==NULL)
		printf("File %s not found!\n",text_file);
	else
		while(fscanf(fp,"%[^,], %[^,], %f", &sv[count].mssv, &sv[count].name, &sv[count].diemtb) != EOF)	
			count++;
	fclose(fp);
}
void PrintArr(SV a[],int count)
{
	for(int i=0; i<count; i++)
		printf("%s\t %s\t %.1f\n", a[i].mssv, a[i].name, a[i].diemtb);
}
void SortArr(SV a[], int count)
{
	for(int i=0; i<count-1; i++)
	{
		for(int j=i+1; j<count; j++)
		{
			if(a[i].diemtb < a[j].diemtb)
			{
				SV tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
}
int main()
{
	int count=0;
	char text_file[] = "..\\sinhvien.txt";
	SV sv[100];
	ReadText(text_file,sv,count);
	PrintArr(sv,count);
	printf("\nFile are sorted in ascending order!\n");
	SortArr(sv,count);
	PrintArr(sv,count);
	return 0;
}
