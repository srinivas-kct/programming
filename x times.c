#include<stdio.h>
int main(){
int n,a[1000],x,i;
static int count[100000000];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    count[a[i]]++;
}
scanf("%d",&x);
printf("%s",(count[x]==x)?"YES":"NO");
return 0;
}
