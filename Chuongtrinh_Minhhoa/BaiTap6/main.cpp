#include<stdio.h>
int sl;
int soNguyen[100];
FILE *fp;
void ReadFile( char text_file[])
{
	fp = fopen(text_file,"r");
	if(fp==NULL)
		printf("File %s not found!\n",text_file);
	else
	{
		fscanf(fp,"%d",&sl);
		for(int i=0;i<sl;i++)
			fscanf(fp,"%d",&soNguyen[i]);
		fclose(fp);
	}
}
void PrintArr(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void SortArr( int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i] >= a[j])
			{
				int tmp = a[i];
				a[i] =a[j];
				a[j] = tmp;
			}
	}
	
}
int main()
{
	char text_file[] = "..\\songuyenchuasapxep.txt";
	ReadFile(text_file);
	printf("The current file has been read in!\n");
	PrintArr(soNguyen,sl);
	printf("\nFile are sorted in ascending order!\n");
	SortArr(soNguyen,sl);
	PrintArr(soNguyen,sl);
	/*luu danh sach vua sap xep vao file txt moi*/
	FILE *arr = fopen("..\\songuyendasapxep.txt", "w+");
	fprintf(arr,"%d\n",sl);
	for(int i=0;i<sl;i++)
		fprintf(arr,"%d ",soNguyen[i]);
	fclose(arr);
	return 0;
	
}
