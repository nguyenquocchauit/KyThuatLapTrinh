<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>     /* atoi */

int main(int argc, char *argv[])
{
	if(argc==4){
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        char pt = *argv[2];
        switch (pt)
        {
        case '+':
        	printf("%d + %d = %d\n",x,y,x+y);
            break;
        case '-':
            printf("%d - %d = %d\n",x,y,x-y);
            break;
        case '*':
            printf("%d * %d = %d\n",x,y,x*y);
            break;
        case '/':
            printf("%d / %d = %.1f\n",x,y,(float)x+y);
            break;
        default:
        	printf("Phep toan khong hop le!\n");
            break;
        }
    }
    else{
    	printf("Nhap sai dinh dang!\n");
    }
    return 0;
	
}
=======
#include <stdio.h>
#include <stdlib.h>     /* atoi */

int main(int argc, char *argv[])
{
	if(argc==4){
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        char pt = *argv[2];
        switch (pt)
        {
        case '+':
        	printf("%d + %d = %d\n",x,y,x+y);
            break;
        case '-':
            printf("%d - %d = %d\n",x,y,x-y);
            break;
        case '*':
            printf("%d * %d = %d\n",x,y,x*y);
            break;
        case '/':
            printf("%d / %d = %.1f\n",x,y,(float)x+y);
            break;
        default:
        	printf("Phep toan khong hop le!\n");
            break;
        }
    }
    else{
    	printf("Nhap sai dinh dang!\n");
    }
    return 0;
	
}
>>>>>>> 3a48ab6e9ba49582255d02c021098351483ef82a
