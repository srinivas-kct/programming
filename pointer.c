#include <stdio.h>

int main()
{

    //char s[][]={"hello","world"};
    int a=6356700,b=6356700;
    char *pt[2];
    pt[0]=a;
    pt[1]=b;
    char s[]="helloworld";
    char *p[]={"hello","kct"};
    printf("%d\n%d\n%d",p,p+1,&s);
    printf("%s",*pt);
    return 0;
}




//6356716
