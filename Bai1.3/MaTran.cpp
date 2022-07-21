#include "MaTran.h"
#include<stdio.h>
#include<math.h>

void nhapMaTran(int a[max][max],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatMaTran(int a[max][max],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("a[%d][%d]= %d\t ",i,j,a[i][j]);
		}
		printf("\n");
	}
}
int tongGiaTriMaTran(int a[max][max],int n,int m)
{
	int sum=0;
	if(m<=0 || n<=0)
		return 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
	}
	return sum;
}
double trungBinhCong(int a[max][max],int n,int m)
{
	
	double tbc=tongGiaTriMaTran(a,n,m)/(n*m);
	return tbc;
}
void soLonNhat(int a[max][max],int n,int m)
{
	int tmp=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			if(tmp<=a[i][j])
				tmp=a[i][j];
		}
	}
	printf("So lon nhat trong mang la %d\n",tmp);
}
void soLonNhatTrenDong(int a[max][max],int n,int m)
{
	int vitriN=0,tmp;
	do{
		printf("Nhap dong can tim so lon nhat!\n");
		scanf("%d",&vitriN);
	}while(!(vitriN>=0 && vitriN<=n));
	tmp=a[vitriN-1][0];
	for(int i=1;i<m;i++)
	{
		if(tmp<=a[vitriN-1][i])
			tmp=a[vitriN-1][i];
	}
	printf("So lon nhat trong dong thu %d cua mang la %d\n",vitriN,tmp);
}
void soLonNhatTrenCot(int a[max][max],int n,int m)
{
	int vitriM=0,tmp;
	do{
		printf("Nhap dong can tim so lon nhat!\n");
		scanf("%d",&vitriM);
	}while(!(vitriM>=0 && vitriM<=m));
	tmp=a[0][vitriM-1];
	for(int i=1;i<n;i++)
	{
		if(tmp<=a[i][vitriM-1])
			tmp=a[i][vitriM-1];
	}
	printf("So lon nhat trong cot thu %d cua mang la %d\n",vitriM,tmp);
}
bool kiemTraNguyenTo(int a)
{
	if(a<2)
		return false;
	for(int i=2; i<=sqrt(a);i++)
	{
		if(a%2==0)
			return false;
	}
	return true;
}
void soNguyenTo(int a[max][max],int n,int m)
{
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(kiemTraNguyenTo(a[i][j]))
				count++;
		}
	printf("Co %d so nguyen to trong mang!\n",count);
}

void sapXepTangDan(int a[max][max],int n,int m)
{
	for(int i = 0;i<n;i++)
	{
        for(int j = 0; j<m; j++)
		{
            for(int k = j+1; k<m; k++)
			{
                if(a[i][j] > a[i][k])
				{ 
                	int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    xuatMaTran(a,n,m);
}
void sapXepTangDanTranDong(int a[max][max],int n,int m,int vitri)
{
	for(int j = 0; j<m; j++)
	{
        for(int k = j+1; k<m; k++)
		{
            if(a[vitri-1][j] > a[vitri-1][k])
			{ 
                int temp = a[vitri-1][j];
                a[vitri-1][j] = a[vitri-1][k];
                a[vitri-1][k] = temp;
            }
    	}
    }
    xuatMaTran(a,n,m);
}
