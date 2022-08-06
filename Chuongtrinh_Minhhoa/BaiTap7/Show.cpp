/*
truyen doi so cho main la file txt
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char* argv[])
{
	FILE *a = fopen(argv[1], "r");
	char b[200];
	while(fgets(b, 200, a) != NULL)
	printf("%s", b);
	fclose(a);
	return 0;
}
