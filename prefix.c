#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,len=0,j;
    scanf("%d",&n);
    char a[n][100000];
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    len=strlen(a[i]);
    for(i=0;i<n;i++)
    {
        if(len>strlen(a[i]));
            len=strlen(a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<len;j++)
        {
            if(a[i][j]==a[i+1][j])
            {

            }
            else{
                len=j;
                break;
            }
        }
    }
    for(i=0;i<len;i++)
        printf("%c",a[0][i]);
}
