#include<stdio.h>
#include "ThapHN.h"
void thapHN(int n , char a, char b, char c )
{
	if(n==1){
        printf("\t%c-------%c\n",a,c);
        return;
    }
    thapHN(n-1,a,c,b);
    thapHN(1,a,b,c);
    thapHN(n-1,b,a,c);
}
