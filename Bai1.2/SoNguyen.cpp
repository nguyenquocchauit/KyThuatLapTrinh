#include "SoNguyen.h"
#include<stdio.h>
#include<math.h>

void nhapMang(int a[], int &n)
{
	printf("Nhap gia tri cho mang!\n");
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	printf("Danh sach la!\n");
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= %d \n",i+1,a[i]);
	}
}
void xoa1PhanTu(int arr[], int &n, int ViTriXoa)
{
	for(int i=ViTriXoa;i<=n;i++)
	{
		arr[i] = arr[i + 1];
	}
}
void locTrung(int a[],int n)
{
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					xoa1PhanTu(a,n,j);
					n--;
					j--;
				}
			}
		}
	xuatMang(a,n);
}
bool kiemTraNguyenTo(int n)
{
	if(n<2)
		return false;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void xuatNguyenTo(int a[],int n)
{
	int arr[max],count=0; // kiem tra trung lap 
	for( int i=0; i<n ; i++)
	{
		if(kiemTraNguyenTo(a[i]))
		{
			arr[count]=a[i];
			count++;
		}
	}
	if(count==0)
		printf("Khong co bat ky so nguyen to nao!\n");
	else
	{
		printf("Danh sach so nguyen to trong mang la!\n");
		locTrung(arr,count);
		
	}
}
bool kiemTraChinhPhuong(int n)
{
	int check = sqrt(n);
	return (check*check==n); // true
}

void xuatChinhPhuong(int a[],int n)
{
	int arr[max],count=0;
	printf("So chinh phuong trong mang!\n");
	for(int i=0;i<n;i++)
	{
		if(kiemTraChinhPhuong(a[i])) // if true
		{
			arr[count]=a[i];
			count++;
		}
	}
	if(count==0)
		printf("Khong co so chinh phuong nao!\n");
	else
		locTrung(arr,count);
	
}
int tongGiaTri(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
void trungBinhMang(int a[],int n)
{
	float tb=0,sum=0;
	int arr[max],count=0;
	sum=tongGiaTri(a,n)/n;
	printf("Phan tu co gia tri lon hon %.1f trung binh mang!\n",sum);
	for(int i=0;i<n;i++)
	{
		if(a[i]>sum)
		{
			arr[count]=a[i];
			count++;
		}
	}
	locTrung(arr,count);
}
void soLonNhat(int a[],int n)
{
	int tmp=a[0];
	for(int i=0;i<n;i++)
	{
		
		
		for(int j=i+1;j<n;j++)
		{
			if(tmp<=a[j])
				tmp=a[j];
		}
	}
	printf("So lon nha trong mang la %d\n",tmp);
}
bool kiemTraTangDan(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			return true;
			break;
		}
			
	}
	return false;
}
void kQKiemTraTangDan(int a[],int n)
{
	if(kiemTraTangDan(a,n))
		printf("Mang chua tang dan!\n");
	else
		printf("Mang da tang dan!\n");
}
void sapXepTangDan(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	xuatMang(a,n);
}
void sapXepGiamDan(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			{
				int tmp = a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	xuatMang(a,n);
}



