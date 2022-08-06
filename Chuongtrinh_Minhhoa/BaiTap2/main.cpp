/*
tính kich thuoc file 
*/
#include<stdio.h>
FILE *fp;
long int SizeFile( char text_file[])
{
	fp= fopen(text_file,"r");
	if(fp==NULL)
	{
		return printf("File %s not found!",text_file);
		return -1;
	}
	//fseek(FILE *stream, long int offset, int whence)
	fseek(fp,0,SEEK_END); // SEEK_END cuoi file
	// ftell(FILE *stream) , kich thuoc
	long int res = ftell(fp);
    fclose(fp);
    return res;
}
int main()
{
	char text_file[] = "..\\Tiengthu_LuuTrongLu.txt";
    long int res = SizeFile(text_file);
    if (res != -1)
        printf("Kich thuoc file la %ld bytes \n", res);
	return 0;
}
