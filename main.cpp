/*
Vi?t code c?a b?n ? dây
*/

#include<stdio.h>
#include<math.h>
typedef int m2c[10][10];
void NhapMT(m2c a, int &sohang, int &socot)
{
    for(int i=0;i<sohang;i++)
        for(int j=0;j<socot;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
}
void XuatMT( m2c a, int sohang,int socot)
{
    printf("\nDanh sach phan tu trong ma tran\n");
    for(int i=0;i<sohang;i++)
        for(int j=0;j<socot;j++)
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);
}
int laSNT (int n)
{
    if(n<2)
        return 1; 
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 1;
    return 0;
    
}
int tongTrenHang(m2c a, int sohang,int socot,int vitri)
{
    int sum=0;
    for(int i=0;i<socot;i++)
        sum+=a[vitri-1][i];
    return sum;
    
      
}
int main()
{
    // Main program
    int n,m,vitri=1;
    int sumrow=0,sum=0;
    m2c a;
    printf("Nhap so hang\n");
    scanf("%d",&n);
    printf("Nhap so cot\n");
    scanf("%d",&m);
    NhapMT(a,n,m);
    XuatMT(a,n,m);
    tongTrenHang(a,n,m,vitri);
    printf("\nDanh sach so nguyen to trong ma tran\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(laSNT(a[i][j])==0)
                printf("a[%d][%d] = %d\n",i,j,a[i][j]);
    
    for(int i=1;i<=n;i++)
    {
        sumrow=tongTrenHang(a,n,m,i);
        sum+=sumrow;
    }
    printf("\nTong cac phan tu toan ma tran la %d\n",sum);
    return 0;
    
}
