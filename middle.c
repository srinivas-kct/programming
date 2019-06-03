#include<stdio.h>
int main(){
int n,i,s,e,a[100],flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
s=a[0];
e=a[n-1];
for(i=1;i<n-1;i++)
    if(!(a[i]>s&&a[i]<e)){
        flag=1;
        break;
    }
printf("%s",flag?"NO":"YES");
return 0;
}
