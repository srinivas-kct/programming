#include<stdio.h>
int main(){
int n,i,rem;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",a[i]);
for(i=i-1;i>=0;i--){
    rem=a[i]%10;
    printf("%d ",rem);

}

}
