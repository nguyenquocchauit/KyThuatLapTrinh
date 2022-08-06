/*
doc file 
*/
#include<stdio.h>
FILE *fp;

void ReadTextFile(char fname[])
{
	 // Khai bao con tro file	
	fp = fopen(fname, "rt"); // r: readonly, t: text
	if(fp == NULL)
		printf("Khong mo duoc file %s.", fname);
	else
	{   // Doc tung ky tu -> in ra man hinh
		while(!feof(fp)) // feof ham tra ve 0 se ket thuc
		{
			printf("%c", fgetc(fp));
		}
	}
	fclose(fp); // dong file
}

int main()
{
	char fname[] = "..\\Tiengthu_LuuTrongLu.txt";
	ReadTextFile(fname);
}

