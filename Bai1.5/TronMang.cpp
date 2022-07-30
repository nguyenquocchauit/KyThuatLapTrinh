<<<<<<< HEAD
#include<stdio.h>
#include "TronMang.h"
void xuatMang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t ",arr[i]);
	}
}
void tronMang(int a[],int b[], int c[],int n,int m,int &k)
{
	int i=0,j=0;
	while((i<n) && (j<m))
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<n) // duyet den cuoi phan tu mang a
	{
      c[k++]=a[i++];
   	}
   	while(j<m) // duyet den cuoi phan tu mang b
   	{
      c[k++]=b[j++];
   	}
}
=======
#include<stdio.h>
#include "TronMang.h"
void xuatMang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t ",arr[i]);
	}
}
void tronMang(int a[],int b[], int c[],int n,int m,int &k)
{
	int i=0,j=0;
	while((i<n) && (j<m))
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<n) // duyet den cuoi phan tu mang a
	{
      c[k++]=a[i++];
   	}
   	while(j<m) // duyet den cuoi phan tu mang b
   	{
      c[k++]=b[j++];
   	}
}
>>>>>>> 3a48ab6e9ba49582255d02c021098351483ef82a
