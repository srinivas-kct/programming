#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if((j%2!=0 || i%2!=0 || 4a%2==1))
             printf("1");
            else printf("0");
        }
        printf("\n");
    }
}
