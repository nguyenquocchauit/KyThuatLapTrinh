/*
doc file xu ly phuong trinh bac 2 nhieu dong
*/

#include<stdio.h>
#include<math.h>
FILE *fp;
FILE *f;


void PhuongTrinhBacHai(float a,float b,float c)
{
	char pt[100];
	if(a==0)
		if(b==0)
			if(c==0)
			{
				printf("Phuong trinh vo so nghiem\n");
				sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Phuong trinh vo so nghiem\n", a,b,c);
				fputs(pt,f);			
			}
			else
			{
				printf("Phuong trinh vo nghiem\n");
				sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Phuong trinh vo nghiem\n", a,b,c);
				fputs(pt,f);
			}
				
		else
		{
			printf("Phuong trinh co nghiem duy nhat: %.1f\n",float(-c/b));	
			sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Phuong trinh co nghiem duy nhat: %.1f\n", a,b,c,float(-c/b));
			fputs(pt,f);
		}
	else
	{
		int delta=b*b - 4*a*c;
		if(delta>0)
		{
			float x1=float((-b+sqrt(delta))/(2*a));
			float x2=float((-b-sqrt(delta))/(2*a));
			printf("Nghiem thu nhat x1 = %.1f ",x1);
			printf("Nghiem thu nhat x2 = %.1f\n",x2);
			sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Nghiem thu nhat x1 = %.1f, Nghiem thu nhat x2 = %.1f\n ", a,b,c,x1,x2);
			fputs(pt,f);
		}
		else
			if(delta==0)
			{
				printf("Nghiem co nghiem kep x1=x2= %.1f",float(-b/2*a));
				sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Nghiem co nghiem kep x1=x2= %.1f\n", a,b,c,float(-b/2*a));
				fputs(pt,f);
			}	
			else
			{
				printf("Phuong trinh vo nghiem\n");	
				sprintf(pt, "%.1fX^2 + %.1fX + %.1f = 0 \t Phuong trinh vo nghiem\n", a,b,c);
				fputs(pt,f);
			}
				
	}		
}

int main()
{	
	float a,b,c,x1,x2,kq;
	char text_file[] = "..\\ptbac2.txt";
	char pt[100];
	fp = fopen(text_file,"r");
	f = fopen("..\\KQptbac2.txt", "w+");
	if(fp==NULL)
		printf("File %s not found!\n",text_file);
	else
		while(fscanf(fp, "%f %f %f", &a, &b, &c) != EOF)
		{
			printf("\n%.1fx^2 + %.1fx + %.1f = 0 \t", a, b, c);
			PhuongTrinhBacHai(a,b,c);
			
		}
	return 0;
}
