/*
doc file xu ly phuong trinh bac 2
*/

#include<stdio.h>
#include<math.h>

FILE *fp;
int a,b,c,delta;
float x1,x2,kq;
void ReadFile( char text_file[])
{
	fp=fopen(text_file,"r");
	if (fp==NULL)
		printf("File %s not found!",text_file);
	else
	{
		fscanf(fp,"%d",&a);
		fscanf(fp,"%d",&b);
		fscanf(fp,"%d",&c);
	}
	fclose(fp);		
}

void PhuongTrinhBacHai(int a,int b,int c)
{
	
	if(a==0)
		if(b==0)
			if(c==0)
				printf("Phuong trinh vo so nghiem\n");
			else
				printf("Phuong trinh vo nghiem\n");
		else
		{
			kq = float(-c/b);
			printf("Phuong trinh co nghiem duy nhat: %.1f\n",kq);
		}
			
	else
	{
		delta=b*b - 4*a*c;
		
		if(delta>0)
		{
			x1=float((-b+sqrt(delta))/(2*a));
			x2=float((-b-sqrt(delta))/(2*a));
			printf("\Nghiem thu nhat x1 = %d",x1);
			printf("\Nghiem thu nhat x2 = %d",x2);
		}
		else
			if(delta==0)
			{
				kq = float(-b/2*a);
				printf("\Nghiem co nghiem kep x1=x2= %.1f",kq);
			}	
			else
				printf("Phuong trinh vo nghiem\n");	
	}
			
}
int main()
{
	char text_file[] = "..\\phuongtrinhbac2.txt";
	char pt[50];
	
	ReadFile(text_file);
	printf("Phuong trinh %dX^2 + %dX + %d = 0\n",a,b,c);
	PhuongTrinhBacHai(a,b,c);
	fp = fopen("..\\kqphuongtrinhbac2.txt", "w+");
	sprintf(pt, "%dX^2 + %dX + %d = 0 \nla %.1f\n", a,b,c,kq);
	fputs(pt, fp);
	return 0;
}

